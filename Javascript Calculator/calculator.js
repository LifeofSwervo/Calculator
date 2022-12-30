const prompt = require("prompt-sync")({ sigint: true })

function calculate() {
    // Ask the user for the first number
    const num1 = parseInt(prompt("Enter the first number:"));
    // Ask the user for the operator
    const operator = parseInt(prompt("Enter the operator (+, -, *, /):"));
    // Ask the user for the second number
    const num2 = prompt("Enter the second number:");
  
    
    if (operator === '+') {
      return num1 + num2;
    } else if (operator === '-') {
      return num1 - num2;
    } else if (operator === '*') {
      return num1 * num2;
    } else if (operator === '/') {
      if (num2 === 0) {
        return "Cannot divide by zero!";
      } else {
        return num1 / num2;
      }
    } else {
      return "Invalid operator!";
    }
  }
  
  // Calculate the result
  const result = calculate();
  
  // Print the result to the console
  console.log(result);
  