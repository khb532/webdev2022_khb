############################
# AI LIBRARY
############################

import male_female as mf

data_frame = mf.load_csv('male_female.csv')

# hist그래프
# mf.hist(data_frame)

# column으로 선택 가능한 목록
# mf.show_cols(data_frame)

# plot(data, X축, Y축, f(x)값)
# mf.plot(data_frame, 'Height', 'Weight', 'Year')

# violin_plot(data, x축, y축)
# mf.violin_plot(data_frame, 'Sex', 'Height')

# heatmap(data, column배열)
mf.heatmap(data_frame, data_frame.columns)

print("Clear")