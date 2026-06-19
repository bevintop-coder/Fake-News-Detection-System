import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import LogisticRegression
import pickle


data = {
    "text":[
        "Government launches new education scheme",
        "Aliens attacked earth yesterday",
        "Scientists discover new technology",
        "Celebrity died from fake rumor"
    ],
    "label":[1,0,1,0]
}


df = pd.DataFrame(data)


vectorizer = TfidfVectorizer()

X = vectorizer.fit_transform(df["text"])

model = LogisticRegression()

model.fit(X,df["label"])


pickle.dump(model,open("news_model.pkl","wb"))

pickle.dump(vectorizer,open("vectorizer.pkl","wb"))


print("Model trained successfully")