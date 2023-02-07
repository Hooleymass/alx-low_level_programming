s = input()

def hashtag(text):
    '''
    it replaces the spces so that there are no spaces
    '''
    s1 = s.replace(" ","")
    return '#'+s1

print(hashtag(s))
