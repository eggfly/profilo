// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<62eec12c9d453229dc3570eddea75464>>
// @model md5 aac4f98ee30b127930f26181820bc307


#include <museum/5.0.0/external/libcxx/exception>
#include <museum/5.0.0/external/libcxx/ios>
#include <museum/5.0.0/external/libcxx/locale>
#include <museum/5.0.0/external/libcxx/new>
#include <museum/5.0.0/external/libcxx/stdexcept>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt11logic_errorC1EPKc() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt11logic_errorC1EPKc",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
   logic_error::logic_error(char const* p1)   {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt11logic_errorC1EPKc
      <void
        (logic_error *, char const*)>()
      (this, p1);
  }
} // namespace std::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt11logic_errorD1Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt11logic_errorD1Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
   logic_error::~logic_error()  _NOEXCEPT {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt11logic_errorD1Ev
      <void
        (logic_error *)>()
      (this);
  }
} // namespace std::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNKSt11logic_error4whatEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNKSt11logic_error4whatEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
  char const* logic_error::what() const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt11logic_error4whatEv
      <char const*
        (logic_error const*)>()
      (this);
  }
} // namespace std::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt12length_errorD2Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt12length_errorD2Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
   length_error::~length_error()  _NOEXCEPT {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt12length_errorD2Ev
      <void
        (length_error *)>()
      (this);
  }
} // namespace std::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt9exceptionD1Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt9exceptionD1Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
   exception::~exception()  _NOEXCEPT {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt9exceptionD1Ev
      <void
        (exception *)>()
      (this);
  }
} // namespace std::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNKSt9exception4whatEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNKSt9exception4whatEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
  char const* exception::what() const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt9exception4whatEv
      <char const*
        (exception const*)>()
      (this);
  }
} // namespace std::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZSt17__throw_bad_allocv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZSt17__throw_bad_allocv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
  void __throw_bad_alloc()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZSt17__throw_bad_allocv
      <void
        ()>()
      ();
  }
} // namespace std::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZSt18uncaught_exceptionv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZSt18uncaught_exceptionv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { 

  
  bool uncaught_exception()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZSt18uncaught_exceptionv
      <bool
        ()>()
      ();
  }
} // namespace std::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__16localeD1Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__16localeD1Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
   locale::~locale()   {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16localeD1Ev
      <void
        (locale *)>()
      (this);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNKSt3__16locale9use_facetERNS0_2idE() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNKSt3__16locale9use_facetERNS0_2idE",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  locale::facet const* locale::use_facet(locale::id& p1) const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt3__16locale9use_facetERNS0_2idE
      <locale::facet const*
        (locale const*, locale::id&)>()
      (this, p1);
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__16locale5facetD1Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__16locale5facetD1Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
   locale::facet::~facet()   {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16locale5facetD1Ev
      <void
        (locale::facet *)>()
      (this);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__16locale5facet16__on_zero_sharedEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__16locale5facet16__on_zero_sharedEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  void locale::facet::__on_zero_shared()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16locale5facet16__on_zero_sharedEv
      <void
        (locale::facet *)>()
      (this);
  }
} } // namespace std::__1::

template class std::__1::num_put<char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >;

namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  template<>
  locale::id& num_put<char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::get_id()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE
      <locale::id
        >()
      ;
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__18numpunctIcE2idE() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__18numpunctIcE2idE",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  locale::id& numpunct<char>::get_id()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18numpunctIcE2idE
      <locale::id
        >()
      ;
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__15ctypeIcE2idE() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__15ctypeIcE2idE",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  locale::id& ctype<char>::get_id()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__15ctypeIcE2idE
      <locale::id
        >()
      ;
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__114__num_put_base12__format_intEPcPKcbj() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__114__num_put_base12__format_intEPcPKcbj",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  void __num_put_base::__format_int(char* p1, char const* p2, bool p3, ios_base::fmtflags p4)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base12__format_intEPcPKcbj
      <void
        (char*, char const*, bool, ios_base::fmtflags)>()
      (p1, p2, p3, p4);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  char* __num_put_base::__identify_padding(char* p1, char* p2, ios_base const& p3)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE
      <char*
        (char*, char*, ios_base const&)>()
      (p1, p2, p3);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__114__num_put_base14__format_floatEPcPKcj() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__114__num_put_base14__format_floatEPcPKcj",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  bool __num_put_base::__format_float(char* p1, char const* p2, ios_base::fmtflags p3)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base14__format_floatEPcPKcj
      <bool
        (char*, char const*, ios_base::fmtflags)>()
      (p1, p2, p3);
  }
} } // namespace std::__1::

template class std::__1::__num_put<char>;


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__114__shared_countD1Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__114__shared_countD1Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
   __shared_count::~__shared_count()   {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__shared_countD1Ev
      <void
        (__shared_count *)>()
      (this);
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__18ios_baseD0Ev() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__18ios_baseD0Ev",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
   ios_base::~ios_base()   {
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_baseD0Ev
      <void
        (ios_base *)>()
      (this);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__18ios_base5clearEj() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__18ios_base5clearEj",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  void ios_base::clear(ios_base::iostate p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_base5clearEj
      <void
        (ios_base *, ios_base::iostate)>()
      (this, p1);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  void ios_base::__set_badbit_and_consider_rethrow()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
      <void
        (ios_base *)>()
      (this);
  }
} } // namespace std::__1::


namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNKSt3__18ios_base6getlocEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNKSt3__18ios_base6getlocEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  locale ios_base::getloc() const  {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt3__18ios_base6getlocEv
      <locale
        (ios_base const*)>()
      (this);
  }
} } // namespace std::__1::



namespace libcxx { namespace lookups {
  template<typename T>
  T* lookup___ZNSt3__16__clocEv() {
    static auto const symbol = ::facebook::libcxx().get_symbol<T>({
      "_ZNSt3__16__clocEv",
    });
    return symbol;
  }
} } // namespace libcxx::lookups
namespace std { inline namespace __1 { 

  
  locale_t __cloc()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16__clocEv
      <locale_t
        ()>()
      ();
  }
} } // namespace std::__1::


namespace libcxx {
  void preinitSymbols() {
    using namespace ::facebook::museum::MUSEUM_VERSION::std;
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt11logic_errorC1EPKc
        <void
          (logic_error *, char const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt11logic_errorD1Ev
        <void
          (logic_error *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt11logic_error4whatEv
        <char const*
          (logic_error const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt12length_errorD2Ev
        <void
          (length_error *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt9exceptionD1Ev
        <void
          (exception *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt9exception4whatEv
        <char const*
          (exception const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZSt17__throw_bad_allocv
        <void
          ()>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZSt18uncaught_exceptionv
        <bool
          ()>();
    
    using namespace ::facebook::museum::MUSEUM_VERSION::std::__1;
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16localeD1Ev
        <void
          (locale *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt3__16locale9use_facetERNS0_2idE
        <locale::facet const*
          (locale const*, locale::id&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16locale5facetD1Ev
        <void
          (locale::facet *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16locale5facet16__on_zero_sharedEv
        <void
          (locale::facet *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE
        <locale::id
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18numpunctIcE2idE
        <locale::id
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__15ctypeIcE2idE
        <locale::id
          >();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base12__format_intEPcPKcbj
        <void
          (char*, char const*, bool, ios_base::fmtflags)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE
        <char*
          (char*, char*, ios_base const&)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__num_put_base14__format_floatEPcPKcj
        <bool
          (char*, char const*, ios_base::fmtflags)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__114__shared_countD1Ev
        <void
          (__shared_count *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_baseD0Ev
        <void
          (ios_base *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_base5clearEj
        <void
          (ios_base *, ios_base::iostate)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
        <void
          (ios_base *)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNKSt3__18ios_base6getlocEv
        <locale
          (ios_base const*)>();
    
    
      ::facebook::museum::MUSEUM_VERSION::libcxx::lookups::lookup___ZNSt3__16__clocEv
        <locale_t
          ()>();
    
  }
} // namespace libcxx

} } } // namespace facebook::museum::MUSEUM_VERSION
