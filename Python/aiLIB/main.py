import numpy as np
import pandas as pd  # 데이터 처리 모듈
from patsy import dmatrix
import seaborn as sns
import matplotlib.pyplot as plt  # 데이터 시각화 모듈
# import pandas_profiling as pp
from sklearn.model_selection import train_test_split  # 데이터 분할 모듈
from sklearn.tree import DecisionTreeRegressor
from sklearn.neighbors import KNeighborsRegressor
from sklearn.linear_model import LinearRegression
from sklearn.ensemble import RandomForestRegressor

data_frame = pd.read_csv('gld_price_data.csv')

# print(data_frame.head())

# print(data_frame.tail())

# print(data_frame.info())

# print(data_frame.isnull().sum())
# print(data_frame.describe())

df = data_frame.drop(['Date'], axis=1)

df1 = df[['GLD', 'USO', 'SLV']] * 10
df2 = df['EUR/USD'] * 100
meg = pd.concat([df1, df2], axis=0)

print(meg.head(5))

# print(df.head(5))
#

"""
correlation = data_frame.corr()
plt.figure(figsize = (8,8))
sns.heatmap(correlation, annot = True)
plt.show()
"""
"""
sns.jointplot(x='SLV',y='GLD',kind='hex',data=data_frame)


df = data_frame.drop(['SPX'],axis=1)
df.plot()

X = data_frame.drop(['Date','GLD','EUR/USD'],axis=1)  #axis = 0은 행, 1은 열 ,'EUR/USD','USO'
Y = data_frame['GLD']

train_X, test_X, train_Y, test_Y = train_test_split(X, Y, test_size = 0.3, random_state=2)

DT = DecisionTreeRegressor(random_state=2)
DT.fit(train_X, train_Y)  # 학습용 문제, 학습용 정답
score1 = DT.score(test_X, test_Y)  # 시험 문제, 시험 정답
# [2] 랜덤 포레스트 예측기 머신러닝 알고리즘
RF = RandomForestRegressor(n_estimators=100, random_state=2)    # random_state = 난수seed 0이면 재실행마다 동일결과
RF.fit(train_X, train_Y)
score2 = RF.score(test_X, test_Y)
# [3] K근접이웃 예측기 머신러닝 알고리즘
KN = KNeighborsRegressor(n_neighbors=2)
KN.fit(train_X, train_Y)
score3 = KN.score(test_X, test_Y)
# [4] 선형회귀 머신러닝 알고리즘
LR = LinearRegression()
LR.fit(train_X, train_Y)
score4 = LR.score(test_X, test_Y)

plt.plot(['DT', 'RF', 'K-NN', 'LR'], [score1, score2, score3, score4])
# print('스코어: {0:.2f}, {1:.2f}, {2:.2f}, {3:.2f}'.format(score1, score2, score3, score4))
plt.show()

test_data_prediction = RF.predict(test_X)
# print(test_data_prediction)

test_Y = list(test_Y)

plt.plot(test_Y, color='red',label = 'Actual Value')
plt.plot(test_data_prediction, color='blue', label='Predicted Value')
plt.title('Actual Price vs Predicted Price')
plt.xlabel('Number of values')
plt.ylabel('GLD Price')
plt.legend()
plt.show()
"""
print("Clear")

