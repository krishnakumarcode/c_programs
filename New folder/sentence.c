def justify_sentence(sentence, screen_length):
    words = sentence.split()
    total_spaces = screen_length - len(sentence)
    num_gaps = len(words) - 1

    if num_gaps == 0:
        # Handle case where there is only one word in the sentence
        spaces_between_words = total_spaces
        extra_spaces = 0
    else:
        spaces_between_words = total_spaces // num_gaps
        extra_spaces = total_spaces % num_gaps

    justified_sentence = words[0]

    for i in range(1, len(words)):
        spaces = '*' * spaces_between_words
        if extra_spaces > 0:
            spaces += '*'
            extra_spaces -= 1

        justified_sentence += spaces + words[i]

    print(justified_sentence)