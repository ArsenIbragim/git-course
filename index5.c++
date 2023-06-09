#include <iostream>
#include <vector>
#include <openssl/sha.h>

using namespace std;

int main() {
  // Get the input string
  string input = "hello";

  // Create a SHA-128 object
  SHA1 sha1;

  // Calculate the hash
  sha1.update(input.c_str(), input.length());
  unsigned char hash[SHA_DIGEST_LENGTH];
  sha1.digest(hash);

  // Print the hash
  for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
    cout << std::hex << hash[i];
  }
  cout << endl;

  return 0;
}