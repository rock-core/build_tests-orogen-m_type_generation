#ifndef m_type_generation_TYPES_HPP
#define m_type_generation_TYPES_HPP

/* If you need to define types specific to your oroGen components, define them
 * here. Required headers must be included explicitly
 *
 * However, it is common that you will only import types from your library, in
 * which case you do not need this file
 */

namespace m_type_generation {
    struct Opaque
    {
        private:
            int value;

        public:
            int getValue() const;
    };

    struct Intermediate
    {
        int value;
    };

    struct Containing
    {
        Opaque opaque;
    };
}

#endif

