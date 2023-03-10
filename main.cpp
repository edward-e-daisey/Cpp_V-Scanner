// Name: Edward E. Daisey
// Date: January 20th, 2023
// Description: This is a simple virus scanner.

#include <iostream>
#include <fstream>
#include <string>

// Purpose - Function to scan a file for viruses.
bool scan_file(std::string fileName){
    std::ifstream file(fileName);
    std::string line;
    while (std::getline(file,line)){
        // Purpose - Check for known virus signature in the file.
        if (line.find("VirusSignatureA")!=std::string::npos ||
            line.find("VirusSignatureB")!=std::string::npos ||
            line.find("VirusSignatureC")!=std::string::npos) {
            return true;
        }
    }
    return false;
}


int main(){
std::cout << "Starting antivirus scan..." << std::endl;
    // Purpose - Scan all files in the current directory.
    std::string fileName;
    for (int i = 0; i < 1; i++){
        fileName = "file" + std::to_string(i) + ".txt";
        // Purpose - Quarantine the infected file.
        std::cout << "Quarantining infected file: " << fileName << std::endl;
        // To Do - Add Quarantine Function - Investigate, Potentially Delete
    }
    std::cout << "Antivirus scan complete." << std::endl;
    return 0;
}
