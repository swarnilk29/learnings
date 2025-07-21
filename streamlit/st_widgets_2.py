import streamlit as st
import pandas as pd


#SLIDER
x = st.slider('x', value = 25, min_value = 5, max_value = 90)
st.write(f'x is {x}')

st.divider()

#FILE UPLOADER
uploaded_file = st.file_uploader("Choose a file:", type = ['csv', 'txt','xlsx'])
if uploaded_file :
    st.write(uploaded_file)

    if uploaded_file.type == 'text/plain':
        from io import StringIO
        stringio = StringIO(uploaded_file.getvalue().decode("utf-8"))
        string_data = stringio.read()
        st.write (string_data)
    
    elif uploaded_file.type == 'text/csv':
        import pandas as pd
        df = pd.read_csv(uploaded_file)
        st.write(df)
    else :
        import pandas as pd
        df = pd.read_excel(uploaded_file)
        st.write(df)

# CAMERA INPUT

camera_photo = st.camera_input("Take a picture")
if camera_photo:
    st.image(camera_photo)

