import numpy as np # 수학 연산 수행을 위한 모듈
import pandas as pd # 데이터 처리를 위한 모듈
import seaborn as sns # 데이터 시각화 모듈
import matplotlib.pyplot as plt # 데이터 시각화 모듈

# CSV 파일 읽어오기
def read_csv(f):
    return pd.read_csv(f)


data_frame = pd.read_csv("male_female.csv")
data_frame.info()
print(data_frame.head(5))

