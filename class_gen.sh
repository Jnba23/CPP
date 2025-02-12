#!/bin/bash

# Prompt for class name
echo "Enter the class name: "
read class_name

# Create header file
echo "Creating $class_name.hpp"
cat <<EOL > "$class_name.hpp"
#ifndef ${class_name^^}_HPP
#define ${class_name^^}_HPP

class $class_name {
public:
    $class_name(); // Constructor
    ~$class_name(); // Destructor

private:
    int exampleData; // Example member variable
};

#endif // ${class_name^^}_HPP
EOL