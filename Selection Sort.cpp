#include <iostream>

int main(int argc, char const *argv[]) {
  int arr[11] = {1,82,4,11,29,5,20,11,8,10,3},
      max,
      min,
      jumlah = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Data yang akan di sorting : " << std::endl;
  for (int i = 0; i < jumlah; i++) {
    std::cout << " " << arr[i];
  }

  //Selection sort Ascending
  for (int i = 0; i < jumlah-1; i++) {
    min = i;
    for (int j = i+1; j <= jumlah-1; j++) {
      if (arr[j] < arr[min]) {
        min =j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i]=temp;
  }

  //menampilkan Selection sort Ascending
  std::cout << "\nData setelah di sorting (Ascending) : " << std::endl;
  for (int i = 0; i < jumlah; i++) {
    std::cout << " " << arr[i];
  }

  //Selection sort Descending
  for (int i = 0; i <= jumlah-2; i++) {
    max = i;
    for (int j = i+1; j <= jumlah-1; j++) {
      if (arr[j] > arr[max]) {
        max =j;
      }
    }
    int temp = arr[max];
    arr[max] = arr[i];
    arr[i]=temp;
  }

  //menampilkan Selection sort Descending
  std::cout << "\nData setelah di sorting (Descending) : " << std::endl;
  for (int i = 0; i < jumlah; i++) {
    std::cout << " " << arr[i];
  }

  return 0;
}
