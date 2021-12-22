def greet_user(names):
    for name in names:
        msg = "hello\t" + name.title() + '!'
        print(msg)

user_name = ["zy","memsgroup",'ngq'] #list []
greet_user(user_name)