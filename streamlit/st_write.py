import streamlit as st
import pandas as pd

#adding title
st.title('Hello World :100:')

#Displaying data onn the screen :
# - st.write()
# - Magic

st.write('Hello, Joker') 

#list
l1 = [1,2,3,4,5]
st.write(l1)

#dictionary
l2 = list('hello')
d1 = dict(zip(l1,l2))
st.write (d1)

#using magic
'Displaying data using magic :smile: '

#dataframe/tables
af = pd.DataFrame({
    'first_col' : [1,2,3,4],
    'second_col' : [5,6,7,8],
})

af