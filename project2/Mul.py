
#Convert the following C code to Python:
# C code:
# #include <stdio.h>
# 
# int main() {
#     int a, b, mul;
#     printf("Enter two numbers: ");
#     scanf("%d %d", &a, &b);
#     mul = a * b;
#     printf("The multiplication of %d and %d is: %d\n", a,
# 
#               b, mul);
#     return 0;
# }

# Python code equivalent to the given C code
def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    mul = a * b
    print(f"The multiplication of {a} and {b} is: {mul}")

if __name__ == "__main__":
    main()
