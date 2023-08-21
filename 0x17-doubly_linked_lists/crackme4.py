pwd = input('Password: ')
ok = 'Zen of Python'
#     0123456789       indexmap
ok = ok + ' C'  # concatinate C with ok
ok = ok[1:3] + ok[3] + ok[7:9] + ok[:6][::-1]
#
print(ok)  # This i added manually so it can print ok
print(pwd)
if pwd == ok:
    print('OK')
else:
    print("KO")
# Zen of Python C
