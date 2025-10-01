# 📌 Probabilistic Deep Learning Project  

## 👤 Student Details  
- **Name:** Jayesh Kriplani  
- **Batch:** A3_40  

---

## 🎯 Aim  
To design and implement deep learning solutions using **probabilistic models and techniques** for classification, prediction, and data generation.  
The project explores:  
- **Uncertainty Estimation with Monte Carlo Dropout (Bayesian Approximation)**  
- **Data Generation with Variational Autoencoders (VAEs)**  

---

## 📍 Problem Statement  
Traditional deep learning models provide **point predictions** but lack the ability to estimate **uncertainty**, which is crucial in applications like:  
- Medical diagnosis  
- Autonomous driving  
- Financial forecasting  

Additionally, generative models are becoming increasingly important in creating **new realistic data** for tasks like simulation, augmentation, and creativity.  

👉 The project aims to:  
1. Implement **probabilistic deep learning models** that capture uncertainty.  
2. Compare **Monte Carlo Dropout (MC Dropout)** and **Variational Autoencoders (VAE)**.  
3. Train, evaluate, and visualize models on the **MNIST dataset**.  

---

## 📊 Dataset  
- **Dataset:** [MNIST Handwritten Digits](http://yann.lecun.com/exdb/mnist/)  
- **Description:**  
  - 70,000 grayscale images of digits (0–9)  
  - Image size: 28×28 pixels  
  - Train: 60,000 images | Test: 10,000 images  

---

## 🧠 Models Implemented  

### 1️⃣ CNN with Monte Carlo Dropout (MC Dropout)  
- Used for **classification with uncertainty estimation**  
- During inference, multiple stochastic forward passes approximate predictive distribution  
- Provides **mean prediction + variance (uncertainty measure)**  

### 2️⃣ Variational Autoencoder (VAE)  
- Used for **data generation & reconstruction**  
- Learns latent representations of digits  
- Can generate **new handwritten digit samples**  

---

## ⚙️ Steps Performed  
✔️ Data Preprocessing & Loading  
✔️ Model Design (CNN + Dropout, VAE)  
✔️ Training & Evaluation  
✔️ Uncertainty Estimation with MC Dropout  
✔️ Latent Space Visualization & Image Generation (VAE)  
✔️ Comparison & Results  

---

## 📈 Results & Insights  
- **MC Dropout**:  
  - Produced reliable predictions with **uncertainty estimates**  
  - Higher variance observed for **ambiguous digits** (e.g., 4 vs 9)  

- **VAE**:  
  - Generated **realistic handwritten digits**  
  - Learned a smooth **latent space representation**  

👉 This shows how **probabilistic deep learning improves reliability and interpretability** compared to deterministic models.  

---

## 📽️ Project Deliverables  
1. 📒 **Jupyter Notebook** – Full implementation & results  
2. 📄 **README.md** – Problem Statement, Dataset, and Explanation  
3. 🎥 **Video (4–5 min)** – Walkthrough of the project (to be recorded)  

---

## 🔮 Future Work  
- Extend to **Bayesian Neural Networks (BNNs)**  
- Apply on larger datasets (CIFAR-10, Fashion-MNIST)  
- Explore **normalizing flows** for advanced generative modeling  

---

✨ *This project demonstrates the power of Probabilistic Deep Learning for uncertainty estimation and generative modeling.*  
