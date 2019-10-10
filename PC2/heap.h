//
// Created by Jeronimo on 2019-10-10.
//

#ifndef PC2_HEAP_H
#define PC2_HEAP_H


#include <f>
#include <string>



template <typename T, typename contenedor>
class heap {
public:
    static T vec1;


//devuelve el valor maximo
    int get_max() {
        int maxVal = 0;
        int i;

        for (i = 0; i < vec1.size(); i++) {
            if (maxVal < vec1[i]) {
                maxVal = vec1[i];
            }
        }
        return maxVal;
    }




    void insert(int Val){     //inserta un elemento
        vec1.push_back(Val);
    }





    //devuelve el tamano
    T heap<T>::get_size() {

        return vec1.size();
    }





    template<typename ... Args>
    void insert_items(Args ... args) {   //insetar mas de un elemnto
        vector<int> datos;
        for (auto &n: {args ...}) {
            vec1.push_back(n);
        }
    }






    void heap<T>::load_from(const string &filename) {

        ifstream file;
        string line;
        archivo.open(file_name, ios::in);

        if (archivo.fail()) {
            std::cout << "el archivo no se puede abrir"
            exit(1);

        }
        while (!archivo.eof()) {
            getline(file, line);
            vec1.push_back(line)
        }
        archivo.close();
    }


    void print() {   //imprime

        int i;
        for (i = 0; i < vec1.size(); i++) {

            std::cout<<std::vec1[i]<<" ";
        }
        std::cout<<std::endl;
    }

    friend ostream& operator << (ostream& out, T& Val){
        auto IT1 = Val.begin();
        for (IT1; IT1 != Val.end(); IT1++){
    std::cout<<std::*IT1;}

return out;
    }

    friend istream& operator >> (istream& in, T& Val){
        entrada >> vec1.insert_items(Val);
        return in;
    }

    friend std::ostream& operator << (std::ostream& out, const heap<contenedor>& heap){
        for(auto&n: heap.vec1){
            out<<n<<" ";
        }
    }

};


#endif //PC2_HEAP_H
