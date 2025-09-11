# AI/ML

Welcome to the codeˣ repo of the most fascinating domain of them all. How does ChatGPT understand your assignment? how does gemini makes a photo of you in a Bugatti? And why is stockfish unbeatable? The answer to all this is what we refer to as Artificial intelligience. 

Since we are expecting beginners(as in, we don't expect you to know much, except python), so we have compiled a list of resources you can use to break your way into this domain. 

## Resources

- [Kaggle Learn - Courses on the topic](https://www.kaggle.com/learn): Slow but steady
- [3B1B - Neural Networks](https://www.youtube.com/watch?v=aircAruvnKk&list=PLZHQObOWTQDNU6R1_67000Dx_ZCJB-3pi): First 4 videos are enough. Can continue for interest. 
- [Patrick Loeber - Pytorch](https://youtu.be/c36lUUr864M?si=rGPrz-aWPjTHlYRL): The researcher's favorite framework.
- [Aladdin Persson - TensorFlow](https://www.youtube.com/playlist?list=PLhhyoLH6IjfxVOdVC1P1L5z5azs0XjMsb): Google's own framework
- [Murtaza's Workshop - OpenCV](https://youtu.be/WQeoO7MI0Bs?si=UrVALxkKLFfq0sDM): half of the fancy Computer Vision projects you see on the internet.
- [CS 229](https://youtube.com/playlist?list=PLoROMvodv4rMiGQp3WXShtMGgzqpfVfbU&feature=shared), [CS 230](https://youtube.com/playlist?list=PLoROMvodv4rOABXSygHTsbvUz4G_YQhOb&feature=shared), [CS 231](https://youtube.com/playlist?list=PL3FW7Lu3i5JvHM8ljYj-zLfQRF3EO8sYv&feature=shared): Stanford Courses; Beloved.
- [CampusX - 100 days of Machine Learning](https://youtube.com/playlist?list=PLKnIA16_Rmvbr7zKYQuBfsVkjoLcJgxHH&si=gNvEs14B5n-UXJOm): More oriented towards classical ML. Completely optional but handy. 
- [CampusX - 100 days of Deep Learning](https://www.youtube.com/playlist?list=PLKnIA16_RmvYuZauWaPlRTC54KxSNLtNn): Highly detailed, but long. Again optional. 
- [Also checkout](https://www.linkedin.com/posts/mungoliabhishek81_datatrek-datascience-machinelearning-activity-7249659363592658944-92CR?utm_source=share&utm_medium=member_android)

Yes, there really is no end. 

"There must be some other way to learn than just endless cycle of videos?" 

Well, there is...

## PS

### Beginner
TODO
### Intermediate
# 🎬 Problem Statement: Content-Based Movie Recommendation System

## 🎯 Objective
Build a Content-Based Movie Recommendation Engine in Python that suggests movies similar to a given title based on genre, plot, cast, and crew.  
The system leverages text processing and similarity measures to answer:  
> “If you liked movie X, you may also like movie Y.”

---

## ⚙️ Core Features
- **Data Preprocessing:** Load, clean, and normalize datasets such as MovieLens or TMDB, handling missing values, inconsistent formatting, and duplicates.
- **Feature Engineering:** Create a unified text representation (“content soup”) by combining genres, keywords, cast, crew, and movie descriptions into a single feature per movie.
- **Vectorization:**
  - **Core / Beginner:** Use classical NLP vectorization techniques like TF-IDF or Bag-of-Words with Scikit-learn.
  - **Extensions / Advanced:** Use semantic embeddings via transformer models (e.g., BERT, RoBERTa, DistilBERT) or sentence embeddings using sentence-transformers.
- **Similarity Measure:**
  - **Core / Beginner:** Compute Cosine Similarity between TF-IDF / BoW vectors.
  - **Extensions / Advanced:** Compute similarity between embeddings using Cosine Similarity.
- **Recommendation Function:** Given a movie title, return the Top-N most similar movies based on the chosen vectorization and similarity pipeline.

---

## 💻 Tech Stack & Concepts
- **Programming & Libraries:** Python, Pandas, NumPy, Scikit-learn  
- **Advanced Libraries (Optional):** transformers, sentence-transformers (from HuggingFace)  
- **NLP Concepts:** Text preprocessing, feature extraction, vectorization, similarity computation  
- **Development Tools:** Jupyter Notebook or Google Colab

---

## 🚀 Extensions
- Launch an interactive app using Gradio or Streamlit for movie recommendations.
- Explore Collaborative Filtering and hybrid recommender models.
- Incorporate additional features (ratings, release year, budget) into similarity calculations.

---

## 📚 Resources
**Datasets:**
- [MovieLens Latest Datasets (Small)](https://grouplens.org/datasets/movielens/)
- [TMDB 5000 Movie Dataset (Kaggle)](https://www.kaggle.com/datasets/tmdb/tmdb-movie-metadata)



TODO
### Advanced
TODO
