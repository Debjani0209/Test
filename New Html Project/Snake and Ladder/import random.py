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

def board_print(position, player):
    print(f"Player {player} is at position {position}")

def play_game():
    num_players = 4
    positions = [1] * num_players  
    winning_position = 100
    player_names = [f"Player {i+1}" for i in range(num_players)]  


    def get_current_player(turn):
        return player_names[turn % num_players]

    turn = 0  
    for i in range(num_players):
        while positions[i] == 1:
            input(f"{player_names[i]}, press Enter to roll the dice to start the game...")
            dice_roll = roll_dice()
            print(f"{player_names[i]} rolled a {dice_roll}")
            if dice_roll == 1:
                positions[i] = 1 
                break
            else:
                print(f"{player_names[i]} needs to roll a 1 to start the game.")

    while True:
        current_player = get_current_player(turn)
        input(f"{current_player}, press Enter to roll the dice...")
        dice_roll = roll_dice()
        print(f"{current_player} rolled a {dice_roll}")
        current_position = positions[turn % num_players]
        if current_position > 90 and dice_roll + current_position > 100:
            print(f"{current_player} needs to roll a {100 - current_position} to win the game.")
            continue
        positions[turn % num_players] = move_player(current_position, dice_roll)
        board_print(positions[turn % num_players], current_player)

        if positions[turn % num_players] == winning_position:
            print(f"Congratulations {current_player}! You've won the game!")
            break
        turn += 1

if __name__ == "__main__":
    play_game()
