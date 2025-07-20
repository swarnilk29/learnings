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