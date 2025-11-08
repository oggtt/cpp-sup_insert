#include "supabase_client.hpp"

int main() {
    std::string url = "YOUR URL";
    std::string api_key = "YOUR API KEY";

    nlohmann::json data = {
        {"name", "Taro"},
        {"email", "taro@example.com"},
        {"age", 30}
    };

    supabase::insert(url, api_key, data);
    return 0;
}
