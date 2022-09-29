############################
# AI LIBRARY
############################

import male_female as mf

data_frame = mf.load_csv('male_female.csv')

# hist그래프
mf.hist(data_frame)

# column으로 선택 가능한 목록
mf.show_cols(data_frame)

# plot(data, X축, Y축, f(x)값)
mf.plot(data_frame, 'Height', 'Weight', 'Year')
print("Clear")