#include <iostream>
#include <boost/algorithm/hex.hpp>
#include <boost/uuid/detail/md5.hpp>

using boost::uuids::detail::md5;

std::string getMd5(const md5::digest_type &digest) {
    const auto charDigest = reinterpret_cast<const char *>(&digest);
    std::string result;
    boost::algorithm::hex(charDigest, charDigest + sizeof(md5::digest_type), std::back_inserter(result));
    return result;
}


int main(int argc, char *argv[]) {
    if (argc > 1) {
        auto a=argv[1];
        std::string s(a);
        md5 hash;
        md5::digest_type digest;

        hash.process_bytes(s.data(), s.size());
        hash.get_digest(digest);

        std::cout << getMd5(digest)<<"\n";
    }

    return 0;
}
