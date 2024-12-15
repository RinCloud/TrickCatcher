from typing import List
def parse_music(music_string: str) -> List[int]:
    beats = []
    notes = music_string.split()
    for note in notes:
        if note == 'o':
            beats.append(4)
        elif note == 'o|':
            beats.append(2)
        elif note == '.|':
            beats.append(1)
    return beats