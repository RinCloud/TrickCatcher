'''
# My only concern is if new numbers will be add all the time

    # This sends over the complate message to firebase
   # ref.child(USER+'/Programs/ColorChange/SlimeColors').update(color_list)
    #print("Color List", color_list)
'''
def minimum_spells_required(N, a):
    spells = 0
    prev_color = None

    for color in a:
        if color == prev_color:
            spells += 1
            prev_color = None
        else:
            prev_color = color

    return spells

N = int(input())
a = list(map(int, input().split()))

result = minimum_spells_required(N, a)
print(result)