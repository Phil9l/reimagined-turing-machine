struct Node {
    Node* next;
    Node* prev;
    char value;
};

class Tape {
 private:
    Node* head;
    Node* current;
 public:
    Tape();
    ~Tape();
    char get_current() const;
    void move_right();
    void move_left();
    void write(char value);
 private:
    Node* create_node() const;
};
