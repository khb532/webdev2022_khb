import pandas as pd  # 데이터 처리 모듈
# import pandas_profiling as pp
import matplotlib.pyplot as plt  # 데이터 시각화 모듈

from sklearn.model_selection import train_test_split  # 데이터 분할 모듈
from sklearn.tree import DecisionTreeRegressor
from sklearn.neighbors import KNeighborsRegressor
from sklearn.linear_model import LinearRegression
from sklearn.ensemble import RandomForestRegressor

data_frame = pd.read_csv('gld_price_data.csv')

# hist그래프
# lib.hist(data_frame)

# column으로 선택 가능한 목록
# lib.show_cols(data_frame)

# plot(data, X축, Y축, f(x)값)
# lib.plot(data_frame, 'EUR/USD', 'SLV', 'GLD')
df = data_frame.drop(['SPX'],axis=1)
df.plot()
# pp.ProfileReport(data_frame)
# violin_plot(data, x축, y축)
# lib.violin_plot(data_frame, 'GLD', 'SLV')

# heatmap(data, column배열)
# lib.heatmap(data_frame, data_frame.columns)

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

print("Clear")