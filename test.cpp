template<typename T>
concept IsFixedString = requires {
    requires std::same_as<
        T,
        fixed_string<T::max_size>
    >;
};
