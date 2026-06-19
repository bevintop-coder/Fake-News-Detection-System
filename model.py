import pickle


model = pickle.load(open("news_model.pkl","rb"))

vectorizer = pickle.load(open("vectorizer.pkl","rb"))


def predict_news(news):

    data = vectorizer.transform([news])

    result = model.predict(data)


    if result[0]==1:
        return "REAL NEWS"
    else:
        return "FAKE NEWS"


while True:

    text=input("Enter news: ")

    print(predict_news(text))