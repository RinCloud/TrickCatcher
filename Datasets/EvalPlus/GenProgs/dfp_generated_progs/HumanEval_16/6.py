def count_distinct_characters(string: str) -> int:
    distinct_characters = set(string.lower())
    return len(distinct_characters)