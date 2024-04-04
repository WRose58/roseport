def calculate_grade(score):
    if score >= 90:
        return 'A'
    elif score >= 87:
        return 'A-'
    elif score >= 86:
        return 'B+'
    elif score >= 80:
        return 'B'
    elif score >= 77:
        return 'B-'
    elif score >= 74:
        return 'C+'
    elif score >= 70:
        return 'C'
    elif score >= 67:
        return 'C-'
    elif score >= 64:
        return 'D+'
    elif score >= 62:
        return 'D'
    elif score >=60:
        return 'D-'
    else:
        return 'F'

def main():
    # Input student's score
    score = float(input("Enter the student's score: "))

    # Calculate grade
    grade = calculate_grade(score)

    # Output the grade
    print("The student's grade is:", grade)

if __name__ == "__main__":
    main()
