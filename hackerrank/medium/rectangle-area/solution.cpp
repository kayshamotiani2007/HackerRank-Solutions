
class Rectangle {
public:

    int width;
    int height;
    void display() const{
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:

    void read_input() {
        
        cin >> width >> height ;
    }
    
    void display() const{
        cout << width * height << endl;
    }
        
        
    
    
};

  

