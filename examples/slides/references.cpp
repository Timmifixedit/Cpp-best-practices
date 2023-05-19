// pass by mutable reference
void toGrayscale(std::list<Image> &images) {...} 

// pass by const reference
void displayImage(const Image &images) {...} 

int main(void) {
    std::list<Image> images = readImages(); 
    toGrayscale(images); 
    for (const auto &image : images) { // loop by reference
        displayImage(image); 
    }
}
