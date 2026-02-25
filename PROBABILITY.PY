# Install scipy first if not installed:
# pip install scipy

from scipy.stats import norm

# Input values
mean = float(input("Enter mean (μ): "))
std_dev = float(input("Enter standard deviation (σ): "))
x = float(input("Enter value of X: "))

# Calculate probability P(X ≤ x)
probability = norm.cdf(x, mean, std_dev)

print("P(X ≤", x, ") =", probability)
