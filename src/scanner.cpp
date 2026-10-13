enum TokenType : int {
    // keywords
    KEYWORD_I, KEYWORD_M, KEYWORD_E, KEYWORD_R, KEYWORD_A,

    // literals
    TIMESTAMP, DURATION, FLAG,
    NUMBER, STRING, IDENTIFIER,

    // puncuation
    LEFT_PAREN, RIGHT_PAREN,
    LEFT_BRACE, RIGHT_BRACE,
    LEFT_BRACKET, RIGHT_BRACKET,
    COLON, COMMA,

    END_OF_FILE,
    ERROR,
};

int main() {}