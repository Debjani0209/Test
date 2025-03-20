import random

def roll_dice():
    return random.randint(1, 6)

snakes_and_ladders = {
    29: 9, 38: 15, 47: 5, 53: 33, 62: 37, 86: 54, 92: 70, 97: 25, 
    2: 23, 8: 34, 20: 77, 32: 68, 41: 79, 74: 88, 85: 95, 82: 100
}

def move_player(position, dice_roll):
    position += dice_roll
    if position in snakes_and_ladders:
        old_position = position
        position = snakes_and_ladders[position]
        print(f"Encountered a {'snake' if old_position > position else 'ladder'}: moved from {old_position} to {position}")
    if position > 100:
        position = 100  
    return position

def board_print(position):
    print(f"Player is at position {position}")

def play_game():
    position = 1
    winning_position = 100
    while position == 1:
        input("Press Enter to roll the dice to start the game...")
        dice_roll = roll_dice()
        print(f"Rolled a {dice_roll}")
        if dice_roll == 1:
            break
        else:
            print("You need to roll a 1 to start the game.")
    while position < winning_position:
        input("Press Enter to roll the dice...")
        dice_roll = roll_dice()
        print(f"Rolled a {dice_roll}")
        if position > 90 and dice_roll + position > 100:
            print(f"You need to roll a {100 - position} to win the game.")
            continue
        
        position = move_player(position, dice_roll)
        board_print(position)
        if position == winning_position:
            print("Congratulations! You've won the game!")
            break

if __name__ == "__main__":
    play_game()
