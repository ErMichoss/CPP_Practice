#include <stdlib.h>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> checks; // Este mapa almacenara pares: valor del número en el vector -> indice del número
        for (int i=0; i<nums.size(); i++) {
            if (checks.find(target-nums[i]) != checks.end()) { // Comprueba si hay un numero en el mapa que sumado el actual da el target
                return {checks[target-nums[i]], i}; // Devolvemos los indices
            }
            else {
                checks[nums[i]]=i; // Guardamos el numero actual y su indice en el mapa
            }
        }
        return {}; // Si no se encuantra una pareja se devuelve un vector vacio
    }
};