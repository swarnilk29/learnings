import streamlit as st
import pandas as pd

# TEXT INPUT
name = st.text_input('Enter your name')
if name:
     st.write(f'Hello {name}!')

# NUMBER INPUT
age = st.number_input('Enter your age', min_value=1, max_value=60, step=1)
st.write(f'You are  {age} years old')

# HORIZONTAL DIVIDER LINE
st.divider()

# BUTTON
clicked = st.button('Click me')
if clicked:
     st.write(':ghost:' * 3)

st.divider()

# CHECKBOX
checked = st.checkbox('I agree')
if checked:
     'Great, You agreed!'

agreed = st.checkbox('Yo!', value=True)
if agreed:
     (':angry:' * 3)

df = pd.DataFrame({
     "Name" : ["One", "Two" , "Three"],
     "Age" : [1, 2, 3],
})

# showdata = st.checkbox('Show Data')
# if showdata:
#      st.write(df)

# or 

if st.checkbox('Show Data'):
     st.write(df)

st.divider()

#RADIO BUTTON 
pets = ['Dog', 'Cat', 'Bird']
pet = st.radio('Choose your pet', pets, index = 1, key='pet')
st.write(f'Your pet is {pet}')  #or 

st.write (f'Your Pet is : {st.session_state.pet * 3}')

st.divider()

# SELECTBOX
cities = ['New York', 'Los Angeles', 'Chicago']
city = st.selectbox('Choose your city', cities)
st.write(f'Your city is {city}')