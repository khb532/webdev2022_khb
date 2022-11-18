import pandas as pd
import matplotlib.pyplot as plt
# import pandas_profiling as pp
import seaborn as sns

data_frame = pd.read_csv('gld_price_data.csv')

print("\n\n[Info]")
print(data_frame.info(), "\n\n")            # info()

print("[Head]")
print(data_frame.head(5), "\n\n")           # head(n) n개만 출력

print("[Tail]")
print(data_frame.tail(5), "\n\n")           # tail(n)

print("[describe]")                         # describe()
print(data_frame.describe(), "\n\n")

print("[isnull]")
print(data_frame.isnull().sum(), "\n\n")    # 결측치
print("[isna]")
print(data_frame.isna().sum(), "\n\n")


df = data_frame.drop(['Date'], axis=1)
"""
plt.plot(df['GLD'], label='GLD')
plt.plot(df['EUR/USD']*100, label='EUR/USD')
plt.legend()
"""
plt.plot(df)
plt.show()

plt.plot(df.drop(['SPX']), axis=1)
plt.show()

correlation = df.corr()
plt.figure(figsize=(8, 8))
sns.heatmap(correlation, annot=True)
plt.show()


from sklearn.model_selection import train_test_split

X = df.drop(['GLD'], axis=1)
Y = df['GLD']

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2, random_state=2)


from sklearn.preprocessing import StandardScaler

std_scaler = StandardScaler()
std_scaler.fit(X_train)
X_train_scaled = std_scaler.transform(X_train)
X_test_scaled = std_scaler.transform(X_test)

plt.plot(X_train_scaled)    # scaled data
print(X_train_scaled, "\n\n")
plt.show()


from sklearn.tree import DecisionTreeRegressor
from sklearn.neighbors import KNeighborsRegressor
from sklearn.linear_model import LinearRegression
from sklearn.ensemble import RandomForestRegressor

DT = DecisionTreeRegressor(random_state=2)
DT.fit(X_train, Y_train)
not_scaled_DTscore = DT.score(X_test, Y_test)
DT.fit(X_train_scaled, Y_train)
scaled_DTscore = DT.score(X_test_scaled, Y_test)

RF = RandomForestRegressor(n_estimators=100, random_state=2)
RF.fit(X_train, Y_train)
not_scaled_RFscore = RF.score(X_test, Y_test)
RF.fit(X_train_scaled, Y_train)
scaled_RFscore = RF.score(X_test_scaled, Y_test)

KN = KNeighborsRegressor(n_neighbors=2)
KN.fit(X_train, Y_train)
not_scaled_KNscore = KN.score(X_test, Y_test)
KN.fit(X_train_scaled, Y_train)
scaled_KNscore = KN.score(X_test_scaled, Y_test)

LR = LinearRegression()
LR.fit(X_train, Y_train)
not_scaled_LRscore = LR.score(X_test, Y_test)
LR.fit(X_train_scaled, Y_train)
scaled_LRscore = LR.score(X_test_scaled, Y_test)

print('Not scaled 스코어: DT={0:.2f}, RF={1:.2f}, K-NN={2:.2f}, LR={3:.2f}'.format(not_scaled_DTscore, not_scaled_RFscore, not_scaled_KNscore, not_scaled_LRscore))
print('Scaled 스코어: DT={0:.2f}, RF={1:.2f}, K-NN={2:.2f}, LR={3:.2f}'.format(scaled_DTscore, scaled_RFscore, scaled_KNscore, scaled_LRscore), "\n\n")
plt.plot(['DT', 'RF', 'K-NN', 'LR'], [not_scaled_DTscore, not_scaled_RFscore, not_scaled_KNscore, not_scaled_LRscore])
plt.plot(['DT', 'RF', 'K-NN', 'LR'], [scaled_DTscore, scaled_RFscore, scaled_KNscore, scaled_LRscore])
plt.show()


from sklearn.model_selection import cross_val_score

basic_score = cross_val_score(RF, X_train_scaled, Y_train)
print('K폴드 검증 Scores : ', basic_score)


test_data_prediction = RF.predict(X_test_scaled)
Y_test = list(Y_test)

plt.plot(Y_test, color='red', label='Actual Value')
plt.plot(test_data_prediction, color='blue', label='Predicted Value')
plt.title('Actual Price vs Predicted Price')
plt.xlabel('Number of values')
plt.ylabel('GLD Price')
plt.legend()
plt.show()


print("\n\nClear")

