password = input()
repeat = input()

x = "Correct"
y = "Wrong"

def validate(text1, text2):
    if text1 == text2:
        return x
    else:
        return y


print(validate(password, repeat))
