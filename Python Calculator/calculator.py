def calculator ():
  while True: 
   num1 = float(input("Enter the first number: "))
   num2 = float(input("Enter the second number of the calculation: "))
   operation = input("Enter the operation (+, -, *, /): ")
   result = 0

   if operation == '+':
     result = num1 + num2
   elif operation == '-':
     result = num1 - num2
   elif operation == '*':
     result = num1 * num2
   elif operation == '/':
     result = num1 / num2
   else:
     result = "Invalid Operator"

     return result



  #Run Again 
   runAgain = input("Do you have another calculation? (y/n):  ")
   if runAgain == 'n':
     print("Closing")
     break

calculator()










