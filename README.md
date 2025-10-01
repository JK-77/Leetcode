📌 Probabilistic Deep Learning Project
📝 Title
Probabilistic Deep Learning Models for Uncertainty Estimation and Data Generation

👤 Student Details
Name: Jayesh Kriplani

Batch: A3_40

🎯 Aim
To design and implement deep learning solutions using probabilistic models and techniques for classification, prediction, and data generation.
The project explores Uncertainty Estimation with Monte Carlo Dropout and Data Generation with Variational Autoencoders (VAEs).

📍 Problem Statement
Traditional deep learning models provide point predictions but lack uncertainty estimation, which is crucial in high-stakes applications (e.g., medical diagnosis, autonomous driving).
Moreover, generative models that can create new realistic samples are becoming increasingly important in modern AI research.

The goal of this project is to:

Implement probabilistic deep learning models that capture uncertainty in predictions.

Compare techniques like Monte Carlo Dropout (Bayesian Approximation) and Variational Autoencoders (VAE).

Train, evaluate, and visualize the models on the MNIST dataset for digit recognition and generation.

📊 Dataset
Dataset Used: MNIST Handwritten Digits Dataset

Description:

70,000 images of handwritten digits (0–9)

Grayscale, 28×28 pixels

Train: 60,000 images | Test: 10,000 images

🧠 Models Implemented
CNN with Monte Carlo Dropout

Used for classification with uncertainty estimation.

Multiple stochastic forward passes are performed at inference to approximate predictive distribution.

Variational Autoencoder (VAE)

Used for data generation and reconstruction.

Learns latent representations of digits and generates new realistic samples.

⚙️ Steps Performed
Data Preprocessing & Loading

Model Design (CNN + Dropout, VAE)

Training & Evaluation

Uncertainty Estimation with MC Dropout

Latent Space Visualization & Image Generation (VAE)

Comparison & Results

📈 Results & Insights
CNN with MC Dropout successfully estimated uncertainty in predictions, showing higher variance for ambiguous digits.

VAE generated realistic handwritten digits and provided a smooth latent space representation.

Demonstrated how probabilistic deep learning improves reliability and interpretability compared to deterministic models.

