'''
YOUR TASK: 

    You need to add new flag "--link". This flag must assigns URL of remote json file as string. 
    And after that download local (paste code from Option A or from Oprion B in appropriate place). 
    When you will run your program like that:

    python3 test.py --link='https://gist.githubusercontent.com/kvant666ubl/60b5de280e9ca257108a903bc
7818e6d/raw/c07a9ea5f45ca26439eb7ef3cccdc45b76325195/poll.json'

    It must use this remote json file, parse it and find winner.
'''


'''
Option A:

If we have it on server (not to download on laptop) 
'''
# URL = 'https://gist.githubusercontent.com/kvant666ubl/60b5de280e9ca257108a903bc7818e6d/raw/c07a9ea5f45ca26439eb7ef3cccdc45b76325195/poll.json'
# resp = requests.get(URL)
# str_json_file = resp.text


'''
Option B:
If we have it on server and download on laptop 
'''
# URL = '://gist.githubusercontent.com/kvant666ubl/60b5de280e9ca257108a903bc7818e6d/raw/c07a9ea5f45ca26439eb7ef3cccdc45b76325195/poll.json'
# file_name = "poll.json"https
# resp = wget.download(URL, file_name)
# print(" -> download done!\n")
# sys.exit(0)
# json_file = open(file_name) # .txt, .csv, .json, .cpp
# str_json_file = json_file.read()


import json, argparse, os, sys, requests, random,wget


cli_object = argparse.ArgumentParser(description='This program for parse user json file and find the winner!')

cli_object.add_argument('-f', '--file', action='store', type=str, help='path to our local json file')
cli_object.add_argument('-l', '--link', action='store', type=str, help='url of file')


URL = 'http://gist.githubusercontent.com/kvant666ubl/60b5de280e9ca257108a903bc7818e6d/raw/c07a9ea5f45ca26439eb7ef3cccdc45b76325195/poll.json'
file_name = "poll.json"
resp = wget.download(URL, file_name)
print(" -> download done!\n")

json_file = open(file_name) # .txt, .csv, .json, .cpp
str_json_file = json_file.read()

file_name = 0
json_data = json.loads(str_json_file)


usr_list = list(json_data)

identifier_list = list()

for usr in usr_list:
    usr_dict = dict(usr) # str -> dict

    identifier_list.append(usr_dict['id'])


# identifier_list:  ['1', '2', '3', '4', '5', '6', '7', '8', '9', '10']
#                    0  1  2  3  4  4  5  7  8  9
# print("identifier_list: " , identifier_list)
# 0 -> 9
winner_idx = random.randint(0, 9)

winner_usr = identifier_list[winner_idx]

print("User with id " + str(winner_usr) + " is winner!")

# json_file.close()




'''
If we have it local
'''

'''
args = cli_object.parse_args()
file_name = 0

# python3 test.py --file='poll.json' 

if (args.file != None):
    # print("args.file: ", args.file)
    file_name = args.file 
else:
    cli_object.print_help()
    sys.exit(0)

json_file = open(file_name) # .txt, .csv, .json, .cpp
str_json_file = json_file.read()

json_data = json.loads(str_json_file)


usr_list = list(json_data)

identifier_list = list()

for usr in usr_list:
    usr_dict = dict(usr) # str -> dict

    identifier_list.append(usr_dict['id'])


# identifier_list:  ['1', '2', '3', '4', '5', '6', '7', '8', '9', '10']
#                    0  1  2  3  4  4  5  7  8  9
# print("identifier_list: " , identifier_list)
# 0 -> 9
winner_idx = random.randint(0, 9)

winner_usr = identifier_list[winner_idx]

print("User with id " + str(winner_usr) + " is winner!")

# json_file.close()
'''