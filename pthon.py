class Calculation:
  def __init__(self, num1, num2):
    self.num1 = num1
    self.num2 = num2

  def add(self):
    return self.num1 + self.num2

  def multiply(self):
    return self.num1 * self.num2

class MyCalculation(Calculation):
  def __init__(self, num1, num2):
    super().__init__(num1, num2)


num1 = int(input())
num2 = int(input())

Calculation = MyCalculation(num1, num2)


sum = Calculation.add()
product = Calculation.multiply()

print(sum)
print(product)

