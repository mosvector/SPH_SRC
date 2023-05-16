class/*or struct*/ 
{
public:
  // Nested containers:
  namespace/*or class/struct?*/ Log
  {
    // Enumerations:
    enum Severity : int {
    };

  };

  namespace/*or class/struct?*/ XERCES_CPP_NAMESPACE
  {
    // Nested containers:
    class DOMDocument
    {
    public:
    };


  };

  struct _Cvtvec
  {
  public:
  };

  namespace/*or class/struct?*/ boost
  {
    // Nested containers:
    class/*or struct*/ bad_weak_ptr : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    namespace/*or class/struct?*/ detail
    {
      // Nested containers:
      class/*or struct*/ local_counted_base
      {
        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisXML.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void) = 0; // 2
        // VFTable with 0 offset end

      public:
      };

      struct mono_platform_timepoint
      {
      public:
      };

      namespace/*or class/struct?*/ win32
      {
        // Nested containers:
        class/*or struct*/ handle_manager
        {
          // Functions:
          public: boost::detail::win32::handle_manager::~handle_manager(void)
          public: void * boost::detail::win32::handle_manager::duplicate(void) const
        public:
        };


      };


    };

    class/*or struct*/ exception
    {
      // VFTable. Offset=0, Size=1, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void) = 0; // 0
      // VFTable with 0 offset end

    public:
    };

    namespace/*or class/struct?*/ exception_detail
    {
      // Nested containers:
      class/*or struct*/ clone_base
      {
        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisXML.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void) = 0; // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void); // 2
        // VFTable with 0 offset end

      public:
      };


    };

    class/*or struct*/ lock_error : public thread_exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: boost::thread_exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    namespace/*or class/struct?*/ numeric
    {
      // Nested containers:
      class/*or struct*/ bad_numeric_cast : public bad_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::bad_cast
        // Owner: SophisXML.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ negative_overflow : public bad_numeric_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: numeric::numeric::bad_numeric_cast
        // Owner: SophisXML.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ positive_overflow : public bad_numeric_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: numeric::numeric::bad_numeric_cast
        // Owner: SophisXML.dll
        // VFTable with 0 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ system
    {
      // Nested containers:
      namespace/*or class/struct?*/ detail
      {
        // Nested containers:
        class/*or struct*/ generic_error_category : public error_category
        {
          // VFTable. Offset=0, Size=7, Start=0
          // Corresponding base: system::system::error_category
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ interop_error_category : public error_category
        {
          // VFTable. Offset=0, Size=7, Start=0
          // Corresponding base: system::system::error_category
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ system_error_category : public error_category
        {
          // VFTable. Offset=0, Size=7, Start=0
          // Corresponding base: system::system::error_category
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          // VFTable with 0 offset end

        public:
        };


      };

      class/*or struct*/ error_category
      {
      public:
      };

      class/*or struct*/ system_error : public runtime_error
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::runtime_error
        // Owner: SophisXML.dll
        // VFTable with 0 offset end

      public:
      };


    };

    class/*or struct*/ this_thread
    {
      // Functions:
      bool interruptible_wait(void *, struct boost::detail::mono_platform_timepoint const &)
    public:
    };

    class/*or struct*/ thread_exception : public system_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: system::system::system_error
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ thread_resource_error : public thread_exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: boost::thread_exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };


  };

  namespace/*or class/struct?*/ sophis
  {
    // Nested containers:
    namespace/*or class/struct?*/ tools
    {
      // Nested containers:
      class/*or struct*/ dataModel
      {
      public:
        // Enumerations:
        enum ValueKind : int {
        };

        // Nested containers:
        class ArrayOfStrings
        {
          // Functions:
          public: sophis::tools::dataModel::ArrayOfStrings::ArrayOfStrings(class sophis::tools::dataModel::ArrayOfStrings const &)
          public: sophis::tools::dataModel::ArrayOfStrings::ArrayOfStrings(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::ArrayOfStrings::~ArrayOfStrings(void)
#endif

        public:
        };

        class Attribute
        {
        public:
        };

        class AttributeSet
        {
          // Functions:
          public: class sophis::tools::dataModel::Attribute & sophis::tools::dataModel::AttributeSet::add_wons(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::AttributeSet::~AttributeSet(void)
#endif

          // VFTable. Offset=0, Size=14, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::tools::dataModel::AttributeSet::~AttributeSet(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void) = 0; // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void) = 0; // 7
          public: virtual void unknown_vf_0_8(void) = 0; // 8
          public: virtual void unknown_vf_0_9(void) = 0; // 9
          public: virtual void unknown_vf_0_10(void) = 0; // 10
          public: virtual void unknown_vf_0_11(void) = 0; // 11
          public: virtual void unknown_vf_0_12(void) = 0; // 12
          public: virtual void unknown_vf_0_13(void); // 13
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ BasicDataSet
        {
          // Functions:
          public: sophis::tools::dataModel::BasicDataSet::BasicDataSet(void)
          public: void sophis::tools::dataModel::BasicDataSet::`vbase dtor'(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::BasicDataSet::~BasicDataSet(void)
          public: virtual void sophis::tools::dataModel::BasicDataSet::clear(void)
          public: virtual class sophis::tools::dataModel::Value * sophis::tools::dataModel::BasicDataSet::clone(void) const
          public: virtual bool sophis::tools::dataModel::BasicDataSet::compare(class sophis::tools::dataModel::Value const &) const
          public: virtual unsigned __int64 sophis::tools::dataModel::BasicDataSet::componentCount(bool) const
          public: virtual class sophis::tools::dataModel::GenericDataIterator<class sophis::tools::dataModel::Data> * sophis::tools::dataModel::BasicDataSet::components(void)
          public: virtual class sophis::tools::dataModel::GenericDataIterator<class sophis::tools::dataModel::Data const> * sophis::tools::dataModel::BasicDataSet::components(void) const
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::getData(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
          public: virtual class sophis::tools::dataModel::Data const & sophis::tools::dataModel::BasicDataSet::getData(char const *, enum sophis::tools::dataModel::ValueKind) const
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::getDataFront(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
          public: virtual bool sophis::tools::dataModel::BasicDataSet::has(char const *, bool) const
          public: virtual enum sophis::tools::dataModel::ValueKind sophis::tools::dataModel::BasicDataSet::kind(void) const
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::lookup(char const *, bool)
          public: virtual class sophis::tools::dataModel::Data const & sophis::tools::dataModel::BasicDataSet::lookup(char const *, bool) const
          public: virtual void sophis::tools::dataModel::BasicDataSet::mergeWith(class sophis::tools::dataModel::DataSet const &, bool)
          public: virtual void sophis::tools::dataModel::BasicDataSet::ns(char const *)
          public: virtual char const * sophis::tools::dataModel::BasicDataSet::ns(void) const
          public: virtual void sophis::tools::dataModel::BasicDataSet::print(class std::basic_ostream<char, struct std::char_traits<char>> &) const
          public: virtual bool sophis::tools::dataModel::BasicDataSet::remove(char const *, bool)
          public: virtual void sophis::tools::dataModel::BasicDataSet::type(char const *)
          public: virtual char const * sophis::tools::dataModel::BasicDataSet::type(void) const
#endif

          // VFTable. Offset=0, Size=22, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual enum sophis::tools::dataModel::ValueKind sophis::tools::dataModel::BasicDataSet::kind(void) const; // 0
          public: virtual class sophis::tools::dataModel::Value * sophis::tools::dataModel::BasicDataSet::clone(void) const; // 1
          public: virtual bool sophis::tools::dataModel::BasicDataSet::compare(class sophis::tools::dataModel::Value const &) const; // 2
          public: virtual char const * sophis::tools::dataModel::BasicDataSet::ns(void) const; // 3
          public: virtual void sophis::tools::dataModel::BasicDataSet::ns(char const *); // 4
          public: virtual char const * sophis::tools::dataModel::BasicDataSet::type(void) const; // 5
          public: virtual void sophis::tools::dataModel::BasicDataSet::type(char const *); // 6
          public: virtual void sophis::tools::dataModel::BasicDataSet::print(class std::basic_ostream<char, struct std::char_traits<char>> &) const; // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual class sophis::tools::dataModel::GenericDataIterator<class sophis::tools::dataModel::Data const> * sophis::tools::dataModel::BasicDataSet::components(void) const; // 9
          public: virtual class sophis::tools::dataModel::GenericDataIterator<class sophis::tools::dataModel::Data> * sophis::tools::dataModel::BasicDataSet::components(void); // 10
          public: virtual unsigned __int64 sophis::tools::dataModel::BasicDataSet::componentCount(bool) const; // 11
          public: virtual void sophis::tools::dataModel::BasicDataSet::clear(void); // 12
          public: virtual class sophis::tools::dataModel::Data const & sophis::tools::dataModel::BasicDataSet::lookup(char const *, bool) const; // 13
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::lookup(char const *, bool); // 14
          public: virtual class sophis::tools::dataModel::Data const & sophis::tools::dataModel::BasicDataSet::getData(char const *, enum sophis::tools::dataModel::ValueKind) const; // 15
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::getData(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *); // 16
          public: virtual class sophis::tools::dataModel::Data & sophis::tools::dataModel::BasicDataSet::getDataFront(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *); // 17
          public: virtual bool sophis::tools::dataModel::BasicDataSet::has(char const *, bool) const; // 18
          public: virtual bool sophis::tools::dataModel::BasicDataSet::remove(char const *, bool); // 19
          public: virtual void sophis::tools::dataModel::BasicDataSet::mergeWith(class sophis::tools::dataModel::DataSet const &, bool); // 20
          public: virtual void unknown_vf_0_21(void); // 21
          // VFTable with 0 offset end

          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::tools::dataModel::BasicDataSet::~BasicDataSet(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        namespace/*or class/struct?*/ Constants
        {
          // Variables:
          public: static char const *sophis::tools::dataModel::Constants::SOPHIS_COMMON_BYTE
          public: static char const *sophis::tools::dataModel::Constants::SOPHIS_COMMON_NAMESPACE
          public: static char const *sophis::tools::dataModel::Constants::SOPHIS_COMMON_RELATIVE_DATE
        };

        class Data
        {
          // VFTable. Offset=0, Size=8, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void) = 0; // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void); // 7
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataAdapter
        {
        public:
        };

        class DataContainer : public Value
        {
          // Functions:
          public: sophis::tools::dataModel::DataContainer::DataContainer(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataContainer::~DataContainer(void)
#endif

          // VFTable. Offset=0, Size=0, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::Value
          // VFTable with 0 offset end

        public:
        };

        class DataExportException
        {
          // Functions:
          public: sophis::tools::dataModel::DataExportException::DataExportException(class sophis::tools::dataModel::DataExportException const &)
          public: sophis::tools::dataModel::DataExportException::DataExportException(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataExportException::~DataExportException(void)
#endif

        public:
        };

        class/*or struct*/ DataExporter
        {
          // Functions:
          public: sophis::tools::dataModel::DataExporter::DataExporter(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataExporter::~DataExporter(void)
#endif

        public:
        };

        class DataImportException : public DataModelException
        {
          // Functions:
          public: sophis::tools::dataModel::DataImportException::DataImportException(class sophis::tools::dataModel::DataImportException &&)
          public: sophis::tools::dataModel::DataImportException::DataImportException(class sophis::tools::dataModel::DataImportException const &)
          public: sophis::tools::dataModel::DataImportException::DataImportException(char const *, char const *)
          public: class sophis::tools::dataModel::DataImportException & sophis::tools::dataModel::DataImportException::operator=(class sophis::tools::dataModel::DataImportException &&)
          public: class sophis::tools::dataModel::DataImportException & sophis::tools::dataModel::DataImportException::operator=(class sophis::tools::dataModel::DataImportException const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataImportException::~DataImportException(void)
#endif

        public:
        };

        class/*or struct*/ DataImporter
        {
          // Functions:
          public: sophis::tools::dataModel::DataImporter::DataImporter(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataImporter::~DataImporter(void)
#endif

        public:
        };

        class DataModelException : public ExceptionBase
        {
          // Functions:
          protected: sophis::tools::dataModel::DataModelException::DataModelException(char const *, char const *)
          public: sophis::tools::dataModel::DataModelException::DataModelException(class sophis::tools::dataModel::DataModelException const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataModelException::~DataModelException(void)
#endif

        public:
        };

        class DataSequence : public DataContainer
        {
          // VFTable. Offset=0, Size=20, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataContainer
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void) = 0; // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void) = 0; // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void) = 0; // 9
          public: virtual void unknown_vf_0_10(void) = 0; // 10
          public: virtual void unknown_vf_0_11(void) = 0; // 11
          public: virtual void unknown_vf_0_12(void) = 0; // 12
          public: virtual void unknown_vf_0_13(void) = 0; // 13
          public: virtual void unknown_vf_0_14(void) = 0; // 14
          public: virtual void unknown_vf_0_15(void) = 0; // 15
          public: virtual void unknown_vf_0_16(void) = 0; // 16
          public: virtual void unknown_vf_0_17(void) = 0; // 17
          public: virtual void unknown_vf_0_18(void) = 0; // 18
          public: virtual void unknown_vf_0_19(void) = 0; // 19
          // VFTable with 0 offset end

        public:
        };

        class DataSet : public DataContainer
        {
          // Functions:
          public: sophis::tools::dataModel::DataSet::DataSet(void)
          public: class sophis::tools::dataModel::Value & sophis::tools::dataModel::DataSet::get(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
          public: class sophis::tools::dataModel::AttributeSet & sophis::tools::dataModel::DataSet::getAttributes(char const *)
          public: class sophis::tools::dataModel::Data const & sophis::tools::dataModel::DataSet::getData(char const *, unsigned __int64) const
          public: class sophis::tools::dataModel::DataSequence & sophis::tools::dataModel::DataSet::getDataSequence(char const *, class sophis::tools::dataModel::Documentation const *)
          public: class sophis::tools::dataModel::DataSequence const & sophis::tools::dataModel::DataSet::getDataSequence(char const *) const
          public: class sophis::tools::dataModel::DataSet & sophis::tools::dataModel::DataSet::getDataSet(char const *, class sophis::tools::dataModel::Documentation const *)
          public: class sophis::tools::dataModel::DataSet const & sophis::tools::dataModel::DataSet::getDataSet(char const *) const
          public: unsigned __int64 sophis::tools::dataModel::DataSet::size(char const *) const
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataSet::~DataSet(void)
          public: virtual void sophis::tools::dataModel::DataSet::DeriveFrom(char const *)
#endif

          // VFTable. Offset=0, Size=22, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataContainer
          // Added virtual functions:
          public: virtual sophis::tools::dataModel::DataSet::~DataSet(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          public: virtual void unknown_vf_0_10(void); // 10
          public: virtual void unknown_vf_0_11(void); // 11
          public: virtual void unknown_vf_0_12(void); // 12
          public: virtual void unknown_vf_0_13(void); // 13
          public: virtual void unknown_vf_0_14(void); // 14
          public: virtual void unknown_vf_0_15(void); // 15
          public: virtual void unknown_vf_0_16(void); // 16
          public: virtual void unknown_vf_0_17(void); // 17
          public: virtual void unknown_vf_0_18(void); // 18
          public: virtual void unknown_vf_0_19(void); // 19
          public: virtual void unknown_vf_0_20(void); // 20
          public: virtual void sophis::tools::dataModel::DataSet::DeriveFrom(char const *); // 21
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataSetUtil
        {
          // Static functions:
          public: static void sophis::tools::dataModel::DataSetUtil::copy(class sophis::tools::dataModel::Data &, class sophis::tools::dataModel::Data const &, bool, bool, bool)
          public: static void sophis::tools::dataModel::DataSetUtil::copy(class sophis::tools::dataModel::Data &, class sophis::tools::dataModel::Data const &, bool)
          public: static void sophis::tools::dataModel::DataSetUtil::copy(class sophis::tools::dataModel::Value &, class sophis::tools::dataModel::Value const &)
        public:
        };

        class/*or struct*/ DataTraversal
        {
          // Functions:
          public: sophis::tools::dataModel::DataTraversal::DataTraversal(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataTraversal::~DataTraversal(void)
          public: virtual bool sophis::tools::dataModel::DataTraversal::traverseDataSequence(class sophis::tools::dataModel::DataSequence const &, class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::ParentStack>, char const *)
          public: virtual bool sophis::tools::dataModel::DataTraversal::traverseDataSet(class sophis::tools::dataModel::DataSet const &, class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::ParentStack>, char const *)
#endif

        public:
        };

        class Documentation
        {
          // Functions:
          public: sophis::tools::dataModel::Documentation::Documentation(class sophis::tools::dataModel::Documentation const &)
          public: sophis::tools::dataModel::Documentation::Documentation(void)
          public: bool sophis::tools::dataModel::Documentation::multiTypesInSequence(void) const
          public: char const * sophis::tools::dataModel::Documentation::refName(void) const
          public: char const * sophis::tools::dataModel::Documentation::refType(void) const
          public: bool sophis::tools::dataModel::Documentation::sequence(void) const
          public: char const * sophis::tools::dataModel::Documentation::substitutionGroup(void) const
          public: char const * sophis::tools::dataModel::Documentation::substitutionGroupElement(void) const
          public: char const * sophis::tools::dataModel::Documentation::substitutionGroupHeadType(void) const
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::Documentation::~Documentation(void)
          public: virtual bool sophis::tools::dataModel::Documentation::Anonymous(void) const
          public: virtual bool sophis::tools::dataModel::Documentation::Choise(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::Comment(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::CommentComplexType(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::ComplexType(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::EnumsComment(int) const
          public: virtual int sophis::tools::dataModel::Documentation::EnumsCount(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::EnumsVal(int) const
          public: virtual int sophis::tools::dataModel::Documentation::MaximumSize(void) const
          public: virtual int sophis::tools::dataModel::Documentation::MinimumSize(void) const
          public: virtual char const * sophis::tools::dataModel::Documentation::NameSpace(void) const
          public: virtual bool sophis::tools::dataModel::Documentation::NilPossible(void) const
          public: virtual bool sophis::tools::dataModel::Documentation::NormalizedString(void) const
          public: virtual bool sophis::tools::dataModel::Documentation::Optional(void) const
#endif

          // VFTable. Offset=0, Size=15, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::tools::dataModel::Documentation::~Documentation(void); // 0
          public: virtual bool sophis::tools::dataModel::Documentation::Optional(void) const; // 1
          public: virtual bool sophis::tools::dataModel::Documentation::NilPossible(void) const; // 2
          public: virtual char const * sophis::tools::dataModel::Documentation::ComplexType(void) const; // 3
          public: virtual int sophis::tools::dataModel::Documentation::MinimumSize(void) const; // 4
          public: virtual int sophis::tools::dataModel::Documentation::MaximumSize(void) const; // 5
          public: virtual bool sophis::tools::dataModel::Documentation::NormalizedString(void) const; // 6
          public: virtual char const * sophis::tools::dataModel::Documentation::Comment(void) const; // 7
          public: virtual char const * sophis::tools::dataModel::Documentation::CommentComplexType(void) const; // 8
          public: virtual int sophis::tools::dataModel::Documentation::EnumsCount(void) const; // 9
          public: virtual char const * sophis::tools::dataModel::Documentation::EnumsVal(int) const; // 10
          public: virtual char const * sophis::tools::dataModel::Documentation::EnumsComment(int) const; // 11
          public: virtual char const * sophis::tools::dataModel::Documentation::NameSpace(void) const; // 12
          public: virtual bool sophis::tools::dataModel::Documentation::Choise(void) const; // 13
          public: virtual bool sophis::tools::dataModel::Documentation::Anonymous(void) const; // 14
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DocumentationDecorator : public Documentation
        {
          // Functions:
          public: sophis::tools::dataModel::DocumentationDecorator::DocumentationDecorator(class sophis::tools::dataModel::Documentation const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DocumentationDecorator::~DocumentationDecorator(void)
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Anonymous(void) const
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Choise(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::Comment(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::CommentComplexType(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::ComplexType(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::EnumsComment(int) const
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::EnumsCount(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::EnumsVal(int) const
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::MaximumSize(void) const
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::MinimumSize(void) const
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::NameSpace(void) const
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::NilPossible(void) const
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::NormalizedString(void) const
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Optional(void) const
#endif

          // VFTable. Offset=0, Size=15, Start=15
          // Corresponding base: dataModel::dataModel::dataModel::Documentation
          // public: virtual sophis::tools::dataModel::DocumentationDecorator::~DocumentationDecorator(void); // 0
          // Overrides:
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Optional(void) const override; // 1
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::NilPossible(void) const override; // 2
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::ComplexType(void) const override; // 3
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::MinimumSize(void) const override; // 4
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::MaximumSize(void) const override; // 5
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::NormalizedString(void) const override; // 6
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::Comment(void) const override; // 7
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::CommentComplexType(void) const override; // 8
          public: virtual int sophis::tools::dataModel::DocumentationDecorator::EnumsCount(void) const override; // 9
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::EnumsVal(int) const override; // 10
          public: virtual char const * sophis::tools::dataModel::DocumentationDecorator::EnumsComment(int) const override; // 11
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Choise(void) const override; // 13
          public: virtual bool sophis::tools::dataModel::DocumentationDecorator::Anonymous(void) const override; // 14
          // VFTable with 0 offset end

        public:
        };

        template<typename T1        >
        class GenericDataIterator
        {
        public:
        };
#if 0 // Instances:
// <class sophis::tools::dataModel::Data const>
#if 0
        template<>
        class GenericDataIterator<class sophis::tools::dataModel::Data const>
        {
        public:
        };
#endif
// <class sophis::tools::dataModel::Data>
#if 0
        template<>
        class GenericDataIterator<class sophis::tools::dataModel::Data>
        {
        public:
        };
#endif
#endif


        class/*or struct*/ InvalidDataValue : public DataModelException
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataModelException
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class NoSuchData
        {
          // Functions:
          public: sophis::tools::dataModel::NoSuchData::NoSuchData(class sophis::tools::dataModel::NoSuchData const &)
          public: sophis::tools::dataModel::NoSuchData::NoSuchData(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::NoSuchData::~NoSuchData(void)
#endif

        public:
        };

        class ParentStack
        {
          // Functions:
          public: sophis::tools::dataModel::ParentStack::ParentStack(class sophis::tools::dataModel::ParentStack const &)
          public: void sophis::tools::dataModel::ParentStack::`vbase dtor'(void)
          // VFTable. Offset=48, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_48_0(void); // 0
          public: virtual void unknown_vf_48_1(void); // 1
          public: virtual void unknown_vf_48_2(void); // 2
          public: virtual void unknown_vf_48_3(void); // 3
#endif
          // VFTable with 48 offset end

        public:
        };

        class PlainValue
        {
        public:
        };

        class TransformationFailure
        {
          // Functions:
          public: sophis::tools::dataModel::TransformationFailure::TransformationFailure(class sophis::tools::dataModel::TransformationFailure const &)
          public: sophis::tools::dataModel::TransformationFailure::TransformationFailure(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::TransformationFailure::~TransformationFailure(void)
#endif

        public:
        };

        class Transformer
        {
        public:
        };

        class/*or struct*/ Traversal
        {
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::Traversal::~Traversal(void)
#endif

        public:
        };

        class/*or struct*/ Traverser
        {
          // Functions:
          public: sophis::tools::dataModel::Traverser::Traverser(bool, bool)
          public: void sophis::tools::dataModel::Traverser::`vbase dtor'(void)
          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class UnknownValueKind
        {
          // Functions:
          public: sophis::tools::dataModel::UnknownValueKind::UnknownValueKind(class sophis::tools::dataModel::UnknownValueKind const &)
          public: sophis::tools::dataModel::UnknownValueKind::UnknownValueKind(long)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::UnknownValueKind::~UnknownValueKind(void)
#endif

        public:
        };

        class Value
        {
          // VFTable. Offset=0, Size=0, Start=0
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ ValueTypeUtil
        {
          // Static functions:
          public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::tools::dataModel::ValueTypeUtil::getTextKind(enum sophis::tools::dataModel::ValueKind)
          public: static bool sophis::tools::dataModel::ValueTypeUtil::isPlain(enum sophis::tools::dataModel::ValueKind)
        public:
        };


        // Functions:
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::dataModel::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::tools::dataModel::ArrayOfStrings const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::dataModel::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::tools::dataModel::Value const &)
      public:
      };

      class/*or struct*/ util
      {
      public:
        // Nested containers:
        class/*or struct*/ BasicRunnable
        {
          // Functions:
          public: sophis::tools::util::BasicRunnable::BasicRunnable(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::util::BasicRunnable::~BasicRunnable(void)
          public: virtual void sophis::tools::util::BasicRunnable::_add_ref(void)
          public: virtual void sophis::tools::util::BasicRunnable::_remove_ref(void)
          protected: virtual void sophis::tools::util::BasicRunnable::clean(void)
          public: virtual long sophis::tools::util::BasicRunnable::getRef(void) const
          public: virtual bool sophis::tools::util::BasicRunnable::isRunning(void)
          protected: virtual void sophis::tools::util::BasicRunnable::requestExit(void)
          public: virtual void sophis::tools::util::BasicRunnable::run(void)
          public: virtual void sophis::tools::util::BasicRunnable::stop(bool)
#endif

        public:
        };

        class ByteArray
        {
          // Functions:
          public: sophis::tools::util::ByteArray::ByteArray(void)
          public: void sophis::tools::util::ByteArray::`vbase dtor'(void)
          public: void sophis::tools::util::ByteArray::buffer(char *, unsigned __int64, unsigned __int64, bool)
          public: char const *const sophis::tools::util::ByteArray::buffer(void) const
          public: unsigned __int64 sophis::tools::util::ByteArray::size(void) const
          // VFTable. Offset=64, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_64_0(void); // 0
          public: virtual void unknown_vf_64_1(void); // 1
          public: virtual void unknown_vf_64_2(void); // 2
          public: virtual void unknown_vf_64_3(void); // 3
#endif
          // VFTable with 64 offset end

        public:
        };

        class/*or struct*/ DateTimeUtil
        {
          // Static functions:
          public: static void sophis::tools::util::DateTimeUtil::scanDate(class std::basic_istream<char, struct std::char_traits<char>> &, class sophisTools::CSRDay &, bool)
        public:
        };

        class DateTimeWrapper
        {
          // Functions:
          public: sophis::tools::util::DateTimeWrapper::DateTimeWrapper(void)
          public: sophis::tools::util::DateTimeWrapper::~DateTimeWrapper(void)
        public:
        };

        struct MonthDayWrapper
        {
        public:
        };

        template<typename T1        >
        class/*or struct*/ NotificationListener
        {
        public:
        };
#if 0 // Instances:
// <struct sophis::tools::util::Worker::JobTerminatedEvent>
#if 0
        template<>
        class/*or struct*/ NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          // VFTable with 0 offset end

          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_32_0(void); // 0
          public: virtual void unknown_vf_32_1(void); // 1
          public: virtual void unknown_vf_32_2(void); // 2
          public: virtual void unknown_vf_32_3(void); // 3
#endif
          // VFTable with 32 offset end

        public:
        };
#endif
#endif


        class StringBoolMap
        {
          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class StringPairList
        {
          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class/*or struct*/ StringToStringMap
        {
          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class TimeWrapper
        {
          // Functions:
          public: sophis::tools::util::TimeWrapper::TimeWrapper(void)
          public: sophis::tools::util::TimeWrapper::~TimeWrapper(void)
        public:
        };

        class Worker
        {
        public:
          // Nested containers:
          struct JobTerminatedEvent
          {
          public:
          };


        public:
        };

        struct YearMonthWrapper
        {
        public:
        };


        // Functions:
        class std::basic_istream<char, struct std::char_traits<char>> & sophis::tools::util::operator>>(class std::basic_istream<char, struct std::char_traits<char>> &, struct sophis::tools::util::MonthDayWrapper &)
        class std::basic_istream<char, struct std::char_traits<char>> & sophis::tools::util::operator>>(class std::basic_istream<char, struct std::char_traits<char>> &, struct sophis::tools::util::YearMonthWrapper &)
        class std::basic_istream<char, struct std::char_traits<char>> & sophis::tools::util::operator>>(class std::basic_istream<char, struct std::char_traits<char>> &, class sophis::tools::util::DateTimeWrapper &)
        class std::basic_istream<char, struct std::char_traits<char>> & sophis::tools::util::operator>>(class std::basic_istream<char, struct std::char_traits<char>> &, class sophis::tools::util::TimeWrapper &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, struct sophis::tools::util::MonthDayWrapper const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, struct sophis::tools::util::YearMonthWrapper const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::tools::util::DateTimeWrapper const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::tools::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::tools::util::TimeWrapper const &)
      public:
      };


    };

    namespace/*or class/struct?*/ xml
    {
      // Nested containers:
      class SimpleAllocator : public MemoryManager
      {
        // Functions:
        public: sophis::xml::SimpleAllocator::SimpleAllocator(void)
        // Static functions:
        public: static void sophis::xml::SimpleAllocator::dispose(void)
        public: static class xercesc_3_2::MemoryManager * sophis::xml::SimpleAllocator::getInstance(void)
        public: static void sophis::xml::SimpleAllocator::init(void)
        // Variables:
        private: static class sophis::xml::SimpleAllocator *sophis::xml::SimpleAllocator::fSimpleAllocator
#if 0 // All found virtual functions names:
        public: virtual sophis::xml::SimpleAllocator::~SimpleAllocator(void)
        public: virtual void * sophis::xml::SimpleAllocator::allocate(unsigned __int64)
        public: virtual void sophis::xml::SimpleAllocator::deallocate(void *)
        public: virtual class xercesc_3_2::MemoryManager * sophis::xml::SimpleAllocator::getExceptionMemoryManager(void)
#endif

        // VFTable. Offset=0, Size=4, Start=0
        // Corresponding base: xercesc_3_2::MemoryManager
        // Owner: SophisXML.dll
        // Added virtual functions:
        public: virtual sophis::xml::SimpleAllocator::~SimpleAllocator(void); // 0
        public: virtual class xercesc_3_2::MemoryManager * sophis::xml::SimpleAllocator::getExceptionMemoryManager(void); // 1
        public: virtual void * sophis::xml::SimpleAllocator::allocate(unsigned __int64); // 2
        public: virtual void sophis::xml::SimpleAllocator::deallocate(void *); // 3
        // VFTable with 0 offset end

      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class/*or struct*/ AlreadyDefinedDataSetOnlyDecorator : public DataSetDecorator
        {
          // VFTable. Offset=0, Size=63, Start=63
          // Corresponding base: dataModel::dataModel::dataModel::DataSetDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ AttributeSetDecorator : public Decorator<class sophis::tools::dataModel::AttributeSet>
        {
          // VFTable. Offset=0, Size=14, Start=14
          // Corresponding base: Decorator::Decorator::Decorator::Decorator::Decorator<class sophis::tools::dataModel::AttributeSet>
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ BasicDataFactory
        {
          // VFTable. Offset=0, Size=9, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          // VFTable with 0 offset end

          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class/*or struct*/ BasicGrammarPool
        {
          // VFTable. Offset=0, Size=12, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          public: virtual void unknown_vf_0_10(void); // 10
          public: virtual void unknown_vf_0_11(void); // 11
          // VFTable with 0 offset end

          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_40_0(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class BasicGrammarPoolImpl
        {
          // Functions:
          protected: sophis::xml::dataModel::BasicGrammarPoolImpl::BasicGrammarPoolImpl(class xercesc_3_2::XMLGrammarPool *, class xercesc_3_2::DOMLSParser *, class xercesc_3_2::DOMLSSerializer *)
          protected: void sophis::xml::dataModel::BasicGrammarPoolImpl::`vbase dtor'(void)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::addGrammar(class sophis::xml::dataModel::XMLGrammar &)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::addGrammar(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::addGrammar(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, char const *, bool)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::doAddGrammar(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, bool)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::doGetEnumValues(char const *, char const *, class sophis::tools::dataModel::ArrayOfStrings &)
          public: class sophis::tools::dataModel::ArrayOfStrings const * sophis::xml::dataModel::BasicGrammarPoolImpl::enumValues(char const *, char const *)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::findElement(char const *, char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::findNamespaces(char const *, class std::set<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> &)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::getAllSubstitutedNames(char const *, class std::vector<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>> &)
          public: class xercesc_3_2::DOMLSParser * sophis::xml::dataModel::BasicGrammarPoolImpl::getDOMBuilder(void)
          private: class xercesc_3_2::DOMImplementationLS * sophis::xml::dataModel::BasicGrammarPoolImpl::getDOMImplementationLS(void)
          public: class xercesc_3_2::DOMLSOutput * sophis::xml::dataModel::BasicGrammarPoolImpl::getDOMLSOutput(void)
          public: class xercesc_3_2::DOMLSSerializer * sophis::xml::dataModel::BasicGrammarPoolImpl::getDOMWriter(void)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::getElementType(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: class xercesc_3_2::SchemaGrammar * sophis::xml::dataModel::BasicGrammarPoolImpl::getGrammar(char const *)
          public: class xercesc_3_2::SchemaGrammar * sophis::xml::dataModel::BasicGrammarPoolImpl::getGrammar(char16_t const *)
          public: char const * sophis::xml::dataModel::BasicGrammarPoolImpl::getSubstituteFor(char const *, char const *, char const *)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::getSubstitutedNS(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::getSubstitutedNameAndNS(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: class xercesc_3_2::XMLGrammarPool * sophis::xml::dataModel::BasicGrammarPoolImpl::getXMLGrammarPool(void)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::hasGrammar(char const *)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::hasGrammar(char16_t const *)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::joinGrammarLoading(void)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::logLoadedGrammars(enum Log::Severity)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::orphanGrammar(char const *)
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::orphanGrammar(char16_t const *)
          public: unsigned __int64 sophis::xml::dataModel::BasicGrammarPoolImpl::pendingGrammars(void)
          public: void sophis::xml::dataModel::BasicGrammarPoolImpl::stop(void)
          // Static functions:
          private: static void sophis::xml::dataModel::BasicGrammarPoolImpl::CreateGrammarLoadingGuard(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> &)
          public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::BasicGrammarPoolImpl> sophis::xml::dataModel::BasicGrammarPoolImpl::create(void)
          public: static void sophis::xml::dataModel::BasicGrammarPoolImpl::dispose(void)
          public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::BasicGrammarPoolImpl> sophis::xml::dataModel::BasicGrammarPoolImpl::getInstance(void)
          public: static char16_t const * sophis::xml::dataModel::BasicGrammarPoolImpl::getLoadStoreFeatureName(void)
          public: static void sophis::xml::dataModel::BasicGrammarPoolImpl::init(void)
          // Variables:
          private: static char const *sophis::xml::dataModel::BasicGrammarPoolImpl::__CLASS__
          private: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::BasicGrammarPoolImpl> sophis::xml::dataModel::BasicGrammarPoolImpl::fInstance
          private: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::GrammarLoadingGuard> sophis::xml::dataModel::BasicGrammarPoolImpl::gGuard
          private: static bool sophis::xml::dataModel::BasicGrammarPoolImpl::gLateLoading
          private: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sophis::xml::dataModel::BasicGrammarPoolImpl::gWorker
#if 0 // All found virtual functions names:
          protected: virtual sophis::xml::dataModel::BasicGrammarPoolImpl::~BasicGrammarPoolImpl(void)
          public: virtual void sophis::xml::dataModel::BasicGrammarPoolImpl::_add_ref(void)
          public: virtual void sophis::xml::dataModel::BasicGrammarPoolImpl::_remove_ref(void)
          public: virtual long sophis::xml::dataModel::BasicGrammarPoolImpl::getRef(void) const
#endif

          // VFTable. Offset=56, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          protected: virtual sophis::xml::dataModel::BasicGrammarPoolImpl::~BasicGrammarPoolImpl(void); // 0
          public: virtual void unknown_vf_56_1(void); // 1
          public: virtual void unknown_vf_56_2(void); // 2
          public: virtual void unknown_vf_56_3(void); // 3
#endif
          // VFTable with 56 offset end

        public:
        };

        class/*or struct*/ BasicXMLDocument
        {
          // Functions:
          public: sophis::xml::dataModel::BasicXMLDocument::BasicXMLDocument(void)
          public: void sophis::xml::dataModel::BasicXMLDocument::`vbase dtor'(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::BasicXMLDocument::~BasicXMLDocument(void)
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::_add_ref(void)
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::_remove_ref(void)
          public: virtual long sophis::xml::dataModel::BasicXMLDocument::getRef(void) const
          public: virtual class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::BasicXMLDocument::getRootNode(void)
          public: virtual class sophis::tools::dataModel::DataSet const & sophis::xml::dataModel::BasicXMLDocument::getRootNode(void) const
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::load(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophis::xml::dataModel::ImportFeature const *)
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::save(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>, class sophis::xml::dataModel::ExportFeature const *)
#endif

          // VFTable. Offset=0, Size=8, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::_add_ref(void); // 0
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::_remove_ref(void); // 1
          public: virtual long sophis::xml::dataModel::BasicXMLDocument::getRef(void) const; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::load(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophis::xml::dataModel::ImportFeature const *); // 4
          public: virtual void sophis::xml::dataModel::BasicXMLDocument::save(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>, class sophis::xml::dataModel::ExportFeature const *); // 5
          public: virtual class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::BasicXMLDocument::getRootNode(void); // 6
          public: virtual class sophis::tools::dataModel::DataSet const & sophis::xml::dataModel::BasicXMLDocument::getRootNode(void) const; // 7
          // VFTable with 0 offset end

          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::dataModel::BasicXMLDocument::~BasicXMLDocument(void); // 0
          public: virtual void unknown_vf_40_1(void); // 1
          public: virtual void unknown_vf_40_2(void); // 2
          public: virtual void unknown_vf_40_3(void); // 3
#endif
          // VFTable with 40 offset end

        public:
        };

        class/*or struct*/ BasicXMLDocumentImpl
        {
          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_32_0(void); // 0
          public: virtual void unknown_vf_32_1(void); // 1
          public: virtual void unknown_vf_32_2(void); // 2
          public: virtual void unknown_vf_32_3(void); // 3
#endif
          // VFTable with 32 offset end

        public:
        };

        class/*or struct*/ CascadedXSLTransformer
        {
          // Functions:
          protected: sophis::xml::dataModel::CascadedXSLTransformer::CascadedXSLTransformer(char const *, bool, bool, class std::vector<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>>> const &, char const *)
          protected: void sophis::xml::dataModel::CascadedXSLTransformer::`vbase dtor'(void)
          public: void sophis::xml::dataModel::CascadedXSLTransformer::transform(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::Transformer> sophis::xml::dataModel::CascadedXSLTransformer::create(char const *, class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &, bool, bool, char const *)
          // Variables:
          private: static char const *sophis::xml::dataModel::CascadedXSLTransformer::__CLASS__
#if 0 // All found virtual functions names:
          protected: virtual sophis::xml::dataModel::CascadedXSLTransformer::~CascadedXSLTransformer(void)
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::dispose(void)
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::init(void)
          public: virtual char const * sophis::xml::dataModel::CascadedXSLTransformer::name(void)
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::postprocess(class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::preprocess(class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::transform(class sophis::tools::dataModel::DataSet &)
#endif

          // VFTable. Offset=0, Size=8, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual char const * sophis::xml::dataModel::CascadedXSLTransformer::name(void); // 0
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::init(void); // 1
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::preprocess(class sophis::tools::dataModel::DataSet &); // 2
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::transform(class sophis::tools::dataModel::DataSet &); // 3
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::postprocess(class sophis::tools::dataModel::DataSet &); // 4
          public: virtual void sophis::xml::dataModel::CascadedXSLTransformer::dispose(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          // VFTable with 0 offset end

          // VFTable. Offset=152, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          protected: virtual sophis::xml::dataModel::CascadedXSLTransformer::~CascadedXSLTransformer(void); // 0
          public: virtual void unknown_vf_152_1(void); // 1
          public: virtual void unknown_vf_152_2(void); // 2
          public: virtual void unknown_vf_152_3(void); // 3
#endif
          // VFTable with 152 offset end

        public:
        };

        class/*or struct*/ CharArrayXMLDataImporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=152, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_152_0(void); // 0
          public: virtual void unknown_vf_152_1(void); // 1
          public: virtual void unknown_vf_152_2(void); // 2
          public: virtual void unknown_vf_152_3(void); // 3
#endif
          // VFTable with 152 offset end

        public:
        };

        class ConfigUtil
        {
          // Functions:
          public: class sophis::xml::dataModel::ConfigUtil & sophis::xml::dataModel::ConfigUtil::operator=(class sophis::xml::dataModel::ConfigUtil &&)
          public: class sophis::xml::dataModel::ConfigUtil & sophis::xml::dataModel::ConfigUtil::operator=(class sophis::xml::dataModel::ConfigUtil const &)
          // Static functions:
          public: static bool sophis::xml::dataModel::ConfigUtil::getCheckResult(void)
        public:
        };

        template<typename T1        >
        class/*or struct*/ DataContainerDecorator
        {
        public:
        };
#if 0 // Instances:
// <class sophis::xml::dataModel::DataSequenceOnlyDecorator>
#if 0
        template<>
        class/*or struct*/ DataContainerDecorator<class sophis::xml::dataModel::DataSequenceOnlyDecorator> : public DataSequenceOnlyDecorator
        {
          // VFTable. Offset=0, Size=22, Start=22
          // Corresponding base: dataModel::dataModel::dataModel::DataSequenceOnlyDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
// <class sophis::xml::dataModel::DataSetOnlyDecorator>
#if 0
        template<>
        class/*or struct*/ DataContainerDecorator<class sophis::xml::dataModel::DataSetOnlyDecorator> : public DataSetOnlyDecorator
        {
          // VFTable. Offset=0, Size=63, Start=63
          // Corresponding base: dataModel::dataModel::dataModel::DataSetOnlyDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
#endif


        class/*or struct*/ DataDecorator : public Decorator<class sophis::tools::dataModel::Data>
        {
          // VFTable. Offset=0, Size=12, Start=8
          // Corresponding base: Decorator::Decorator::Decorator::Decorator::Decorator<class sophis::tools::dataModel::Data>
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          public: virtual void unknown_vf_0_10(void); // 10
          public: virtual void unknown_vf_0_11(void); // 11
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataDecoratorInSequence : public DataSetDataDecorator
        {
          // VFTable. Offset=0, Size=14, Start=12
          // Corresponding base: dataModel::dataModel::dataModel::DataSetDataDecorator
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_12(void); // 12
          public: virtual void unknown_vf_0_13(void); // 13
          // VFTable with 0 offset end

        public:
        };

        class DataFactory : public RefCount
        {
        public:
          // Nested containers:
          class/*or struct*/ Manager
          {
            // Static functions:
            public: static class std::map<class sophisTools::FlyWeightString, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>, struct std::less<class sophisTools::FlyWeightString>, class std::allocator<struct std::pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>>> const & sophis::xml::dataModel::DataFactory::Manager::allInstances(void)
            public: static void sophis::xml::dataModel::DataFactory::Manager::disposeAll(void)
            public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory> sophis::xml::dataModel::DataFactory::Manager::getDefaultInstance(void)
            public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory> sophis::xml::dataModel::DataFactory::Manager::getInstance(char const *)
            public: static void sophis::xml::dataModel::DataFactory::Manager::initAll(void)
            public: static void sophis::xml::dataModel::DataFactory::Manager::install(class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>)
            public: static void sophis::xml::dataModel::DataFactory::Manager::installDefault(class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>)
          public:
          };


          // VFTable. Offset=0, Size=9, Start=0
          // Corresponding base: base::base::RefCount
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void) = 0; // 7
          public: virtual void unknown_vf_0_8(void) = 0; // 8
          // VFTable with 0 offset end

        public:
        };

        class DataSequenceDataDecorator : public DataDecorator
        {
          // VFTable. Offset=0, Size=12, Start=12
          // Corresponding base: dataModel::dataModel::dataModel::DataDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataSequenceDecorator : public DataContainerDecorator<class sophis::xml::dataModel::DataSequenceOnlyDecorator>
        {
          // VFTable. Offset=0, Size=22, Start=22
          // Corresponding base: DataContainerDecorator::DataContainerDecorator::DataContainerDecorator::DataContainerDecorator::DataContainerDecorator<class sophis::xml::dataModel::DataSequenceOnlyDecorator>
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class DataSequenceOnlyDecorator : public Decorator<class sophis::tools::dataModel::DataSequence>
        {
          // VFTable. Offset=0, Size=22, Start=20
          // Corresponding base: Decorator::Decorator::Decorator::Decorator::Decorator<class sophis::tools::dataModel::DataSequence>
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_20(void); // 20
          public: virtual void unknown_vf_0_21(void); // 21
          // VFTable with 0 offset end

        public:
        };

        class DataSetDataDecorator : public DataDecorator
        {
          // VFTable. Offset=0, Size=12, Start=12
          // Corresponding base: dataModel::dataModel::dataModel::DataDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataSetDecorator : public DataContainerDecorator<class sophis::xml::dataModel::DataSetOnlyDecorator>
        {
          // VFTable. Offset=0, Size=63, Start=63
          // Corresponding base: DataContainerDecorator::DataContainerDecorator::DataContainerDecorator::DataContainerDecorator::DataContainerDecorator<class sophis::xml::dataModel::DataSetOnlyDecorator>
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class DataSetOnlyDecorator : public Decorator<class sophis::tools::dataModel::DataSet>
        {
          // VFTable. Offset=0, Size=63, Start=22
          // Corresponding base: Decorator::Decorator::Decorator::Decorator::Decorator<class sophis::tools::dataModel::DataSet>
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_22(void); // 22
          public: virtual void unknown_vf_0_23(void); // 23
          public: virtual void unknown_vf_0_24(void); // 24
          public: virtual void unknown_vf_0_25(void); // 25
          public: virtual void unknown_vf_0_26(void); // 26
          public: virtual void unknown_vf_0_27(void); // 27
          public: virtual void unknown_vf_0_28(void); // 28
          public: virtual void unknown_vf_0_29(void); // 29
          public: virtual void unknown_vf_0_30(void); // 30
          public: virtual void unknown_vf_0_31(void); // 31
          public: virtual void unknown_vf_0_32(void); // 32
          public: virtual void unknown_vf_0_33(void); // 33
          public: virtual void unknown_vf_0_34(void); // 34
          public: virtual void unknown_vf_0_35(void); // 35
          public: virtual void unknown_vf_0_36(void); // 36
          public: virtual void unknown_vf_0_37(void); // 37
          public: virtual void unknown_vf_0_38(void); // 38
          public: virtual void unknown_vf_0_39(void); // 39
          public: virtual void unknown_vf_0_40(void); // 40
          public: virtual void unknown_vf_0_41(void); // 41
          public: virtual void unknown_vf_0_42(void); // 42
          public: virtual void unknown_vf_0_43(void); // 43
          public: virtual void unknown_vf_0_44(void); // 44
          public: virtual void unknown_vf_0_45(void); // 45
          public: virtual void unknown_vf_0_46(void); // 46
          public: virtual void unknown_vf_0_47(void); // 47
          public: virtual void unknown_vf_0_48(void); // 48
          public: virtual void unknown_vf_0_49(void); // 49
          public: virtual void unknown_vf_0_50(void); // 50
          public: virtual void unknown_vf_0_51(void); // 51
          public: virtual void unknown_vf_0_52(void); // 52
          public: virtual void unknown_vf_0_53(void); // 53
          public: virtual void unknown_vf_0_54(void); // 54
          public: virtual void unknown_vf_0_55(void); // 55
          public: virtual void unknown_vf_0_56(void); // 56
          public: virtual void unknown_vf_0_57(void); // 57
          public: virtual void unknown_vf_0_58(void); // 58
          public: virtual void unknown_vf_0_59(void); // 59
          public: virtual void unknown_vf_0_60(void); // 60
          public: virtual void unknown_vf_0_61(void); // 61
          public: virtual void unknown_vf_0_62(void); // 62
          // VFTable with 0 offset end

        public:
        };

        template<typename T1        >
        class/*or struct*/ Decorator
        {
        public:
        };
#if 0 // Instances:
// <class sophis::tools::dataModel::AttributeSet>
#if 0
        template<>
        class/*or struct*/ Decorator<class sophis::tools::dataModel::AttributeSet> : public GrammarFriend, public AttributeSet
        {
          // VFTable. Offset=0, Size=14, Start=14
          // Corresponding base: dataModel::dataModel::dataModel::AttributeSet
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
// <class sophis::tools::dataModel::Data>
#if 0
        template<>
        class/*or struct*/ Decorator<class sophis::tools::dataModel::Data> : public GrammarFriend, public Data
        {
          // VFTable. Offset=0, Size=8, Start=8
          // Corresponding base: dataModel::dataModel::dataModel::Data
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
// <class sophis::tools::dataModel::DataSequence>
#if 0
        template<>
        class/*or struct*/ Decorator<class sophis::tools::dataModel::DataSequence> : public GrammarFriend, public DataSequence
        {
          // VFTable. Offset=0, Size=20, Start=20
          // Corresponding base: dataModel::dataModel::dataModel::DataSequence
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
// <class sophis::tools::dataModel::DataSet>
#if 0
        template<>
        class/*or struct*/ Decorator<class sophis::tools::dataModel::DataSet> : public GrammarFriend, public DataSet
        {
          // VFTable. Offset=0, Size=22, Start=22
          // Corresponding base: dataModel::dataModel::dataModel::DataSet
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };
#endif
#endif


        class/*or struct*/ EnumMap
        {
          // VFTable. Offset=80, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_80_0(void); // 0
          public: virtual void unknown_vf_80_1(void); // 1
          public: virtual void unknown_vf_80_2(void); // 2
          public: virtual void unknown_vf_80_3(void); // 3
#endif
          // VFTable with 80 offset end

        public:
        };

        class ExportFeature
        {
          // Functions:
          public: sophis::xml::dataModel::ExportFeature::ExportFeature(class sophis::xml::dataModel::ExportFeature const &)
          public: sophis::xml::dataModel::ExportFeature::ExportFeature(void)
          public: sophis::xml::dataModel::ExportFeature::~ExportFeature(void)
          public: class sophis::xml::dataModel::ExportFeature & sophis::xml::dataModel::ExportFeature::operator=(class sophis::xml::dataModel::ExportFeature const &)
          public: void sophis::xml::dataModel::ExportFeature::checkResult(bool)
          public: bool sophis::xml::dataModel::ExportFeature::checkResult(void) const
          public: void sophis::xml::dataModel::ExportFeature::encoding(long)
          public: long sophis::xml::dataModel::ExportFeature::encoding(void) const
          public: void sophis::xml::dataModel::ExportFeature::instanceTypeGeneration(bool)
          public: bool sophis::xml::dataModel::ExportFeature::instanceTypeGeneration(void) const
          public: void sophis::xml::dataModel::ExportFeature::qualifiedAttributes(char const *, bool)
          public: class sophisTools::base::RefCountHandle<class sophis::tools::util::StringBoolMap> sophis::xml::dataModel::ExportFeature::qualifiedAttributes(void) const
          public: void sophis::xml::dataModel::ExportFeature::qualifiedElements(char const *, bool)
          public: class sophisTools::base::RefCountHandle<class sophis::tools::util::StringBoolMap> sophis::xml::dataModel::ExportFeature::qualifiedElements(void) const
          public: void sophis::xml::dataModel::ExportFeature::renameNonUniqueIds(bool)
          public: bool sophis::xml::dataModel::ExportFeature::renameNonUniqueIds(void) const
          public: void sophis::xml::dataModel::ExportFeature::renameSubstitutionGroups(bool)
          public: bool sophis::xml::dataModel::ExportFeature::renameSubstitutionGroups(void) const
          public: void sophis::xml::dataModel::ExportFeature::renameXsiType(bool)
          public: bool sophis::xml::dataModel::ExportFeature::renameXsiType(void) const
          public: void sophis::xml::dataModel::ExportFeature::reservePrefix(char const *, char const *)
          public: class sophisTools::base::RefCountHandle<class sophis::tools::util::StringPairList> sophis::xml::dataModel::ExportFeature::reservedPrefixes(void) const
          public: void sophis::xml::dataModel::ExportFeature::withFormatPrettyPrint(bool)
          public: bool sophis::xml::dataModel::ExportFeature::withFormatPrettyPrint(void) const
          public: void sophis::xml::dataModel::ExportFeature::withGrammar(bool)
          public: bool sophis::xml::dataModel::ExportFeature::withGrammar(void) const
          public: void sophis::xml::dataModel::ExportFeature::withXmlDeclaration(bool)
          public: bool sophis::xml::dataModel::ExportFeature::withXmlDeclaration(void) const
        public:
        };

        class/*or struct*/ ExportFeatureImpl
        {
          // VFTable. Offset=184, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_184_0(void); // 0
          public: virtual void unknown_vf_184_1(void); // 1
          public: virtual void unknown_vf_184_2(void); // 2
          public: virtual void unknown_vf_184_3(void); // 3
#endif
          // VFTable with 184 offset end

        public:
        };

        class/*or struct*/ GrammarFriend
        {
        public:
        };

        class/*or struct*/ GrammarLoadingException : public ExceptionBase
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: base::base::ExceptionBase
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class GrammarLoadingGuard
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=136, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_136_0(void); // 0
          public: virtual void unknown_vf_136_1(void); // 1
          public: virtual void unknown_vf_136_2(void); // 2
          public: virtual void unknown_vf_136_3(void); // 3
#endif
          // VFTable with 136 offset end

        public:
        };

        class GrammarPool : public RefCount
        {
          // VFTable. Offset=0, Size=12, Start=0
          // Corresponding base: base::base::RefCount
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void) = 0; // 7
          public: virtual void unknown_vf_0_8(void) = 0; // 8
          public: virtual void unknown_vf_0_9(void) = 0; // 9
          public: virtual void unknown_vf_0_10(void) = 0; // 10
          public: virtual void unknown_vf_0_11(void) = 0; // 11
          // VFTable with 0 offset end

        public:
        };

        class GrammarPoolSingleton
        {
          // Functions:
          public: class sophis::xml::dataModel::GrammarPoolSingleton & sophis::xml::dataModel::GrammarPoolSingleton::operator=(class sophis::xml::dataModel::GrammarPoolSingleton &&)
          public: class sophis::xml::dataModel::GrammarPoolSingleton & sophis::xml::dataModel::GrammarPoolSingleton::operator=(class sophis::xml::dataModel::GrammarPoolSingleton const &)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::GrammarPool> sophis::xml::dataModel::GrammarPoolSingleton::getInstance(void)
        public:
        };

        class ImportFeature
        {
          // Functions:
          public: sophis::xml::dataModel::ImportFeature::ImportFeature(class sophis::xml::dataModel::ImportFeature const &)
          public: sophis::xml::dataModel::ImportFeature::ImportFeature(void)
          public: sophis::xml::dataModel::ImportFeature::~ImportFeature(void)
          public: class sophis::xml::dataModel::ImportFeature & sophis::xml::dataModel::ImportFeature::operator=(class sophis::xml::dataModel::ImportFeature const &)
          public: void sophis::xml::dataModel::ImportFeature::convertEnums(bool)
          public: bool sophis::xml::dataModel::ImportFeature::convertEnums(void) const
          public: void sophis::xml::dataModel::ImportFeature::ignoreRootElement(bool)
          public: bool sophis::xml::dataModel::ImportFeature::ignoreRootElement(void) const
          public: void sophis::xml::dataModel::ImportFeature::keepXmlStartingAttributes(bool)
          public: bool sophis::xml::dataModel::ImportFeature::keepXmlStartingAttributes(void) const
          public: void sophis::xml::dataModel::ImportFeature::keepXsiTypeAttributes(bool)
          public: bool sophis::xml::dataModel::ImportFeature::keepXsiTypeAttributes(void) const
          public: void sophis::xml::dataModel::ImportFeature::renameXsiType(bool)
          public: bool sophis::xml::dataModel::ImportFeature::renameXsiType(void) const
          public: void sophis::xml::dataModel::ImportFeature::withGrammar(bool)
          public: bool sophis::xml::dataModel::ImportFeature::withGrammar(void) const
        public:
        };

        class/*or struct*/ ImportFeatureImpl
        {
          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_32_0(void); // 0
          public: virtual void unknown_vf_32_1(void); // 1
          public: virtual void unknown_vf_32_2(void); // 2
          public: virtual void unknown_vf_32_3(void); // 3
#endif
          // VFTable with 32 offset end

        public:
        };

        class/*or struct*/ InputStreamXMLDataImporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=152, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_152_0(void); // 0
          public: virtual void unknown_vf_152_1(void); // 1
          public: virtual void unknown_vf_152_2(void); // 2
          public: virtual void unknown_vf_152_3(void); // 3
#endif
          // VFTable with 152 offset end

        public:
        };

        class InvalidGrammar : public DataImportException
        {
          // Functions:
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(class sophis::xml::dataModel::InvalidGrammar &&)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(class sophis::xml::dataModel::InvalidGrammar const &)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(char const *, char const *)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(char const *)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(char const *, unsigned __int64, char const *)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(char const *, unsigned __int64)
          public: sophis::xml::dataModel::InvalidGrammar::InvalidGrammar(char16_t const *, unsigned __int64, char16_t const *)
          public: class sophis::xml::dataModel::InvalidGrammar & sophis::xml::dataModel::InvalidGrammar::operator=(class sophis::xml::dataModel::InvalidGrammar &&)
          public: class sophis::xml::dataModel::InvalidGrammar & sophis::xml::dataModel::InvalidGrammar::operator=(class sophis::xml::dataModel::InvalidGrammar const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::InvalidGrammar::~InvalidGrammar(void)
#endif

          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataImportException
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::dataModel::InvalidGrammar::~InvalidGrammar(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class InvalidXMLDocument : public DataImportException
        {
          // Functions:
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(class sophis::xml::dataModel::InvalidXMLDocument &&)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(class sophis::xml::dataModel::InvalidXMLDocument const &)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char const *, char const *)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char const *)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char const *, char16_t const *)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char const *, unsigned __int64, char const *)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char const *, unsigned __int64)
          public: sophis::xml::dataModel::InvalidXMLDocument::InvalidXMLDocument(char16_t const *, unsigned __int64, char16_t const *)
          public: class sophis::xml::dataModel::InvalidXMLDocument & sophis::xml::dataModel::InvalidXMLDocument::operator=(class sophis::xml::dataModel::InvalidXMLDocument &&)
          public: class sophis::xml::dataModel::InvalidXMLDocument & sophis::xml::dataModel::InvalidXMLDocument::operator=(class sophis::xml::dataModel::InvalidXMLDocument const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::InvalidXMLDocument::~InvalidXMLDocument(void)
#endif

          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataImportException
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::dataModel::InvalidXMLDocument::~InvalidXMLDocument(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ LateGrammarLoader
        {
          // VFTable. Offset=0, Size=10, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          // VFTable with 0 offset end

          // VFTable. Offset=80, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_80_0(void); // 0
          public: virtual void unknown_vf_80_1(void); // 1
          public: virtual void unknown_vf_80_2(void); // 2
          public: virtual void unknown_vf_80_3(void); // 3
#endif
          // VFTable with 80 offset end

        public:
        };

        class/*or struct*/ NamespaceDocumentation : public DocumentationDecorator
        {
          // VFTable. Offset=0, Size=15, Start=15
          // Corresponding base: dataModel::dataModel::dataModel::DocumentationDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ NullXMLDataExporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=136, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_136_0(void); // 0
          public: virtual void unknown_vf_136_1(void); // 1
          public: virtual void unknown_vf_136_2(void); // 2
          public: virtual void unknown_vf_136_3(void); // 3
#endif
          // VFTable with 136 offset end

        public:
        };

        class/*or struct*/ NullXMLDataImporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=136, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_136_0(void); // 0
          public: virtual void unknown_vf_136_1(void); // 1
          public: virtual void unknown_vf_136_2(void); // 2
          public: virtual void unknown_vf_136_3(void); // 3
#endif
          // VFTable with 136 offset end

        public:
        };

        class/*or struct*/ OStreamXMLDataExporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=144, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_144_0(void); // 0
          public: virtual void unknown_vf_144_1(void); // 1
          public: virtual void unknown_vf_144_2(void); // 2
          public: virtual void unknown_vf_144_3(void); // 3
#endif
          // VFTable with 144 offset end

        public:
        };

        class/*or struct*/ OutputStreamXMLDataExporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=144, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_144_0(void); // 0
          public: virtual void unknown_vf_144_1(void); // 1
          public: virtual void unknown_vf_144_2(void); // 2
          public: virtual void unknown_vf_144_3(void); // 3
#endif
          // VFTable with 144 offset end

        public:
        };

        class/*or struct*/ PlainValueDataDecorator : public DataDecorator
        {
          // VFTable. Offset=0, Size=12, Start=12
          // Corresponding base: dataModel::dataModel::dataModel::DataDecorator
          // Owner: SophisXML.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ RandomAccessInputStreamXMLDataImporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=144, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_144_0(void); // 0
          public: virtual void unknown_vf_144_1(void); // 1
          public: virtual void unknown_vf_144_2(void); // 2
          public: virtual void unknown_vf_144_3(void); // 3
#endif
          // VFTable with 144 offset end

        public:
        };

        class/*or struct*/ StringXMLDataExporter
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

          // VFTable. Offset=144, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_144_0(void); // 0
          public: virtual void unknown_vf_144_1(void); // 1
          public: virtual void unknown_vf_144_2(void); // 2
          public: virtual void unknown_vf_144_3(void); // 3
#endif
          // VFTable with 144 offset end

        public:
        };

        class XMLDataExporter
        {
          // Functions:
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(class std::basic_ostream<char, struct std::char_traits<char>> &)
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(void)
          public: void sophis::xml::dataModel::XMLDataExporter::`vbase dtor'(void)
          public: void sophis::xml::dataModel::XMLDataExporter::checkResult(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::checkResult(void) const
          public: class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper> sophis::xml::dataModel::XMLDataExporter::getDOMDocument(void)
          public: class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper> sophis::xml::dataModel::XMLDataExporter::getDOMDocument(bool)
          public: void sophis::xml::dataModel::XMLDataExporter::getFeature(class sophis::xml::dataModel::ExportFeature &) const
          public: void sophis::xml::dataModel::XMLDataExporter::instanceTypeGeneration(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::instanceTypeGeneration(void)
          public: void sophis::xml::dataModel::XMLDataExporter::lazyReservePrefix(char const *, char const *)
          public: void sophis::xml::dataModel::XMLDataExporter::qualifiedAttributes(char const *, bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::qualifiedAttributes(char const *)
          public: void sophis::xml::dataModel::XMLDataExporter::qualifiedElements(char const *, bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::qualifiedElements(char const *)
          public: void sophis::xml::dataModel::XMLDataExporter::renameNonUniqueIds(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::renameNonUniqueIds(void)
          public: void sophis::xml::dataModel::XMLDataExporter::renameSubstitutionGroups(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::renameSubstitutionGroups(void) const
          public: void sophis::xml::dataModel::XMLDataExporter::renameXsiType(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::renameXsiType(void) const
          public: void sophis::xml::dataModel::XMLDataExporter::reservePrefix(char const *, char const *)
          public: void sophis::xml::dataModel::XMLDataExporter::setFeature(class sophis::xml::dataModel::ExportFeature const &)
          public: void sophis::xml::dataModel::XMLDataExporter::withFormatPrettyPrint(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::withFormatPrettyPrint(void) const
          public: void sophis::xml::dataModel::XMLDataExporter::withGrammar(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::withGrammar(void) const
          public: void sophis::xml::dataModel::XMLDataExporter::withXmlDeclaration(bool)
          public: bool sophis::xml::dataModel::XMLDataExporter::withXmlDeclaration(void) const
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::XMLDataExporter::~XMLDataExporter(void)
          public: virtual void sophis::xml::dataModel::XMLDataExporter::_add_ref(void)
          public: virtual void sophis::xml::dataModel::XMLDataExporter::_remove_ref(void)
          public: virtual void sophis::xml::dataModel::XMLDataExporter::documentName(char const *)
          public: virtual char const * sophis::xml::dataModel::XMLDataExporter::documentName(void) const
          public: virtual void sophis::xml::dataModel::XMLDataExporter::exportFrom(class sophis::tools::dataModel::DataSet &, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: virtual void sophis::xml::dataModel::XMLDataExporter::exportFrom(class sophis::tools::dataModel::DataSet const &)
          public: virtual long sophis::xml::dataModel::XMLDataExporter::getRef(void) const
#endif

          // VFTable. Offset=0, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void sophis::xml::dataModel::XMLDataExporter::exportFrom(class sophis::tools::dataModel::DataSet const &); // 0
          public: virtual char const * sophis::xml::dataModel::XMLDataExporter::documentName(void) const; // 1
          public: virtual void sophis::xml::dataModel::XMLDataExporter::documentName(char const *); // 2
          public: virtual void sophis::xml::dataModel::XMLDataExporter::exportFrom(class sophis::tools::dataModel::DataSet &, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>); // 3
          // VFTable with 0 offset end

          // VFTable. Offset=48, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::dataModel::XMLDataExporter::~XMLDataExporter(void); // 0
          public: virtual void unknown_vf_48_1(void); // 1
          public: virtual void unknown_vf_48_2(void); // 2
          public: virtual void unknown_vf_48_3(void); // 3
#endif
          // VFTable with 48 offset end

        public:
        };

        class/*or struct*/ XMLDataExporterImpl
        {
        public:
          // Nested containers:
          class/*or struct*/ ContainerStack
          {
            // VFTable. Offset=48, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_48_0(void); // 0
            public: virtual void unknown_vf_48_1(void); // 1
            public: virtual void unknown_vf_48_2(void); // 2
            public: virtual void unknown_vf_48_3(void); // 3
#endif
            // VFTable with 48 offset end

          public:
          };

          class/*or struct*/ HRefTraversal
          {
            // VFTable. Offset=0, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            // VFTable with 0 offset end

            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class/*or struct*/ IdRefToPositionListMap
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class/*or struct*/ NamespacePrefixMap
          {
            // VFTable. Offset=56, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_56_0(void); // 0
            public: virtual void unknown_vf_56_1(void); // 1
            public: virtual void unknown_vf_56_2(void); // 2
            public: virtual void unknown_vf_56_3(void); // 3
#endif
            // VFTable with 56 offset end

          public:
          };

          class/*or struct*/ NamespaceQualifiedMap
          {
            // VFTable. Offset=32, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_32_0(void); // 0
            public: virtual void unknown_vf_32_1(void); // 1
            public: virtual void unknown_vf_32_2(void); // 2
            public: virtual void unknown_vf_32_3(void); // 3
#endif
            // VFTable with 32 offset end

          public:
          };

          class/*or struct*/ NamespaceSet
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          struct Position
          {
          public:
          };

          class PositionList
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class PositionListPair
          {
            // VFTable. Offset=120, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_120_0(void); // 0
            public: virtual void unknown_vf_120_1(void); // 1
            public: virtual void unknown_vf_120_2(void); // 2
            public: virtual void unknown_vf_120_3(void); // 3
#endif
            // VFTable with 120 offset end

          public:
          };

          class/*or struct*/ ReplacePositionList
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class/*or struct*/ WStringPairList
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class/*or struct*/ WStringToBoolMap
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class/*or struct*/ WStringToWStringMap
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };


          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          // VFTable with 0 offset end

          // VFTable. Offset=136, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_136_0(void); // 0
          public: virtual void unknown_vf_136_1(void); // 1
          public: virtual void unknown_vf_136_2(void); // 2
          public: virtual void unknown_vf_136_3(void); // 3
#endif
          // VFTable with 136 offset end

        public:
        };

        class XMLDataImporter
        {
          // Functions:
          public: sophis::xml::dataModel::XMLDataImporter::XMLDataImporter(char const *, unsigned __int64)
          public: sophis::xml::dataModel::XMLDataImporter::XMLDataImporter(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, unsigned __int64)
          public: sophis::xml::dataModel::XMLDataImporter::XMLDataImporter(class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>)
          public: sophis::xml::dataModel::XMLDataImporter::XMLDataImporter(void)
          public: void sophis::xml::dataModel::XMLDataImporter::`vbase dtor'(void)
          public: void sophis::xml::dataModel::XMLDataImporter::convertEnums(bool)
          public: class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper> sophis::xml::dataModel::XMLDataImporter::getDOMDocument(void)
          public: class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper> sophis::xml::dataModel::XMLDataImporter::getDOMDocument(bool)
          public: void sophis::xml::dataModel::XMLDataImporter::getFeature(class sophis::xml::dataModel::ImportFeature &) const
          public: void sophis::xml::dataModel::XMLDataImporter::keepXmlStartingAttributes(bool)
          public: bool sophis::xml::dataModel::XMLDataImporter::keepXmlStartingAttributes(void) const
          public: void sophis::xml::dataModel::XMLDataImporter::keepXsiTypeAttributes(bool)
          public: bool sophis::xml::dataModel::XMLDataImporter::keepXsiTypeAttributes(void) const
          public: void sophis::xml::dataModel::XMLDataImporter::renameXsiType(bool)
          public: bool sophis::xml::dataModel::XMLDataImporter::renameXsiType(void) const
          public: void sophis::xml::dataModel::XMLDataImporter::setFeature(class sophis::xml::dataModel::ImportFeature const &)
          // Static functions:
          public: static bool sophis::xml::dataModel::XMLDataImporter::parseXML(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
          // Variables:
          private: static char const *sophis::xml::dataModel::XMLDataImporter::__CLASS__
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::XMLDataImporter::~XMLDataImporter(void)
          public: virtual void sophis::xml::dataModel::XMLDataImporter::_add_ref(void)
          public: virtual void sophis::xml::dataModel::XMLDataImporter::_remove_ref(void)
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::convertEnums(void) const
          public: virtual long sophis::xml::dataModel::XMLDataImporter::getRef(void) const
          public: virtual void sophis::xml::dataModel::XMLDataImporter::ignoreRootElement(bool)
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::ignoreRootElement(void) const
          public: virtual void sophis::xml::dataModel::XMLDataImporter::importTo(class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::XMLDataImporter::importTo(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::XMLDataImporter::withGrammar(bool)
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::withGrammar(void) const
#endif

          // VFTable. Offset=0, Size=7, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void sophis::xml::dataModel::XMLDataImporter::importTo(class sophis::tools::dataModel::DataSet &); // 0
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::ignoreRootElement(void) const; // 1
          public: virtual void sophis::xml::dataModel::XMLDataImporter::ignoreRootElement(bool); // 2
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::withGrammar(void) const; // 3
          public: virtual void sophis::xml::dataModel::XMLDataImporter::withGrammar(bool); // 4
          public: virtual bool sophis::xml::dataModel::XMLDataImporter::convertEnums(void) const; // 5
          public: virtual void sophis::xml::dataModel::XMLDataImporter::importTo(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophis::tools::dataModel::DataSet &); // 6
          // VFTable with 0 offset end

          // VFTable. Offset=48, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::dataModel::XMLDataImporter::~XMLDataImporter(void); // 0
          public: virtual void unknown_vf_48_1(void); // 1
          public: virtual void unknown_vf_48_2(void); // 2
          public: virtual void unknown_vf_48_3(void); // 3
#endif
          // VFTable with 48 offset end

        public:
        };

        class/*or struct*/ XMLDataImporterImpl
        {
        public:
          // Nested containers:
          struct NodeInfo
          {
          public:
          };

          class/*or struct*/ NodeMap
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXML.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_40_0(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };


          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          // VFTable with 0 offset end

          // VFTable. Offset=136, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual void unknown_vf_136_0(void); // 0
          public: virtual void unknown_vf_136_1(void); // 1
          public: virtual void unknown_vf_136_2(void); // 2
          public: virtual void unknown_vf_136_3(void); // 3
#endif
          // VFTable with 136 offset end

        public:
        };

        class XMLDocument : public RefCount
        {
          // Functions:
          public: sophis::xml::dataModel::XMLDocument::XMLDocument(class sophis::xml::dataModel::XMLDocument &&)
          public: sophis::xml::dataModel::XMLDocument::XMLDocument(class sophis::xml::dataModel::XMLDocument const &)
          public: sophis::xml::dataModel::XMLDocument::XMLDocument(void)
          public: class sophis::xml::dataModel::XMLDocument & sophis::xml::dataModel::XMLDocument::operator=(class sophis::xml::dataModel::XMLDocument &&)
          public: class sophis::xml::dataModel::XMLDocument & sophis::xml::dataModel::XMLDocument::operator=(class sophis::xml::dataModel::XMLDocument const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::XMLDocument::~XMLDocument(void)
#endif

          // VFTable. Offset=0, Size=8, Start=0
          // Corresponding base: base::base::RefCount
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::dataModel::XMLDocument::~XMLDocument(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          public: virtual void unknown_vf_0_5(void) = 0; // 5
          public: virtual void unknown_vf_0_6(void) = 0; // 6
          public: virtual void unknown_vf_0_7(void) = 0; // 7
          // VFTable with 0 offset end

        public:
        };

        class XMLGrammar
        {
          // Functions:
          public: sophis::xml::dataModel::XMLGrammar::XMLGrammar(void)
          public: sophis::xml::dataModel::XMLGrammar::XMLGrammar(bool)
          public: void sophis::xml::dataModel::XMLGrammar::`vbase dtor'(void)
          protected: class sophis::tools::dataModel::Data * sophis::xml::dataModel::XMLGrammar::AddComplexType(char const *, bool &)
          protected: class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::XMLGrammar::AddDerivation(class sophis::tools::dataModel::DataSet &, char const *, char const *, bool)
          protected: class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::XMLGrammar::AddDerivation(char const *, char const *, char const *, bool)
          protected: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::xml::dataModel::XMLGrammar::AddForInTheName(char const *)
          protected: void sophis::xml::dataModel::XMLGrammar::AddRestriction(char const *, char const *, char const *)
          protected: void sophis::xml::dataModel::XMLGrammar::AddRestriction(char const *, char const *)
          protected: class sophis::tools::dataModel::Data * sophis::xml::dataModel::XMLGrammar::AddSimpleType(char const *)
          protected: bool sophis::xml::dataModel::XMLGrammar::AddSubstitutionGroup(class sophis::tools::dataModel::Documentation const *, char const *)
          protected: class sophis::tools::dataModel::DataSequence * sophis::xml::dataModel::XMLGrammar::AddType(class sophis::tools::dataModel::Data *, char const *, class sophis::tools::dataModel::Documentation const *)
          protected: class sophis::tools::dataModel::DataSequence & sophis::xml::dataModel::XMLGrammar::CreateDecorator(class sophis::tools::dataModel::DataSequence &, char const *, class sophis::xml::dataModel::DataSequenceDataDecorator *, class sophis::tools::dataModel::Attribute *, class sophis::tools::dataModel::Documentation const *, class sophis::xml::dataModel::DataSetOnlyDecorator *)
          protected: class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::XMLGrammar::CreateDecorator(bool, class sophis::tools::dataModel::DataSet *, char const *, class sophis::xml::dataModel::DataSetDataDecorator *, class sophis::tools::dataModel::DataSet **, class sophis::tools::dataModel::Documentation const *, bool, class sophis::xml::dataModel::DataSetOnlyDecorator *)
          public: class sophis::tools::dataModel::DataSet const & sophis::xml::dataModel::XMLGrammar::GetGrammar(void) const
          protected: bool sophis::xml::dataModel::XMLGrammar::HasComplexType(char const *)
          public: void sophis::xml::dataModel::XMLGrammar::MergeGrammar(char const *, char const *)
          protected: void sophis::xml::dataModel::XMLGrammar::UpdateNameRoot(void)
          public: void sophis::xml::dataModel::XMLGrammar::exportGrammar(class sophis::xml::dataModel::XMLDataExporter &)
          public: void sophis::xml::dataModel::XMLGrammar::exportGrammar(class sophis::xml::dataModel::XMLDataExporter &, char const *)
          protected: char const * sophis::xml::dataModel::XMLGrammar::importExternalNamespace(char const *)
          protected: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::xml::dataModel::XMLGrammar::prefixForNamespace(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool *)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::XMLGrammar::~XMLGrammar(void)
          public: virtual class sophis::tools::dataModel::Data & sophis::xml::dataModel::XMLGrammar::getData(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
          public: virtual class sophis::tools::dataModel::Data const & sophis::xml::dataModel::XMLGrammar::getData(char const *, enum sophis::tools::dataModel::ValueKind) const
          public: virtual class sophis::tools::dataModel::Data & sophis::xml::dataModel::XMLGrammar::getDataFront(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *)
          public: virtual class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::XMLGrammar::getDataSet(char const *, class sophis::tools::dataModel::Documentation const *)
          public: virtual class sophis::tools::dataModel::Data const & sophis::xml::dataModel::XMLGrammar::lookup(char const *, bool) const
          public: virtual void sophis::xml::dataModel::XMLGrammar::ns(char const *)
#endif

          // VFTable. Offset=0, Size=23, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::dataModel::XMLGrammar::~XMLGrammar(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void sophis::xml::dataModel::XMLGrammar::ns(char const *); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          public: virtual void unknown_vf_0_10(void); // 10
          public: virtual void unknown_vf_0_11(void); // 11
          public: virtual void unknown_vf_0_12(void); // 12
          public: virtual class sophis::tools::dataModel::Data const & sophis::xml::dataModel::XMLGrammar::lookup(char const *, bool) const; // 13
          public: virtual void unknown_vf_0_14(void); // 14
          public: virtual class sophis::tools::dataModel::Data const & sophis::xml::dataModel::XMLGrammar::getData(char const *, enum sophis::tools::dataModel::ValueKind) const; // 15
          public: virtual class sophis::tools::dataModel::Data & sophis::xml::dataModel::XMLGrammar::getData(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *); // 16
          public: virtual class sophis::tools::dataModel::Data & sophis::xml::dataModel::XMLGrammar::getDataFront(char const *, enum sophis::tools::dataModel::ValueKind, class sophis::tools::dataModel::Documentation const *); // 17
          public: virtual void unknown_vf_0_18(void); // 18
          public: virtual void unknown_vf_0_19(void); // 19
          public: virtual void unknown_vf_0_20(void); // 20
          public: virtual void unknown_vf_0_21(void); // 21
          public: virtual class sophis::tools::dataModel::DataSet & sophis::xml::dataModel::XMLGrammar::getDataSet(char const *, class sophis::tools::dataModel::Documentation const *); // 22
          // VFTable with 0 offset end

          // VFTable. Offset=168, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::dataModel::XMLGrammar::~XMLGrammar(void); // 0
          public: virtual void unknown_vf_168_1(void); // 1
          public: virtual void unknown_vf_168_2(void); // 2
          public: virtual void unknown_vf_168_3(void); // 3
#endif
          // VFTable with 168 offset end

        public:
        };

        class/*or struct*/ XSLTransformer
        {
          // Functions:
          protected: sophis::xml::dataModel::XSLTransformer::XSLTransformer(char const *, class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>, bool, bool, char const *)
          public: void sophis::xml::dataModel::XSLTransformer::`vbase dtor'(void)
          public: void sophis::xml::dataModel::XSLTransformer::transform(class sophis::tools::dataModel::DataSet &, class sophisTools::base::RefCountHandle<class sophisTools::io::FilterInputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::FilterOutputStream>)
          public: void sophis::xml::dataModel::XSLTransformer::transform(class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper>, class sophis::tools::dataModel::DataSet &, class sophisTools::base::RefCountHandle<class sophisTools::io::FilterInputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::FilterOutputStream>)
          public: void sophis::xml::dataModel::XSLTransformer::transform(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::Transformer> sophis::xml::dataModel::XSLTransformer::create(char const *, char const *, unsigned __int64, bool, bool, char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::Transformer> sophis::xml::dataModel::XSLTransformer::create(char const *, char const *, unsigned __int64, bool, bool)
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::Transformer> sophis::xml::dataModel::XSLTransformer::create(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, bool, bool, char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::Transformer> sophis::xml::dataModel::XSLTransformer::create(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, bool, bool)
          // Variables:
          private: static char const *sophis::xml::dataModel::XSLTransformer::__CLASS__
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::dataModel::XSLTransformer::~XSLTransformer(void)
          public: virtual void sophis::xml::dataModel::XSLTransformer::dispose(void)
          public: virtual void sophis::xml::dataModel::XSLTransformer::init(void)
          public: virtual char const * sophis::xml::dataModel::XSLTransformer::name(void)
          public: virtual void sophis::xml::dataModel::XSLTransformer::postprocess(class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::XSLTransformer::preprocess(class sophis::tools::dataModel::DataSet &)
          public: virtual void sophis::xml::dataModel::XSLTransformer::transform(class sophis::tools::dataModel::DataSet &)
#endif

          // VFTable. Offset=0, Size=8, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual char const * sophis::xml::dataModel::XSLTransformer::name(void); // 0
          public: virtual void sophis::xml::dataModel::XSLTransformer::init(void); // 1
          public: virtual void sophis::xml::dataModel::XSLTransformer::preprocess(class sophis::tools::dataModel::DataSet &); // 2
          public: virtual void sophis::xml::dataModel::XSLTransformer::transform(class sophis::tools::dataModel::DataSet &); // 3
          public: virtual void sophis::xml::dataModel::XSLTransformer::postprocess(class sophis::tools::dataModel::DataSet &); // 4
          public: virtual void sophis::xml::dataModel::XSLTransformer::dispose(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          // VFTable with 0 offset end

          // VFTable. Offset=144, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::dataModel::XSLTransformer::~XSLTransformer(void); // 0
          public: virtual void unknown_vf_144_1(void); // 1
          public: virtual void unknown_vf_144_2(void); // 2
          public: virtual void unknown_vf_144_3(void); // 3
#endif
          // VFTable with 144 offset end

        public:
        };


      };

      namespace/*or class/struct?*/ io
      {
        // Nested containers:
        class/*or struct*/ BinInputStreamAdapter : public BinInputStream
        {
          // Functions:
          public: sophis::xml::io::BinInputStreamAdapter::BinInputStreamAdapter(class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::io::BinInputStreamAdapter::~BinInputStreamAdapter(void)
          public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::curPos(void) const
          public: virtual char16_t const * sophis::xml::io::BinInputStreamAdapter::getContentType(void) const
          public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::readBytes(unsigned char *const, unsigned __int64)
#endif

          // VFTable. Offset=0, Size=5, Start=5
          // Corresponding base: xercesc_3_2::BinInputStream
          // Owner: SophisXML.dll
          // public: virtual sophis::xml::io::BinInputStreamAdapter::~BinInputStreamAdapter(void); // 0
          // Overrides:
          public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::curPos(void) const override; // 1
          public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::readBytes(unsigned char *const, unsigned __int64) override; // 2
          public: virtual char16_t const * sophis::xml::io::BinInputStreamAdapter::getContentType(void) const override; // 3
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ BinOutputStreamAdapter : public BinOutputStream
        {
          // Functions:
          public: sophis::xml::io::BinOutputStreamAdapter::BinOutputStreamAdapter(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::io::BinOutputStreamAdapter::~BinOutputStreamAdapter(void)
          public: virtual unsigned __int64 sophis::xml::io::BinOutputStreamAdapter::curPos(void) const
          public: virtual void sophis::xml::io::BinOutputStreamAdapter::writeBytes(unsigned char const *const, unsigned __int64)
#endif

          // VFTable. Offset=0, Size=3, Start=0
          // Corresponding base: xercesc_3_2::BinOutputStream
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::io::BinOutputStreamAdapter::~BinOutputStreamAdapter(void); // 0
          public: virtual unsigned __int64 sophis::xml::io::BinOutputStreamAdapter::curPos(void) const; // 1
          public: virtual void sophis::xml::io::BinOutputStreamAdapter::writeBytes(unsigned char const *const, unsigned __int64); // 2
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ XMLFormatTargetAdapter : public XMLFormatTarget
        {
          // VFTable. Offset=0, Size=3, Start=0
          // Corresponding base: xercesc_3_2::XMLFormatTarget
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ XMLInputStreamAdapter : public InputSource
        {
          // Functions:
          public: sophis::xml::io::XMLInputStreamAdapter::XMLInputStreamAdapter(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class xercesc_3_2::MemoryManager *const)
          public: sophis::xml::io::XMLInputStreamAdapter::XMLInputStreamAdapter(class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>, class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::io::XMLInputStreamAdapter::~XMLInputStreamAdapter(void)
          public: virtual char16_t const * sophis::xml::io::XMLInputStreamAdapter::getSystemId(void) const
          public: virtual class xercesc_3_2::BinInputStream * sophis::xml::io::XMLInputStreamAdapter::makeStream(void) const
#endif

          // VFTable. Offset=0, Size=10, Start=10
          // Corresponding base: xercesc_3_2::InputSource
          // Owner: SophisXML.dll
          // public: virtual sophis::xml::io::XMLInputStreamAdapter::~XMLInputStreamAdapter(void); // 0
          // Overrides:
          public: virtual class xercesc_3_2::BinInputStream * sophis::xml::io::XMLInputStreamAdapter::makeStream(void) const override; // 1
          public: virtual char16_t const * sophis::xml::io::XMLInputStreamAdapter::getSystemId(void) const override; // 4
          // VFTable with 0 offset end

        public:
        };


      };

      class/*or struct*/ util
      {
      public:
        // Enumerations:
        enum EscapeMode : int {
        };

        // Nested containers:
        class/*or struct*/ BuilderImpl : public DOMLSParserImpl
        {
          // VFTable. Offset=0, Size=20, Start=13
          // Corresponding base: xercesc_3_2::DOMLSParserImpl
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_13(void); // 13
          public: virtual void unknown_vf_0_14(void); // 14
          public: virtual void unknown_vf_0_15(void); // 15
          public: virtual void unknown_vf_0_16(void); // 16
          public: virtual void unknown_vf_0_17(void); // 17
          public: virtual void unknown_vf_0_18(void); // 18
          public: virtual void unknown_vf_0_19(void); // 19
          // VFTable with 0 offset end

          // VFTable. Offset=8, Size=3, Start=3
          // Corresponding base: xercesc_3_2::XMLErrorReporter
          // Owner: SophisXML.dll
          // VFTable with 8 offset end

          // VFTable. Offset=16, Size=6, Start=6
          // Corresponding base: xercesc_3_2::XMLEntityHandler
          // Owner: SophisXML.dll
          // VFTable with 16 offset end

          // VFTable. Offset=24, Size=17, Start=17
          // Corresponding base: xercesc_3_2::DocTypeHandler
          // Owner: SophisXML.dll
          // VFTable with 24 offset end

          // VFTable. Offset=32, Size=4, Start=4
          // Corresponding base: xercesc_3_2::PSVIHandler
          // Owner: SophisXML.dll
          // VFTable with 32 offset end

          // VFTable. Offset=192, Size=21, Start=21
          // Corresponding base: xercesc_3_2::DOMLSParser
          // Owner: SophisXML.dll
          // VFTable with 192 offset end

          // VFTable. Offset=200, Size=7, Start=7
          // Corresponding base: xercesc_3_2::DOMConfiguration
          // Owner: SophisXML.dll
          // VFTable with 200 offset end

        public:
        };

        class DOMDocumentWrapper
        {
          // Functions:
          public: sophis::xml::util::DOMDocumentWrapper::DOMDocumentWrapper(class sophis::xml::util::DOMDocumentWrapper &)
          public: sophis::xml::util::DOMDocumentWrapper::DOMDocumentWrapper(class XERCES_CPP_NAMESPACE::DOMDocument *)
          public: sophis::xml::util::DOMDocumentWrapper::DOMDocumentWrapper(class xercesc_3_2::DOMDocument *)
          public: sophis::xml::util::DOMDocumentWrapper::DOMDocumentWrapper(void)
          public: void sophis::xml::util::DOMDocumentWrapper::`vbase dtor'(void)
          public: class XERCES_CPP_NAMESPACE::DOMDocument * sophis::xml::util::DOMDocumentWrapper::document(void)
          public: class xercesc_3_2::DOMDocument * sophis::xml::util::DOMDocumentWrapper::document(void)
          public: void sophis::xml::util::DOMDocumentWrapper::document(class XERCES_CPP_NAMESPACE::DOMDocument *)
          public: void sophis::xml::util::DOMDocumentWrapper::document(class xercesc_3_2::DOMDocument *)
          public: class XERCES_CPP_NAMESPACE::DOMDocument const * sophis::xml::util::DOMDocumentWrapper::document(void) const
          public: class xercesc_3_2::DOMDocument const * sophis::xml::util::DOMDocumentWrapper::document(void) const
          public: class XERCES_CPP_NAMESPACE::DOMDocument * sophis::xml::util::DOMDocumentWrapper::orphan(void)
          public: class xercesc_3_2::DOMDocument * sophis::xml::util::DOMDocumentWrapper::orphan(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::util::DOMDocumentWrapper::~DOMDocumentWrapper(void)
#endif

          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisXML.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::xml::util::DOMDocumentWrapper::~DOMDocumentWrapper(void); // 0
          public: virtual void unknown_vf_32_1(void); // 1
          public: virtual void unknown_vf_32_2(void); // 2
          public: virtual void unknown_vf_32_3(void); // 3
#endif
          // VFTable with 32 offset end

        public:
        };

        class/*or struct*/ ImplementationImpl : public XMemory, public DOMImplementation, public DOMImplementationSource
        {
          // VFTable. Offset=0, Size=11, Start=0
          // Corresponding base: xercesc_3_2::DOMImplementation
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void); // 4
          public: virtual void unknown_vf_0_5(void); // 5
          public: virtual void unknown_vf_0_6(void); // 6
          public: virtual void unknown_vf_0_7(void); // 7
          public: virtual void unknown_vf_0_8(void); // 8
          public: virtual void unknown_vf_0_9(void); // 9
          public: virtual void unknown_vf_0_10(void); // 10
          // VFTable with 0 offset end

          // VFTable. Offset=8, Size=3, Start=3
          // Corresponding base: xercesc_3_2::DOMImplementationSource
          // Owner: SophisXML.dll
          // VFTable with 8 offset end

        public:
        };

        class/*or struct*/ ParsingErrorHandler : public DOMErrorHandler
        {
          // Functions:
          public: sophis::xml::util::ParsingErrorHandler::ParsingErrorHandler(void)
          public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::xml::util::ParsingErrorHandler::getDomError(void) const
          public: bool sophis::xml::util::ParsingErrorHandler::hasDomError(void) const
          // Variables:
          private: static char const *sophis::xml::util::ParsingErrorHandler::__CLASS__
#if 0 // All found virtual functions names:
          public: virtual sophis::xml::util::ParsingErrorHandler::~ParsingErrorHandler(void)
          public: virtual bool sophis::xml::util::ParsingErrorHandler::handleError(class xercesc_3_2::DOMError const &)
#endif

          // VFTable. Offset=0, Size=2, Start=0
          // Corresponding base: xercesc_3_2::DOMErrorHandler
          // Owner: SophisXML.dll
          // Added virtual functions:
          public: virtual sophis::xml::util::ParsingErrorHandler::~ParsingErrorHandler(void); // 0
          public: virtual bool sophis::xml::util::ParsingErrorHandler::handleError(class xercesc_3_2::DOMError const &); // 1
          // VFTable with 0 offset end

        public:
        };

        class XMLUtil
        {
          // Functions:
          public: class sophis::xml::util::XMLUtil & sophis::xml::util::XMLUtil::operator=(class sophis::xml::util::XMLUtil &&)
          public: class sophis::xml::util::XMLUtil & sophis::xml::util::XMLUtil::operator=(class sophis::xml::util::XMLUtil const &)
          // Static functions:
          public: static void sophis::xml::util::XMLUtil::checkInit(void)
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::ByteArray> sophis::xml::util::XMLUtil::decode64(char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::ByteArray> sophis::xml::util::XMLUtil::decode64(char16_t const *)
          public: static void sophis::xml::util::XMLUtil::decode64(char const *, class sophis::tools::util::ByteArray &)
          public: static void sophis::xml::util::XMLUtil::decode64(char16_t const *, class sophis::tools::util::ByteArray &)
          public: static void sophis::xml::util::XMLUtil::dispose(void)
          public: static char16_t * sophis::xml::util::XMLUtil::encode64(class sophis::tools::util::ByteArray const &)
          public: static void sophis::xml::util::XMLUtil::encode64(class sophis::tools::util::ByteArray const &, char *&, unsigned __int64 &)
          public: static void sophis::xml::util::XMLUtil::init(void)
          public: static bool sophis::xml::util::XMLUtil::isInitialized(void)
          protected: static bool sophis::xml::util::XMLUtil::isValidNCName(char16_t, bool)
          public: static bool sophis::xml::util::XMLUtil::isValidNCName(char const *const)
          public: static bool sophis::xml::util::XMLUtil::isValidNCName(char16_t const *const, unsigned __int64)
          protected: static bool sophis::xml::util::XMLUtil::isValidName(char16_t, bool)
          public: static bool sophis::xml::util::XMLUtil::isValidName(char const *const)
          public: static bool sophis::xml::util::XMLUtil::isValidName(char16_t const *const, unsigned __int64)
          public: static bool sophis::xml::util::XMLUtil::isValidQName(char const *const)
          public: static bool sophis::xml::util::XMLUtil::isValidQName(char16_t const *const, unsigned __int64)
          public: static void sophis::xml::util::XMLUtil::joinGrammarLoading(void)
          public: static void sophis::xml::util::XMLUtil::loadGrammars(class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::GrammarPool>)
          public: static void sophis::xml::util::XMLUtil::loadGrammars(class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::GrammarPool>, class std::list<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &)
          public: static void sophis::xml::util::XMLUtil::loadGrammars(void)
          public: static void sophis::xml::util::XMLUtil::toValidNCName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, char)
          protected: static void sophis::xml::util::XMLUtil::toValidName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, char, bool (__cdecl *)(char16_t, bool))
          public: static void sophis::xml::util::XMLUtil::toValidName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, char)
          // Variables:
          public: static char const *const sophis::xml::util::XMLUtil::ATTVAL_ANYTYPE
          public: static char16_t const *const sophis::xml::util::XMLUtil::HTTP
          public: static char16_t const *const sophis::xml::util::XMLUtil::QMQM
          public: static char const *const sophis::xml::util::XMLUtil::URI_SCHEMAFORSCHEMA
          private: static char const *sophis::xml::util::XMLUtil::__CLASS__
          private: static unsigned __int64 sophis::xml::util::XMLUtil::fInitialized
          public: static bool sophis::xml::util::XMLUtil::forceExportXsiType
          public: static bool sophis::xml::util::XMLUtil::ignoreAnonymousTypesDuringExport
          public: static bool sophis::xml::util::XMLUtil::trimXMLValues
        public:
        };

        class XSLTransformUtil
        {
          // Functions:
          public: class sophis::xml::util::XSLTransformUtil & sophis::xml::util::XSLTransformUtil::operator=(class sophis::xml::util::XSLTransformUtil &&)
          public: class sophis::xml::util::XSLTransformUtil & sophis::xml::util::XSLTransformUtil::operator=(class sophis::xml::util::XSLTransformUtil const &)
          // Static functions:
          public: static void sophis::xml::util::XSLTransformUtil::dispose(void)
          public: static void sophis::xml::util::XSLTransformUtil::doDispose(void)
          public: static void sophis::xml::util::XSLTransformUtil::doInit(void)
          public: static void sophis::xml::util::XSLTransformUtil::init(void)
          public: static bool sophis::xml::util::XSLTransformUtil::isInitialized(void)
          public: static void sophis::xml::util::XSLTransformUtil::transform(class sophis::xml::dataModel::XMLDataExporter &, class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: static void sophis::xml::util::XSLTransformUtil::transform(class sophis::xml::dataModel::XMLDataImporter &, class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: static void sophis::xml::util::XSLTransformUtil::transform(char const *, class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: static void sophis::xml::util::XSLTransformUtil::transform(class sophisTools::base::RefCountHandle<class sophis::xml::util::DOMDocumentWrapper>, class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: static void sophis::xml::util::XSLTransformUtil::transform(class sophisTools::base::RefCountHandle<class sophisTools::io::File>, class sophisTools::base::RefCountHandle<class sophisTools::io::File>, class sophisTools::base::RefCountHandle<class sophisTools::io::File>)
          public: static void sophis::xml::util::XSLTransformUtil::transform(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          // Variables:
          private: static char const *sophis::xml::util::XSLTransformUtil::__CLASS__
          private: static bool sophis::xml::util::XSLTransformUtil::fInitialized
        public:
        };

        class XString
        {
        public:
        };

        class XStringX
        {
        public:
        };

        class XWString
        {
        public:
        };


        // Functions:
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::xml::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::xml::util::XString const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::xml::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::xml::util::XStringX const &)
        class std::basic_ostream<char, struct std::char_traits<char>> & sophis::xml::util::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class sophis::xml::util::XWString const &)
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::xml::util::EscapeXmlString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, enum sophis::xml::util::EscapeMode)
      public:
      };


    };


  };

  class/*or struct*/ sophisTools
  {
  public:
    // Nested containers:
    class CSRDay
    {
      // Functions:
      public: CSRDay(int, int, int)
    public:
    };

    class FlyWeightString
    {
      // Functions:
      public: FlyWeightString(class sophisTools::FlyWeightString const &)
      public: FlyWeightString(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
      public: FlyWeightString(void)
      public: ~FlyWeightString(void)
      public: class sophisTools::FlyWeightString & operator=(class sophisTools::FlyWeightString const &)
      public: class sophisTools::FlyWeightString & operator=(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
      public: bool operator==(class sophisTools::FlyWeightString const &) const
      public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & operator class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &(void) const
      public: bool operator<(class sophisTools::FlyWeightString const &) const
      public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & get(void) const
    public:
    };

    namespace/*or class/struct?*/ base
    {
      // Nested containers:
      class ClassCastException
      {
        // Functions:
        public: sophisTools::base::ClassCastException::ClassCastException(class sophisTools::base::ClassCastException const &)
        public: sophisTools::base::ClassCastException::ClassCastException(char const *, char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::ClassCastException::~ClassCastException(void)
#endif

      public:
      };

      class ExceptionBase
      {
        // Functions:
        protected: sophisTools::base::ExceptionBase::ExceptionBase(char const *, char const *, long, bool, bool)
        public: sophisTools::base::ExceptionBase::ExceptionBase(class sophisTools::base::ExceptionBase const &)
        public: char const * sophisTools::base::ExceptionBase::operator char const *(void) const
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::ExceptionBase::getError(void) const
        public: char const * sophisTools::base::ExceptionBase::getName(void) const
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::ExceptionBase::~ExceptionBase(void)
#endif

      public:
      };

      class GeneralException
      {
        // Functions:
        public: sophisTools::base::GeneralException::GeneralException(class sophisTools::base::GeneralException const &)
        public: sophisTools::base::GeneralException::GeneralException(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::GeneralException::~GeneralException(void)
#endif

      public:
      };

      class InvalidArgument
      {
        // Functions:
        public: sophisTools::base::InvalidArgument::InvalidArgument(class sophisTools::base::InvalidArgument const &)
      public:
      };

      class InvalidInvocationOrder
      {
        // Functions:
        public: sophisTools::base::InvalidInvocationOrder::InvalidInvocationOrder(class sophisTools::base::InvalidInvocationOrder const &)
        public: sophisTools::base::InvalidInvocationOrder::InvalidInvocationOrder(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::InvalidInvocationOrder::~InvalidInvocationOrder(void)
#endif

      public:
      };

      class NamedInvalidArgument
      {
        // Functions:
        public: sophisTools::base::NamedInvalidArgument::NamedInvalidArgument(class sophisTools::base::NamedInvalidArgument const &)
        public: sophisTools::base::NamedInvalidArgument::NamedInvalidArgument(char const *, char const *, char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::NamedInvalidArgument::~NamedInvalidArgument(void)
#endif

      public:
      };

      class NotImplemented
      {
        // Functions:
        public: sophisTools::base::NotImplemented::NotImplemented(class sophisTools::base::NotImplemented const &)
        public: sophisTools::base::NotImplemented::NotImplemented(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::NotImplemented::~NotImplemented(void)
#endif

      public:
      };

      class NullPointerException
      {
        // Functions:
        public: sophisTools::base::NullPointerException::NullPointerException(class sophisTools::base::NullPointerException const &)
        public: sophisTools::base::NullPointerException::NullPointerException(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::NullPointerException::~NullPointerException(void)
#endif

      public:
      };

      class RefCount
      {
        // Functions:
        public: sophisTools::base::RefCount::RefCount(class sophisTools::base::RefCount const &)
        public: sophisTools::base::RefCount::RefCount(void)
        public: class sophisTools::base::RefCount & sophisTools::base::RefCount::operator=(class sophisTools::base::RefCount const &)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::RefCount::~RefCount(void)
#endif

      public:
      };

      template<typename T1      >
      class RefCountHandle
      {
      public:
      };
#if 0 // Instances:
// <class sophis::tools::dataModel::ParentStack>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::dataModel::ParentStack>
      {
      public:
      };
#endif
// <class sophis::tools::dataModel::Transformer>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::dataModel::Transformer>
      {
      public:
      };
#endif
// <class sophis::tools::util::ByteArray>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::ByteArray>
      {
      public:
      };
#endif
// <class sophis::tools::util::StringBoolMap>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::StringBoolMap>
      {
      public:
      };
#endif
// <class sophis::tools::util::StringPairList>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::StringPairList>
      {
      public:
      };
#endif
// <class sophis::tools::util::Worker>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::Worker>
      {
      public:
      };
#endif
// <class sophis::xml::dataModel::BasicGrammarPoolImpl>
#if 0
      template<>
      class RefCountHandle<class sophis::xml::dataModel::BasicGrammarPoolImpl>
      {
      public:
      };
#endif
// <class sophis::xml::dataModel::DataFactory>
#if 0
      template<>
      class RefCountHandle<class sophis::xml::dataModel::DataFactory>
      {
      public:
      };
#endif
// <class sophis::xml::dataModel::GrammarLoadingGuard>
#if 0
      template<>
      class RefCountHandle<class sophis::xml::dataModel::GrammarLoadingGuard>
      {
      public:
      };
#endif
// <class sophis::xml::dataModel::GrammarPool>
#if 0
      template<>
      class RefCountHandle<class sophis::xml::dataModel::GrammarPool>
      {
      public:
      };
#endif
// <class sophis::xml::util::DOMDocumentWrapper>
#if 0
      template<>
      class RefCountHandle<class sophis::xml::util::DOMDocumentWrapper>
      {
      public:
      };
#endif
// <class sophisTools::io::ByteArrayIOStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ByteArrayIOStream>
      {
        // Functions:
        public: sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayIOStream>::~RefCountHandle<class sophisTools::io::ByteArrayIOStream>(void)
        public: class sophisTools::io::ByteArrayIOStream * sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayIOStream>::in(void) const
      public:
      };
#endif
// <class sophisTools::io::ByteArrayOutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ByteArrayOutputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::ByteArrayRandomAccessIOStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream>
      {
      public:
      };
#endif
// <class sophisTools::io::File>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::File>
      {
      public:
      };
#endif
// <class sophisTools::io::FilterInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::FilterInputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::FilterOutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::FilterOutputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::InputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::InputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::OutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::OutputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::RandomAccessInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::RandomAccessInputStream>
      {
      public:
      };
#endif
#endif


#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::Worker>
      {
      public:
      };
#endif

#if 0
      template<>
      class RefCountHandle<class sophisTools::io::OutputStream>
      {
      public:
      };
#endif

      class RunTimeFailure
      {
        // Functions:
        public: sophisTools::base::RunTimeFailure::RunTimeFailure(class sophisTools::base::RunTimeFailure const &)
        public: sophisTools::base::RunTimeFailure::RunTimeFailure(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::RunTimeFailure::~RunTimeFailure(void)
#endif

      public:
      };

      class/*or struct*/ Runnable : public RefCount
      {
      public:
      };

      class/*or struct*/ StringUtil
      {
        // Static functions:
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::StringUtil::ordinalMark(long)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::StringUtil::pluralMark(long)
        public: static bool sophisTools::base::StringUtil::string2bool(char const *)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::StringUtil::upperCamel(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::StringUtil::upperCamel(char const *)
      public:
      };

      class/*or struct*/ UnsafeRefCount
      {
        // Functions:
        public: sophisTools::base::UnsafeRefCount::UnsafeRefCount(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::UnsafeRefCount::~UnsafeRefCount(void)
        public: virtual void sophisTools::base::UnsafeRefCount::_add_ref(void)
        public: virtual void sophisTools::base::UnsafeRefCount::_remove_ref(void)
        public: virtual long sophisTools::base::UnsafeRefCount::getRef(void) const
#endif

      public:
      };


    };

    namespace/*or class/struct?*/ io
    {
      // Nested containers:
      class ByteArrayIOStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayIOStream> sophisTools::io::ByteArrayIOStream::create(void)
      public:
      };

      class ByteArrayOutputStream
      {
        // Functions:
        public: void sophisTools::io::ByteArrayOutputStream::readFrom(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
        public: void sophisTools::io::ByteArrayOutputStream::wipe(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayOutputStream> sophisTools::io::ByteArrayOutputStream::create(void)
      public:
      };

      class ByteArrayRandomAccessIOStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream> sophisTools::io::ByteArrayRandomAccessIOStream::create(char const *, unsigned __int64, unsigned __int64)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream> sophisTools::io::ByteArrayRandomAccessIOStream::create(void)
      public:
      };

      class File
      {
        // Static functions:
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::io::File::baseName(char const *, bool)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::File::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::File::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::File::findFileInPathEnvironment(char const *, char const *)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::io::File::parentName(char const *)
      public:
      };

      class/*or struct*/ FileInputStream
      {
        // Functions:
        public: class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::FileInputStream::getFile(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream> sophisTools::io::FileInputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::File>)
      public:
      };

      class/*or struct*/ FileOutputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream> sophisTools::io::FileOutputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::File>, bool, bool)
      public:
      };

      class FilterInputStream
      {
        // Functions:
        public: void sophisTools::io::FilterInputStream::setUnderlyingInputStream(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
      public:
      };

      class FilterOutputStream
      {
        // Functions:
        public: void sophisTools::io::FilterOutputStream::setUnderlyingOutputStream(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
      public:
      };

      class InputStream
      {
      public:
      };

      class OutputStream
      {
      public:
      };

      class/*or struct*/ OutputStreamStdAdapter
      {
        // Functions:
        public: sophisTools::io::OutputStreamStdAdapter::OutputStreamStdAdapter(class std::basic_ostream<char, struct std::char_traits<char>> &)
        public: void sophisTools::io::OutputStreamStdAdapter::`vbase dtor'(void)
#if 0 // All found virtual functions names:
        public: virtual void sophisTools::io::OutputStreamStdAdapter::_add_ref(void)
        public: virtual void sophisTools::io::OutputStreamStdAdapter::_remove_ref(void)
        public: virtual long sophisTools::io::OutputStreamStdAdapter::getRef(void) const
#endif

        // VFTable. Offset=48, Size=4, Start=0
        // Owner: SophisXML.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_48_0(void); // 0
        public: virtual void unknown_vf_48_1(void); // 1
        public: virtual void unknown_vf_48_2(void); // 2
        public: virtual void unknown_vf_48_3(void); // 3
#endif
        // VFTable with 48 offset end

      public:
      };

      class/*or struct*/ PipedInputStream
      {
        // Functions:
        public: sophisTools::io::PipedInputStream::PipedInputStream(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
        public: void sophisTools::io::PipedInputStream::`vbase dtor'(void)
#if 0 // All found virtual functions names:
        public: virtual void sophisTools::io::PipedInputStream::_add_ref(void)
        public: virtual void sophisTools::io::PipedInputStream::_remove_ref(void)
        public: virtual long sophisTools::io::PipedInputStream::getRef(void) const
#endif

        // VFTable. Offset=56, Size=4, Start=0
        // Owner: SophisXML.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_56_0(void); // 0
        public: virtual void unknown_vf_56_1(void); // 1
        public: virtual void unknown_vf_56_2(void); // 2
        public: virtual void unknown_vf_56_3(void); // 3
#endif
        // VFTable with 56 offset end

      public:
      };

      class/*or struct*/ RandomAccessFileInputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream> sophisTools::io::RandomAccessFileInputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::File>)
      public:
      };

      class RandomAccessInputStream
      {
      public:
      };

      class/*or struct*/ Serializable
      {
      public:
      };

      class/*or struct*/ StreamUtil
      {
        // Static functions:
        public: static char const * sophisTools::io::StreamUtil::getNewLine(void)
      public:
      };

      class/*or struct*/ TeeOutputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream> sophisTools::io::TeeOutputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
      public:
      };


    };

    namespace/*or class/struct?*/ logger
    {
      // Nested containers:
      class/*or struct*/ LoggerUtil
      {
        // Static functions:
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, char const *, unsigned int)
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, char const *, char const *, char const *, char const *, unsigned int)
        public: static bool sophisTools::logger::LoggerUtil::isLogWorthIt(enum Log::Severity)
      public:
      };

      class/*or struct*/ LoggerUtilLog4cxx
      {
        // Static functions:
        public: static bool sophisTools::logger::LoggerUtilLog4cxx::IsLogWorthIt(enum Log::Severity)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, char const *, char const *, char const *)
      public:
      };

      class PostMortemLogEngine
      {
      public:
        // Enumerations:
        enum ePostMortemState : int {
        };

        // Functions:
        public: enum sophisTools::logger::PostMortemLogEngine::ePostMortemState sophisTools::logger::PostMortemLogEngine::getActivationState(void) const
        public: void sophisTools::logger::PostMortemLogEngine::pushMessage(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, char const *, unsigned __int64)
        public: void sophisTools::logger::PostMortemLogEngine::pushMessage(enum Log::Severity, char const *, char const *, char const *, char const *, unsigned __int64)
        // Static functions:
        public: static class sophisTools::logger::PostMortemLogEngine & sophisTools::logger::PostMortemLogEngine::Instance(void)
        // Variables:
        public: static enum sophisTools::logger::PostMortemLogEngine::ePostMortemState sophisTools::logger::PostMortemLogEngine::bIsPostMortemLogActivated
      public:
      };

      class/*or struct*/ SophisLoggerConfiguration
      {
        // Static functions:
        public: static bool sophisTools::logger::SophisLoggerConfiguration::GetOldLogger(void)
      public:
      };


    };


    // Functions:
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class CSRDay const &)
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class FlyWeightString const &)
    int strnicmp(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned __int64)
  public:
  };

  namespace/*or class/struct?*/ sphSystem
  {
    // Nested containers:
    namespace/*or class/struct?*/ dataModel
    {
      // Nested containers:
      class/*or struct*/ BasicTransformer
      {
        // Functions:
        public: sphSystem::dataModel::BasicTransformer::BasicTransformer(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::dataModel::BasicTransformer::~BasicTransformer(void)
        public: virtual void sphSystem::dataModel::BasicTransformer::getEntryValue(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: virtual bool sphSystem::dataModel::BasicTransformer::hasEntry(char const *)
#endif

      public:
      };


    };

    namespace/*or class/struct?*/ thread
    {
      // Nested containers:
      class/*or struct*/ BasicWorker
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::BasicWorker::create(void)
      public:
      };

      class/*or struct*/ ThreadedWorker
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::ThreadedWorker::create(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>)
      public:
      };


    };


  };

  class/*or struct*/ std
  {
  public:
    // Nested containers:
    class/*or struct*/ _Locinfo
    {
      // Functions:
      public: struct _Cvtvec _Getcvt(void) const
      public: unsigned short const * _W_Getdays(void) const
      public: unsigned short const * _W_Getmonths(void) const
    public:
    };

    class/*or struct*/ _System_error : public runtime_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::runtime_error
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T1, typename T2, typename T3, typename T5    >
    class _Tmap_traits
    {
    public:
    };
#if 0 // Instances:
// <class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
#if 0
    template<>
    class _Tmap_traits<class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>, 0>
#if 0
    template<>
    class _Tmap_traits<class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>, 0>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>, 0>
#if 0
    template<>
    class _Tmap_traits<class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>, 0>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>, 0>
#if 0
    template<>
    class _Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>, 0>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>, 0>
#if 0
    template<>
    class _Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>, 0>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
#if 0
    template<>
    class _Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
    {
    public:
    };
#endif
// <class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>, 0>
#if 0
    template<>
    class _Tmap_traits<class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>, 0>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class/*or struct*/ _Tree
    {
    public:
    };
#if 0 // Instances:
// <class std::_Tmap_traits<class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tset_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tset_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, 0>>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T1, typename T2, typename T4    >
    class _Tset_traits
    {
    public:
    };
#if 0 // Instances:
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, 0>
#if 0
    template<>
    class _Tset_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, 0>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class allocator
    {
    public:
    };
#if 0 // Instances:
// <char>
#if 0
    template<>
    class allocator<char>
    {
    public:
    };
#endif
// <class sophis::tools::dataModel::Data const *>
#if 0
    template<>
    class allocator<class sophis::tools::dataModel::Data const *>
    {
    public:
    };
#endif
// <class sophis::tools::dataModel::DataContainer const *>
#if 0
    template<>
    class allocator<class sophis::tools::dataModel::DataContainer const *>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>>
#if 0
    template<>
    class allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    class allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif
// <struct sophis::xml::dataModel::XMLDataExporterImpl::Position>
#if 0
    template<>
    class allocator<struct sophis::xml::dataModel::XMLDataExporterImpl::Position>
    {
    public:
    };
#endif
// <struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
// <struct std::pair<class sophis::xml::util::XWString const, bool>>
#if 0
    template<>
    class allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>
    {
    public:
    };
#endif
// <struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>
#if 0
    template<>
    class allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>
    {
    public:
    };
#endif
// <struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>>
#if 0
    template<>
    class allocator<struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>>
    {
    public:
    };
#endif
// <struct std::pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>>
#if 0
    template<>
    class allocator<struct std::pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
// <struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>
#if 0
    template<>
    class allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ bad_alloc : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_array_new_length : public bad_alloc
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::bad_alloc
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_cast : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_optional_access : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_variant_access : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_weak_ptr : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T2    >
    class/*or struct*/ basic_ios
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>>
#if 0
    template<>
    class/*or struct*/ basic_ios<char, struct std::char_traits<char>>
    {
      // Functions:
      protected: std::basic_ios<char, struct std::char_traits<char>>::basic_ios<char, struct std::char_traits<char>>(void)
      public: char std::basic_ios<char, struct std::char_traits<char>>::fill(void) const
      public: class std::basic_streambuf<char, struct std::char_traits<char>> * std::basic_ios<char, struct std::char_traits<char>>::rdbuf(void) const
      public: void std::basic_ios<char, struct std::char_traits<char>>::setstate(int, bool)
      public: class std::basic_ostream<char, struct std::char_traits<char>> * std::basic_ios<char, struct std::char_traits<char>>::tie(void) const
#if 0 // All found virtual functions names:
      public: virtual std::basic_ios<char, struct std::char_traits<char>>::~basic_ios<char, struct std::char_traits<char>>(void)
#endif

    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class basic_istream
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>>
#if 0
    template<>
    class basic_istream<char, struct std::char_traits<char>>
    {
      // Functions:
      public: std::basic_istream<char, struct std::char_traits<char>>::basic_istream<char, struct std::char_traits<char>>(class std::basic_streambuf<char, struct std::char_traits<char>> *, bool)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(short &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(unsigned short &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(int &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(long &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(unsigned long &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(float &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(double &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(__int64 &)
      public: class std::basic_istream<char, struct std::char_traits<char>> & std::basic_istream<char, struct std::char_traits<char>>::operator>>(unsigned __int64 &)
      public: bool std::basic_istream<char, struct std::char_traits<char>>::_Ipfx(bool)
#if 0 // All found virtual functions names:
      public: virtual std::basic_istream<char, struct std::char_traits<char>>::~basic_istream<char, struct std::char_traits<char>>(void)
#endif

    public:
    };
#endif
#endif


#if 0
    template<>
    class basic_istream<char, struct std::char_traits<char>>
    {
    public:
    };
#endif

    template<typename T0, typename T1, typename T3    >
    class/*or struct*/ basic_istringstream
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>, class std::allocator<char>>
#if 0
    template<>
    class/*or struct*/ basic_istringstream<char, struct std::char_traits<char>, class std::allocator<char>>
    {
      // VFTable. Offset=144, Size=1, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
      public: virtual void unknown_vf_144_0(void); // 0
#endif
      // VFTable with 144 offset end

    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class basic_ostream
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>>
#if 0
    template<>
    class basic_ostream<char, struct std::char_traits<char>>
    {
      // Functions:
      public: std::basic_ostream<char, struct std::char_traits<char>>::basic_ostream<char, struct std::char_traits<char>>(class std::basic_streambuf<char, struct std::char_traits<char>> *, bool)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(short)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned short)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(int)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned int)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(long)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned long)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(float)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(double)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(void const *)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(__int64)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned __int64)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(bool)
      public: void std::basic_ostream<char, struct std::char_traits<char>>::_Osfx(void)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::flush(void)
#if 0 // All found virtual functions names:
      public: virtual std::basic_ostream<char, struct std::char_traits<char>>::~basic_ostream<char, struct std::char_traits<char>>(void)
#endif

    public:
    };
#endif
#endif


#if 0
    template<>
    class basic_ostream<char, struct std::char_traits<char>>
    {
    public:
    };
#endif

    template<typename T0, typename T1, typename T3    >
    class/*or struct*/ basic_ostringstream
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>, class std::allocator<char>>
#if 0
    template<>
    class/*or struct*/ basic_ostringstream<char, struct std::char_traits<char>, class std::allocator<char>>
    {
      // VFTable. Offset=136, Size=1, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
      public: virtual void unknown_vf_136_0(void); // 0
#endif
      // VFTable with 136 offset end

    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class basic_streambuf
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>>
#if 0
    template<>
    class basic_streambuf<char, struct std::char_traits<char>>
    {
      // Functions:
      protected: std::basic_streambuf<char, struct std::char_traits<char>>::basic_streambuf<char, struct std::char_traits<char>>(void)
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::_Pninc(void)
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::eback(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::egptr(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::epptr(void) const
      protected: void std::basic_streambuf<char, struct std::char_traits<char>>::gbump(int)
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::gptr(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::pbase(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::pptr(void) const
      public: int std::basic_streambuf<char, struct std::char_traits<char>>::sbumpc(void)
      protected: void std::basic_streambuf<char, struct std::char_traits<char>>::setg(char *, char *, char *)
      protected: void std::basic_streambuf<char, struct std::char_traits<char>>::setp(char *, char *, char *)
      protected: void std::basic_streambuf<char, struct std::char_traits<char>>::setp(char *, char *)
      public: int std::basic_streambuf<char, struct std::char_traits<char>>::sputc(char)
      public: __int64 std::basic_streambuf<char, struct std::char_traits<char>>::sputn(char const *, __int64)
#if 0 // All found virtual functions names:
      public: virtual std::basic_streambuf<char, struct std::char_traits<char>>::~basic_streambuf<char, struct std::char_traits<char>>(void)
      public: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::_Lock(void)
      public: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::_Unlock(void)
      protected: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::imbue(class std::locale const &)
      protected: virtual class std::basic_streambuf<char, struct std::char_traits<char>> * std::basic_streambuf<char, struct std::char_traits<char>>::setbuf(char *, __int64)
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::showmanyc(void)
      protected: virtual int std::basic_streambuf<char, struct std::char_traits<char>>::sync(void)
      protected: virtual int std::basic_streambuf<char, struct std::char_traits<char>>::uflow(void)
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::xsgetn(char *, __int64)
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::xsputn(char const *, __int64)
#endif

      // VFTable. Offset=0, Size=15, Start=0
      // Added virtual functions:
      public: virtual std::basic_streambuf<char, struct std::char_traits<char>>::~basic_streambuf<char, struct std::char_traits<char>>(void); // 0
      public: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::_Lock(void); // 1
      public: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::_Unlock(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      public: virtual void unknown_vf_0_4(void); // 4
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::showmanyc(void); // 5
      public: virtual void unknown_vf_0_6(void); // 6
      protected: virtual int std::basic_streambuf<char, struct std::char_traits<char>>::uflow(void); // 7
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::xsgetn(char *, __int64); // 8
      protected: virtual __int64 std::basic_streambuf<char, struct std::char_traits<char>>::xsputn(char const *, __int64); // 9
      public: virtual void unknown_vf_0_10(void); // 10
      public: virtual void unknown_vf_0_11(void); // 11
      protected: virtual class std::basic_streambuf<char, struct std::char_traits<char>> * std::basic_streambuf<char, struct std::char_traits<char>>::setbuf(char *, __int64); // 12
      protected: virtual int std::basic_streambuf<char, struct std::char_traits<char>>::sync(void); // 13
      protected: virtual void std::basic_streambuf<char, struct std::char_traits<char>>::imbue(class std::locale const &); // 14
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


#if 0
    template<>
    class basic_streambuf<char, struct std::char_traits<char>>
    {
    public:
    };
#endif

    template<typename T0, typename T1, typename T3    >
    class basic_string
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>, class std::allocator<char>>
#if 0
    template<>
    class basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
    {
    public:
    };
#endif
#endif


#if 0
    template<>
    class basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
    {
    public:
    };
#endif

    template<typename T0, typename T1, typename T3    >
    class/*or struct*/ basic_stringbuf
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>, class std::allocator<char>>
#if 0
    template<>
    class/*or struct*/ basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>> : public basic_streambuf<char, struct std::char_traits<char>>
    {
      // VFTable. Offset=0, Size=15, Start=15
      // Corresponding base: basic_streambuf::basic_streambuf::basic_streambuf<char, struct std::char_traits<char>>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    template<typename T1    >
    struct char_traits
    {
    public:
    };
#if 0 // Instances:
// <char>
#if 0
    template<>
    struct char_traits<char>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ exception
    {
      // VFTable. Offset=0, Size=2, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ ios_base
    {
    public:
      // Nested containers:
      class/*or struct*/ failure : public system_error
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::system_error
        // Owner: SophisXML.dll
        // VFTable with 0 offset end

      public:
      };


      // Functions:
      public: int flags(void) const
      public: bool good(void) const
      public: __int64 width(__int64)
      public: __int64 width(void) const
    public:
    };

    template<typename T1    >
    struct less
    {
    public:
    };
#if 0 // Instances:
// <class sophis::tools::dataModel::PlainValue const *>
#if 0
    template<>
    struct less<class sophis::tools::dataModel::PlainValue const *>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString>
#if 0
    template<>
    struct less<class sophis::xml::util::XWString>
    {
    public:
    };
#endif
// <class sophisTools::FlyWeightString>
#if 0
    template<>
    struct less<class sophisTools::FlyWeightString>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    struct less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif
// <class xercesc_3_2::DOMNode const *>
#if 0
    template<>
    struct less<class xercesc_3_2::DOMNode const *>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class list
    {
    public:
    };
#if 0 // Instances:
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class list<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
// <struct sophis::xml::dataModel::XMLDataExporterImpl::Position, class std::allocator<struct sophis::xml::dataModel::XMLDataExporterImpl::Position>>
#if 0
    template<>
    class/*or struct*/ list<struct sophis::xml::dataModel::XMLDataExporterImpl::Position, class std::allocator<struct sophis::xml::dataModel::XMLDataExporterImpl::Position>>
    {
    public:
    };
#endif
// <struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>>>
#if 0
    template<>
    class/*or struct*/ list<struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
#if 0
    template<>
    class/*or struct*/ list<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
    {
    public:
    };
#endif
#endif


    class locale
    {
    public:
    };

    class/*or struct*/ logic_error : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T1, typename T2, typename T4    >
    class map
    {
    public:
    };
#if 0 // Instances:
// <class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
#if 0
    template<>
    class/*or struct*/ map<class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>> : public _Tree<class std::_Tmap_traits<class sophis::tools::dataModel::PlainValue const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class sophis::tools::dataModel::PlainValue const *>, class std::allocator<struct std::pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>>
#if 0
    template<>
    class/*or struct*/ map<class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>> : public _Tree<class std::_Tmap_traits<class sophis::xml::util::XWString, bool, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, bool>>, 0>>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>>
#if 0
    template<>
    class/*or struct*/ map<class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>> : public _Tree<class std::_Tmap_traits<class sophis::xml::util::XWString, class sophis::xml::util::XWString, struct std::less<class sophis::xml::util::XWString>, class std::allocator<struct std::pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>>, 0>>
    {
    public:
    };
#endif
// <class sophisTools::FlyWeightString, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>, struct std::less<class sophisTools::FlyWeightString>, class std::allocator<struct std::pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>>>
#if 0
    template<>
    class map<class sophisTools::FlyWeightString, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>, struct std::less<class sophisTools::FlyWeightString>, class std::allocator<struct std::pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>>
#if 0
    template<>
    class/*or struct*/ map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>> : public _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, bool, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>>, 0>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>>
#if 0
    template<>
    class/*or struct*/ map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>> : public _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>>, 0>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
#if 0
    template<>
    class/*or struct*/ map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>> : public _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
    {
    public:
    };
#endif
// <class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>>
#if 0
    template<>
    class/*or struct*/ map<class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>> : public _Tree<class std::_Tmap_traits<class xercesc_3_2::DOMNode const *, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo, struct std::less<class xercesc_3_2::DOMNode const *>, class std::allocator<struct std::pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>>, 0>>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ out_of_range : public logic_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::logic_error
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T2    >
    struct pair
    {
    public:
    };
#if 0 // Instances:
// <class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    struct pair<class sophis::tools::dataModel::PlainValue const *const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif
// <class sophis::xml::dataModel::XMLDataExporterImpl::PositionList, class sophis::xml::dataModel::XMLDataExporterImpl::PositionList>
#if 0
    template<>
    class/*or struct*/ pair<class sophis::xml::dataModel::XMLDataExporterImpl::PositionList, class sophis::xml::dataModel::XMLDataExporterImpl::PositionList>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString const, bool>
#if 0
    template<>
    struct pair<class sophis::xml::util::XWString const, bool>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString const, class sophis::xml::util::XWString>
#if 0
    template<>
    struct pair<class sophis::xml::util::XWString const, class sophis::xml::util::XWString>
    {
    public:
    };
#endif
// <class sophis::xml::util::XWString, class sophis::xml::util::XWString>
#if 0
    template<>
    struct pair<class sophis::xml::util::XWString, class sophis::xml::util::XWString>
    {
    public:
    };
#endif
// <class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>
#if 0
    template<>
    struct pair<class sophisTools::FlyWeightString const, class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, bool>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class sophis::xml::dataModel::XMLDataExporterImpl::PositionListPair>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
      // Functions:
      public: std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &)
    public:
    };
#endif
// <class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>
#if 0
    template<>
    struct pair<class xercesc_3_2::DOMNode const *const, struct sophis::xml::dataModel::XMLDataImporterImpl::NodeInfo>
    {
    public:
    };
#endif
#endif


#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif

    class/*or struct*/ range_error : public runtime_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::runtime_error
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ runtime_error : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T1, typename T3    >
    class set
    {
    public:
    };
#if 0 // Instances:
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class set<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> : public _Tree<class std::_Tset_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, 0>>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ system_error : public _System_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::_System_error
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };

    template<typename T0, typename T2    >
    class vector
    {
    public:
    };
#if 0 // Instances:
// <class sophis::tools::dataModel::Data const *, class std::allocator<class sophis::tools::dataModel::Data const *>>
#if 0
    template<>
    class/*or struct*/ vector<class sophis::tools::dataModel::Data const *, class std::allocator<class sophis::tools::dataModel::Data const *>>
    {
    public:
    };
#endif
// <class sophis::tools::dataModel::DataContainer const *, class std::allocator<class sophis::tools::dataModel::DataContainer const *>>
#if 0
    template<>
    class/*or struct*/ vector<class sophis::tools::dataModel::DataContainer const *, class std::allocator<class sophis::tools::dataModel::DataContainer const *>>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>>>
#if 0
    template<>
    class vector<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::RandomAccessInputStream>>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    class vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
#if 0
    template<>
    class vector<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
    {
    public:
    };
#endif
#endif



    // Functions:
    void _Xbad_alloc(void)
    void _Xlength_error(char const *)
    void _Xout_of_range(char const *)
    bool uncaught_exception(void)
  public:
  };

  class/*or struct*/ type_info
  {
    // VFTable. Offset=0, Size=1, Start=0
    // Owner: SophisXML.dll
    // Added virtual functions:
    public: virtual void unknown_vf_0_0(void); // 0
    // VFTable with 0 offset end

  public:
  };

  class/*or struct*/ xercesc_3_2
  {
  public:
    // Nested containers:
    class/*or struct*/ AbstractDOMParser : public XMemory, public XMLDocumentHandler, public XMLErrorReporter, public XMLEntityHandler, public DocTypeHandler, public PSVIHandler
    {
#if 0 // All found virtual functions names:
      public: virtual void TextDecl(char16_t const *const, char16_t const *const)
      public: virtual void attDef(class xercesc_3_2::DTDElementDecl const &, class xercesc_3_2::DTDAttDef const &, bool)
      protected: virtual class xercesc_3_2::DOMAttr * createAttr(char16_t const *)
      protected: virtual class xercesc_3_2::DOMAttr * createAttrNS(char16_t const *, char16_t const *, char16_t const *, char16_t const *)
      protected: virtual class xercesc_3_2::DOMCDATASection * createCDATASection(char16_t const *, unsigned __int64)
      protected: virtual class xercesc_3_2::DOMElement * createElement(char16_t const *)
      protected: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *, char16_t const *, char16_t const *)
      protected: virtual class xercesc_3_2::DOMText * createText(char16_t const *, unsigned __int64)
      public: virtual void doctypeComment(char16_t const *const)
      public: virtual void doctypeDecl(class xercesc_3_2::DTDElementDecl const &, char16_t const *const, char16_t const *const, bool, bool)
      public: virtual void doctypePI(char16_t const *const, char16_t const *const)
      public: virtual void doctypeWhitespace(char16_t const *const, unsigned __int64)
      public: virtual void elementDecl(class xercesc_3_2::DTDElementDecl const &, bool)
      public: virtual void endAttList(class xercesc_3_2::DTDElementDecl const &)
      public: virtual void endDocument(void)
      public: virtual void endEntityReference(class xercesc_3_2::XMLEntityDecl const &)
      public: virtual void endExtSubset(void)
      public: virtual void endIntSubset(void)
      public: virtual void entityDecl(class xercesc_3_2::DTDEntityDecl const &, bool, bool)
      public: virtual void handleAttributesPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIAttributeList *)
      public: virtual void handleElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *)
      public: virtual void handlePartialElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *)
      public: virtual void ignorableWhitespace(char16_t const *const, unsigned __int64, bool)
      public: virtual void notationDecl(class xercesc_3_2::XMLNotationDecl const &, bool)
      public: virtual void resetDocType(void)
      public: virtual void resetDocument(void)
      public: virtual void setPSVIHandler(class xercesc_3_2::PSVIHandler *const)
      public: virtual void startAttList(class xercesc_3_2::DTDElementDecl const &)
      public: virtual void startExtSubset(void)
      public: virtual void startIntSubset(void)
#endif

      // VFTable. Offset=0, Size=20, Start=0
      // Corresponding base: xercesc_3_2::XMLDocumentHandler
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void docCharacters(char16_t const *const, unsigned __int64, bool); // 1 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void docComment(char16_t const *const); // 2 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void docPI(char16_t const *const, char16_t const *const); // 3 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void endDocument(void); // 4
      public: virtual void endElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, bool, char16_t const *const); // 5 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void endEntityReference(class xercesc_3_2::XMLEntityDecl const &); // 6
      public: virtual void ignorableWhitespace(char16_t const *const, unsigned __int64, bool); // 7
      public: virtual void resetDocument(void); // 8
      public: virtual void startDocument(void); // 9 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void startElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, char16_t const *const, class xercesc_3_2::RefVectorOf<class xercesc_3_2::XMLAttr> const &, unsigned __int64, bool, bool); // 10 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void startEntityReference(class xercesc_3_2::XMLEntityDecl const &); // 11 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void XMLDecl(char16_t const *const, char16_t const *const, char16_t const *const, char16_t const *const); // 12 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void setPSVIHandler(class xercesc_3_2::PSVIHandler *const); // 13
      protected: virtual class xercesc_3_2::DOMCDATASection * createCDATASection(char16_t const *, unsigned __int64); // 14
      protected: virtual class xercesc_3_2::DOMText * createText(char16_t const *, unsigned __int64); // 15
      protected: virtual class xercesc_3_2::DOMElement * createElement(char16_t const *); // 16
      protected: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *, char16_t const *, char16_t const *); // 17
      protected: virtual class xercesc_3_2::DOMAttr * createAttr(char16_t const *); // 18
      protected: virtual class xercesc_3_2::DOMAttr * createAttrNS(char16_t const *, char16_t const *, char16_t const *, char16_t const *); // 19
      // VFTable with 0 offset end

      // VFTable. Offset=24, Size=17, Start=17
      // Corresponding base: xercesc_3_2::DocTypeHandler
      // Overrides:
      public: virtual void attDef(class xercesc_3_2::DTDElementDecl const &, class xercesc_3_2::DTDAttDef const &, bool) override; // 1
      public: virtual void doctypeComment(char16_t const *const) override; // 2
      public: virtual void doctypeDecl(class xercesc_3_2::DTDElementDecl const &, char16_t const *const, char16_t const *const, bool, bool) override; // 3
      public: virtual void doctypePI(char16_t const *const, char16_t const *const) override; // 4
      public: virtual void doctypeWhitespace(char16_t const *const, unsigned __int64) override; // 5
      public: virtual void elementDecl(class xercesc_3_2::DTDElementDecl const &, bool) override; // 6
      public: virtual void endAttList(class xercesc_3_2::DTDElementDecl const &) override; // 7
      public: virtual void endIntSubset(void) override; // 8
      public: virtual void endExtSubset(void) override; // 9
      public: virtual void entityDecl(class xercesc_3_2::DTDEntityDecl const &, bool, bool) override; // 10
      public: virtual void resetDocType(void) override; // 11
      public: virtual void notationDecl(class xercesc_3_2::XMLNotationDecl const &, bool) override; // 12
      public: virtual void startAttList(class xercesc_3_2::DTDElementDecl const &) override; // 13
      public: virtual void startIntSubset(void) override; // 14
      public: virtual void startExtSubset(void) override; // 15
      public: virtual void TextDecl(char16_t const *const, char16_t const *const) override; // 16
      // VFTable with 24 offset end

      // VFTable. Offset=32, Size=4, Start=4
      // Corresponding base: xercesc_3_2::PSVIHandler
      // Overrides:
      public: virtual void handleElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *) override; // 1
      public: virtual void handlePartialElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *) override; // 2
      public: virtual void handleAttributesPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIAttributeList *) override; // 3
      // VFTable with 32 offset end

    public:
    };

    class ArrayIndexOutOfBoundsException
    {
      // Functions:
      public: ArrayIndexOutOfBoundsException(class xercesc_3_2::ArrayIndexOutOfBoundsException const &)
      public: ArrayIndexOutOfBoundsException(char const *const, unsigned __int64, enum xercesc_3_2::XMLExcepts::Codes, class xercesc_3_2::MemoryManager *)
#if 0 // All found virtual functions names:
      public: virtual ~ArrayIndexOutOfBoundsException(void)
#endif

    public:
    };

    class/*or struct*/ Base64
    {
    public:
      // Enumerations:
      enum Conformance : int {
      };

      // Static functions:
      public: static unsigned char * decode(unsigned char const *const, unsigned __int64 *, class xercesc_3_2::MemoryManager *const, enum Conformance)
      public: static unsigned char * encode(unsigned char const *const, unsigned __int64, unsigned __int64 *, class xercesc_3_2::MemoryManager *const)
    public:
    };

    class BinInputStream : public XMemory
    {
      // Functions:
      protected: BinInputStream(void)
#if 0 // All found virtual functions names:
      public: virtual ~BinInputStream(void)
      public: virtual char16_t const * getEncoding(void) const
#endif

      // VFTable. Offset=0, Size=5, Start=0
      // Added virtual functions:
      public: virtual ~BinInputStream(void); // 0
      public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::curPos(void) const; // 1 (io::io::io::BinInputStreamAdapter)
      public: virtual unsigned __int64 sophis::xml::io::BinInputStreamAdapter::readBytes(unsigned char *const, unsigned __int64); // 2 (io::io::io::BinInputStreamAdapter)
      public: virtual char16_t const * sophis::xml::io::BinInputStreamAdapter::getContentType(void) const; // 3 (io::io::io::BinInputStreamAdapter)
      public: virtual char16_t const * getEncoding(void) const; // 4
      // VFTable with 0 offset end

    public:
    };

    class BinOutputStream : public XMemory
    {
      // Functions:
      protected: BinOutputStream(void)
#if 0 // All found virtual functions names:
      public: virtual ~BinOutputStream(void)
#endif

      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class ComplexTypeInfo
    {
      // Functions:
      public: class xercesc_3_2::SchemaElementDecl const * elementAt(unsigned __int64) const
      public: unsigned __int64 elementCount(void) const
      public: class xercesc_3_2::ContentSpecNode * getContentSpec(void) const
      public: char16_t const * getTypeLocalName(void) const
      public: char16_t const * getTypeUri(void) const
    public:
    };

    class ContentSpecNode
    {
    public:
    };

    class DOMAttr
    {
    public:
    };

    class DOMCDATASection
    {
    public:
    };

    class DOMChildNode
    {
    public:
    };

    class DOMComment
    {
    public:
    };

    class DOMConfiguration
    {
      // VFTable. Offset=0, Size=7, Start=0
      // Added virtual functions:
      public: virtual void setParameter(char16_t const *, bool); // 0 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual void setParameter(char16_t const *, void const *); // 1 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual void const * getParameter(char16_t const *) const; // 2 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual bool canSetParameter(char16_t const *, bool) const; // 3 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual bool canSetParameter(char16_t const *, void const *) const; // 4 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual class xercesc_3_2::DOMStringList const * getParameterNames(void) const; // 5 (xercesc_3_2::DOMLSSerializerImpl)
      public: virtual void unknown_vf_0_6(void); // 6
      // VFTable with 0 offset end

    public:
    };

    class DOMDocument : public DOMDocumentRange, public DOMXPathEvaluator, public DOMDocumentTraversal, public DOMNode
    {
      // VFTable. Offset=0, Size=38, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMRange * createRange(void); // 1 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMElement * createElement(char16_t const *); // 2 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMDocumentFragment * createDocumentFragment(void); // 3 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMText * createTextNode(char16_t const *); // 4 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMComment * createComment(char16_t const *); // 5 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMCDATASection * createCDATASection(char16_t const *); // 6 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMProcessingInstruction * createProcessingInstruction(char16_t const *, char16_t const *); // 7 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMAttr * createAttribute(char16_t const *); // 8 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMEntityReference * createEntityReference(char16_t const *); // 9 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMDocumentType * getDoctype(void) const; // 10 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMImplementation * getImplementation(void) const; // 11 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMElement * getDocumentElement(void) const; // 12 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagName(char16_t const *) const; // 13 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNode * importNode(class xercesc_3_2::DOMNode const *, bool); // 14 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *, unsigned __int64, unsigned __int64); // 15 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *); // 16 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMAttr * createAttributeNS(char16_t const *, char16_t const *); // 17 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagNameNS(char16_t const *, char16_t const *) const; // 18 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMElement * getElementById(char16_t const *) const; // 19 (xercesc_3_2::DOMDocumentImpl)
      public: virtual char16_t const * getInputEncoding(void) const; // 20 (xercesc_3_2::DOMDocumentImpl)
      public: virtual char16_t const * getXmlEncoding(void) const; // 21 (xercesc_3_2::DOMDocumentImpl)
      public: virtual bool getXmlStandalone(void) const; // 22 (xercesc_3_2::DOMDocumentImpl)
      public: virtual void setXmlStandalone(bool); // 23 (xercesc_3_2::DOMDocumentImpl)
      public: virtual char16_t const * getXmlVersion(void) const; // 24 (xercesc_3_2::DOMDocumentImpl)
      public: virtual void setXmlVersion(char16_t const *); // 25 (xercesc_3_2::DOMDocumentImpl)
      public: virtual char16_t const * getDocumentURI(void) const; // 26 (xercesc_3_2::DOMDocumentImpl)
      public: virtual void setDocumentURI(char16_t const *); // 27 (xercesc_3_2::DOMDocumentImpl)
      public: virtual bool getStrictErrorChecking(void) const; // 28 (xercesc_3_2::DOMDocumentImpl)
      public: virtual void setStrictErrorChecking(bool); // 29 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNode * renameNode(class xercesc_3_2::DOMNode *, char16_t const *, char16_t const *); // 30 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNode * adoptNode(class xercesc_3_2::DOMNode *); // 31 (xercesc_3_2::DOMDocumentImpl)
      public: virtual void normalizeDocument(void); // 32 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMConfiguration * getDOMConfig(void) const; // 33 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMEntity * createEntity(char16_t const *); // 34 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *, char16_t const *, char16_t const *); // 35 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *); // 36 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMNotation * createNotation(char16_t const *); // 37 (xercesc_3_2::DOMDocumentImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMDocumentFragment
    {
    public:
    };

    class/*or struct*/ DOMDocumentImpl : public XMemory, public DOMMemoryManager, public DOMDocument, public HasDOMNodeImpl, public HasDOMParentImpl
    {
      // Functions:
      public: DOMDocumentImpl(class xercesc_3_2::DOMImplementation *, class xercesc_3_2::MemoryManager *const)
      public: DOMDocumentImpl(char16_t const *, char16_t const *, class xercesc_3_2::DOMDocumentType *, class xercesc_3_2::DOMImplementation *, class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~DOMDocumentImpl(void)
      public: virtual class xercesc_3_2::DOMNode * adoptNode(class xercesc_3_2::DOMNode *)
      public: virtual void * allocate(unsigned __int64)
      public: virtual void * allocate(unsigned __int64, enum xercesc_3_2::DOMMemoryManager::NodeObjectType)
      public: virtual class xercesc_3_2::DOMNode * appendChild(class xercesc_3_2::DOMNode *)
      public: virtual void changed(void)
      public: virtual int changes(void) const
      public: virtual class xercesc_3_2::DOMNode * cloneNode(bool) const
      public: virtual char16_t * cloneString(char16_t const *)
      public: virtual short compareDocumentPosition(class xercesc_3_2::DOMNode const *) const
      public: virtual class xercesc_3_2::DOMAttr * createAttribute(char16_t const *)
      public: virtual class xercesc_3_2::DOMAttr * createAttributeNS(char16_t const *, char16_t const *)
      public: virtual class xercesc_3_2::DOMCDATASection * createCDATASection(char16_t const *)
      public: virtual class xercesc_3_2::DOMComment * createComment(char16_t const *)
      public: virtual class xercesc_3_2::DOMDocumentFragment * createDocumentFragment(void)
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *, char16_t const *, char16_t const *)
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *)
      public: virtual class xercesc_3_2::DOMElement * createElement(char16_t const *)
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *)
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *, unsigned __int64, unsigned __int64)
      public: virtual class xercesc_3_2::DOMElement * createElementNoCheck(char16_t const *)
      public: virtual class xercesc_3_2::DOMEntity * createEntity(char16_t const *)
      public: virtual class xercesc_3_2::DOMEntityReference * createEntityReference(char16_t const *)
      public: virtual class xercesc_3_2::DOMXPathExpression * createExpression(char16_t const *, class xercesc_3_2::DOMXPathNSResolver const *)
      public: virtual class xercesc_3_2::DOMXPathNSResolver * createNSResolver(class xercesc_3_2::DOMNode const *)
      public: virtual class xercesc_3_2::DOMNodeIterator * createNodeIterator(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool)
      public: virtual class xercesc_3_2::DOMNotation * createNotation(char16_t const *)
      public: virtual class xercesc_3_2::DOMProcessingInstruction * createProcessingInstruction(char16_t const *, char16_t const *)
      public: virtual class xercesc_3_2::DOMRange * createRange(void)
      public: virtual class xercesc_3_2::DOMText * createTextNode(char16_t const *)
      public: virtual class xercesc_3_2::DOMTreeWalker * createTreeWalker(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool)
      public: virtual class xercesc_3_2::DOMXPathResult * evaluate(char16_t const *, class xercesc_3_2::DOMNode const *, class xercesc_3_2::DOMXPathNSResolver const *, enum xercesc_3_2::DOMXPathResult::ResultType, class xercesc_3_2::DOMXPathResult *)
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getAttributes(void) const
      public: virtual char16_t const * getBaseURI(void) const
      public: virtual class xercesc_3_2::DOMNodeList * getChildNodes(void) const
      public: virtual class xercesc_3_2::DOMConfiguration * getDOMConfig(void) const
      public: virtual class xercesc_3_2::DOMDocumentType * getDoctype(void) const
      public: virtual class xercesc_3_2::DOMElement * getDocumentElement(void) const
      public: virtual char16_t const * getDocumentURI(void) const
      public: virtual class xercesc_3_2::DOMElement * getElementById(char16_t const *) const
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagName(char16_t const *) const
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagNameNS(char16_t const *, char16_t const *) const
      public: virtual void * getFeature(char16_t const *, char16_t const *) const
      public: virtual class xercesc_3_2::DOMNode * getFirstChild(void) const
      public: virtual class xercesc_3_2::DOMImplementation * getImplementation(void) const
      public: virtual char16_t const * getInputEncoding(void) const
      public: virtual class xercesc_3_2::DOMNode * getLastChild(void) const
      public: virtual char16_t const * getLocalName(void) const
      public: virtual unsigned __int64 getMemoryAllocationBlockSize(void) const
      public: virtual char16_t const * getNamespaceURI(void) const
      public: virtual class xercesc_3_2::DOMNode * getNextSibling(void) const
      public: virtual class xercesc_3_2::DOMNodeImpl * getNodeImpl(void)
      public: virtual class xercesc_3_2::DOMNodeImpl const * getNodeImpl(void) const
      public: virtual class xercesc_3_2::RefVectorOf<class xercesc_3_2::DOMNodeIteratorImpl> * getNodeIterators(void) const
      public: virtual char16_t const * getNodeName(void) const
      public: virtual enum xercesc_3_2::DOMNode::NodeType getNodeType(void) const
      public: virtual char16_t const * getNodeValue(void) const
      public: virtual class xercesc_3_2::DOMDocument * getOwnerDocument(void) const
      public: virtual class xercesc_3_2::DOMNode * getParentNode(void) const
      public: virtual class xercesc_3_2::DOMParentNode * getParentNodeImpl(void)
      public: virtual class xercesc_3_2::DOMParentNode const * getParentNodeImpl(void) const
      public: virtual char16_t const * getPrefix(void) const
      public: virtual class xercesc_3_2::DOMNode * getPreviousSibling(void) const
      public: virtual class xercesc_3_2::RefVectorOf<class xercesc_3_2::DOMRangeImpl> * getRanges(void) const
      public: virtual bool getStrictErrorChecking(void) const
      public: virtual char16_t const * getTextContent(void) const
      public: virtual void * getUserData(char16_t const *) const
      public: virtual char16_t const * getXmlEncoding(void) const
      public: virtual bool getXmlStandalone(void) const
      public: virtual char16_t const * getXmlVersion(void) const
      public: virtual bool hasAttributes(void) const
      public: virtual bool hasChildNodes(void) const
      protected: virtual class xercesc_3_2::DOMNode * importNode(class xercesc_3_2::DOMNode const *, bool, bool)
      public: virtual class xercesc_3_2::DOMNode * importNode(class xercesc_3_2::DOMNode const *, bool)
      public: virtual class xercesc_3_2::DOMNode * insertBefore(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *)
      public: virtual bool isDefaultNamespace(char16_t const *) const
      public: virtual bool isEqualNode(class xercesc_3_2::DOMNode const *) const
      public: virtual bool isSameNode(class xercesc_3_2::DOMNode const *) const
      public: virtual bool isSupported(char16_t const *, char16_t const *) const
      public: virtual char16_t const * lookupNamespaceURI(char16_t const *) const
      public: virtual char16_t const * lookupPrefix(char16_t const *) const
      public: virtual void normalize(void)
      public: virtual void normalizeDocument(void)
      public: virtual void release(class xercesc_3_2::DOMNode *, enum xercesc_3_2::DOMMemoryManager::NodeObjectType)
      public: virtual void release(void *)
      public: virtual void release(void)
      public: virtual class xercesc_3_2::DOMNode * removeChild(class xercesc_3_2::DOMNode *)
      public: virtual void removeNodeIterator(class xercesc_3_2::DOMNodeIteratorImpl *)
      public: virtual void removeRange(class xercesc_3_2::DOMRangeImpl *)
      public: virtual class xercesc_3_2::DOMNode * renameNode(class xercesc_3_2::DOMNode *, char16_t const *, char16_t const *)
      public: virtual class xercesc_3_2::DOMNode * replaceChild(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *)
      public: virtual void setDocumentURI(char16_t const *)
      public: virtual void setMemoryAllocationBlockSize(unsigned __int64)
      public: virtual void setNodeValue(char16_t const *)
      public: virtual void setPrefix(char16_t const *)
      public: virtual void setStrictErrorChecking(bool)
      public: virtual void setTextContent(char16_t const *)
      public: virtual void * setUserData(char16_t const *, void *, class xercesc_3_2::DOMUserDataHandler *)
      public: virtual void setXmlStandalone(bool)
      public: virtual void setXmlVersion(char16_t const *)
#endif

      // VFTable. Offset=0, Size=16, Start=0
      // Corresponding base: xercesc_3_2::DOMMemoryManager
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~DOMDocumentImpl(void); // 0
      public: virtual unsigned __int64 getMemoryAllocationBlockSize(void) const; // 1
      public: virtual void setMemoryAllocationBlockSize(unsigned __int64); // 2
      public: virtual void * allocate(unsigned __int64, enum xercesc_3_2::DOMMemoryManager::NodeObjectType); // 3
      public: virtual void * allocate(unsigned __int64); // 4
      public: virtual void release(class xercesc_3_2::DOMNode *, enum xercesc_3_2::DOMMemoryManager::NodeObjectType); // 5
      public: virtual char16_t * cloneString(char16_t const *); // 6
      public: virtual void release(void *); // 7
      public: virtual class xercesc_3_2::DOMElement * createElementNoCheck(char16_t const *); // 8
      public: virtual class xercesc_3_2::RefVectorOf<class xercesc_3_2::DOMRangeImpl> * getRanges(void) const; // 9
      public: virtual class xercesc_3_2::RefVectorOf<class xercesc_3_2::DOMNodeIteratorImpl> * getNodeIterators(void) const; // 10
      public: virtual void removeRange(class xercesc_3_2::DOMRangeImpl *); // 11
      public: virtual void removeNodeIterator(class xercesc_3_2::DOMNodeIteratorImpl *); // 12
      public: virtual void changed(void); // 13
      public: virtual int changes(void) const; // 14
      protected: virtual class xercesc_3_2::DOMNode * importNode(class xercesc_3_2::DOMNode const *, bool, bool); // 15
      // VFTable with 0 offset end

      // VFTable. Offset=8, Size=38, Start=38
      // Corresponding base: xercesc_3_2::DOMDocument
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMRange * createRange(void) override; // 1
      public: virtual class xercesc_3_2::DOMElement * createElement(char16_t const *) override; // 2
      public: virtual class xercesc_3_2::DOMDocumentFragment * createDocumentFragment(void) override; // 3
      public: virtual class xercesc_3_2::DOMText * createTextNode(char16_t const *) override; // 4
      public: virtual class xercesc_3_2::DOMComment * createComment(char16_t const *) override; // 5
      public: virtual class xercesc_3_2::DOMCDATASection * createCDATASection(char16_t const *) override; // 6
      public: virtual class xercesc_3_2::DOMProcessingInstruction * createProcessingInstruction(char16_t const *, char16_t const *) override; // 7
      public: virtual class xercesc_3_2::DOMAttr * createAttribute(char16_t const *) override; // 8
      public: virtual class xercesc_3_2::DOMEntityReference * createEntityReference(char16_t const *) override; // 9
      public: virtual class xercesc_3_2::DOMDocumentType * getDoctype(void) const override; // 10
      public: virtual class xercesc_3_2::DOMImplementation * getImplementation(void) const override; // 11
      public: virtual class xercesc_3_2::DOMElement * getDocumentElement(void) const override; // 12
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagName(char16_t const *) const override; // 13
      public: virtual class xercesc_3_2::DOMNode * importNode(class xercesc_3_2::DOMNode const *, bool) override; // 14
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *, unsigned __int64, unsigned __int64) override; // 15
      public: virtual class xercesc_3_2::DOMElement * createElementNS(char16_t const *, char16_t const *) override; // 16
      public: virtual class xercesc_3_2::DOMAttr * createAttributeNS(char16_t const *, char16_t const *) override; // 17
      public: virtual class xercesc_3_2::DOMNodeList * getElementsByTagNameNS(char16_t const *, char16_t const *) const override; // 18
      public: virtual class xercesc_3_2::DOMElement * getElementById(char16_t const *) const override; // 19
      public: virtual char16_t const * getInputEncoding(void) const override; // 20
      public: virtual char16_t const * getXmlEncoding(void) const override; // 21
      public: virtual bool getXmlStandalone(void) const override; // 22
      public: virtual void setXmlStandalone(bool) override; // 23
      public: virtual char16_t const * getXmlVersion(void) const override; // 24
      public: virtual void setXmlVersion(char16_t const *) override; // 25
      public: virtual char16_t const * getDocumentURI(void) const override; // 26
      public: virtual void setDocumentURI(char16_t const *) override; // 27
      public: virtual bool getStrictErrorChecking(void) const override; // 28
      public: virtual void setStrictErrorChecking(bool) override; // 29
      public: virtual class xercesc_3_2::DOMNode * renameNode(class xercesc_3_2::DOMNode *, char16_t const *, char16_t const *) override; // 30
      public: virtual class xercesc_3_2::DOMNode * adoptNode(class xercesc_3_2::DOMNode *) override; // 31
      public: virtual void normalizeDocument(void) override; // 32
      public: virtual class xercesc_3_2::DOMConfiguration * getDOMConfig(void) const override; // 33
      public: virtual class xercesc_3_2::DOMEntity * createEntity(char16_t const *) override; // 34
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *, char16_t const *, char16_t const *) override; // 35
      public: virtual class xercesc_3_2::DOMDocumentType * createDocumentType(char16_t const *) override; // 36
      public: virtual class xercesc_3_2::DOMNotation * createNotation(char16_t const *) override; // 37
      // VFTable with 8 offset end

      // VFTable. Offset=16, Size=4, Start=4
      // Corresponding base: xercesc_3_2::DOMXPathEvaluator
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMXPathExpression * createExpression(char16_t const *, class xercesc_3_2::DOMXPathNSResolver const *) override; // 1
      public: virtual class xercesc_3_2::DOMXPathNSResolver * createNSResolver(class xercesc_3_2::DOMNode const *) override; // 2
      public: virtual class xercesc_3_2::DOMXPathResult * evaluate(char16_t const *, class xercesc_3_2::DOMNode const *, class xercesc_3_2::DOMXPathNSResolver const *, enum xercesc_3_2::DOMXPathResult::ResultType, class xercesc_3_2::DOMXPathResult *) override; // 3
      // VFTable with 16 offset end

      // VFTable. Offset=24, Size=3, Start=3
      // Corresponding base: xercesc_3_2::DOMDocumentTraversal
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMNodeIterator * createNodeIterator(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool) override; // 1
      public: virtual class xercesc_3_2::DOMTreeWalker * createTreeWalker(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool) override; // 2
      // VFTable with 24 offset end

      // VFTable. Offset=32, Size=39, Start=39
      // Corresponding base: xercesc_3_2::DOMNode
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual char16_t const * getNodeName(void) const override; // 1
      public: virtual char16_t const * getNodeValue(void) const override; // 2
      public: virtual enum xercesc_3_2::DOMNode::NodeType getNodeType(void) const override; // 3
      public: virtual class xercesc_3_2::DOMNode * getParentNode(void) const override; // 4
      public: virtual class xercesc_3_2::DOMNodeList * getChildNodes(void) const override; // 5
      public: virtual class xercesc_3_2::DOMNode * getFirstChild(void) const override; // 6
      public: virtual class xercesc_3_2::DOMNode * getLastChild(void) const override; // 7
      public: virtual class xercesc_3_2::DOMNode * getPreviousSibling(void) const override; // 8
      public: virtual class xercesc_3_2::DOMNode * getNextSibling(void) const override; // 9
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getAttributes(void) const override; // 10
      public: virtual class xercesc_3_2::DOMDocument * getOwnerDocument(void) const override; // 11
      public: virtual class xercesc_3_2::DOMNode * cloneNode(bool) const override; // 12
      public: virtual class xercesc_3_2::DOMNode * insertBefore(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *) override; // 13
      public: virtual class xercesc_3_2::DOMNode * replaceChild(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *) override; // 14
      public: virtual class xercesc_3_2::DOMNode * removeChild(class xercesc_3_2::DOMNode *) override; // 15
      public: virtual class xercesc_3_2::DOMNode * appendChild(class xercesc_3_2::DOMNode *) override; // 16
      public: virtual bool hasChildNodes(void) const override; // 17
      public: virtual void setNodeValue(char16_t const *) override; // 18
      public: virtual void normalize(void) override; // 19
      public: virtual bool isSupported(char16_t const *, char16_t const *) const override; // 20
      public: virtual char16_t const * getNamespaceURI(void) const override; // 21
      public: virtual char16_t const * getPrefix(void) const override; // 22
      public: virtual char16_t const * getLocalName(void) const override; // 23
      public: virtual void setPrefix(char16_t const *) override; // 24
      public: virtual bool hasAttributes(void) const override; // 25
      public: virtual bool isSameNode(class xercesc_3_2::DOMNode const *) const override; // 26
      public: virtual bool isEqualNode(class xercesc_3_2::DOMNode const *) const override; // 27
      public: virtual void * setUserData(char16_t const *, void *, class xercesc_3_2::DOMUserDataHandler *) override; // 28
      public: virtual void * getUserData(char16_t const *) const override; // 29
      public: virtual char16_t const * getBaseURI(void) const override; // 30
      public: virtual short compareDocumentPosition(class xercesc_3_2::DOMNode const *) const override; // 31
      public: virtual char16_t const * getTextContent(void) const override; // 32
      public: virtual void setTextContent(char16_t const *) override; // 33
      public: virtual char16_t const * lookupPrefix(char16_t const *) const override; // 34
      public: virtual bool isDefaultNamespace(char16_t const *) const override; // 35
      public: virtual char16_t const * lookupNamespaceURI(char16_t const *) const override; // 36
      public: virtual void * getFeature(char16_t const *, char16_t const *) const override; // 37
      public: virtual void release(void) override; // 38
      // VFTable with 32 offset end

      // VFTable. Offset=40, Size=3, Start=3
      // Corresponding base: xercesc_3_2::HasDOMNodeImpl
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMNodeImpl const * getNodeImpl(void) const override; // 1
      public: virtual class xercesc_3_2::DOMNodeImpl * getNodeImpl(void) override; // 2
      // VFTable with 40 offset end

      // VFTable. Offset=48, Size=3, Start=3
      // Corresponding base: xercesc_3_2::HasDOMParentImpl
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMParentNode const * getParentNodeImpl(void) const override; // 1
      public: virtual class xercesc_3_2::DOMParentNode * getParentNodeImpl(void) override; // 2
      // VFTable with 48 offset end

    public:
    };

    class/*or struct*/ DOMDocumentRange
    {
    public:
    };

    class/*or struct*/ DOMDocumentTraversal
    {
      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMNodeIterator * createNodeIterator(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool); // 1 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMTreeWalker * createTreeWalker(class xercesc_3_2::DOMNode *, unsigned long, class xercesc_3_2::DOMNodeFilter *, bool); // 2 (xercesc_3_2::DOMDocumentImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMDocumentType : public DOMNode
    {
      // Warning: Greater base vftable size!
      // VFTable. Offset=0, Size=0, Start=39
      // Corresponding base: xercesc_3_2::DOMNode
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ DOMDocumentTypeImpl : public DOMDocumentType, public HasDOMNodeImpl, public HasDOMParentImpl, public HasDOMChildImpl
    {
      // Functions:
      public: DOMDocumentTypeImpl(class xercesc_3_2::DOMDocument *, char16_t const *, char16_t const *, char16_t const *, bool)
#if 0 // All found virtual functions names:
      public: virtual ~DOMDocumentTypeImpl(void)
      public: virtual class xercesc_3_2::DOMNode * appendChild(class xercesc_3_2::DOMNode *)
      public: virtual class xercesc_3_2::DOMNode * cloneNode(bool) const
      public: virtual short compareDocumentPosition(class xercesc_3_2::DOMNode const *) const
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getAttributes(void) const
      public: virtual char16_t const * getBaseURI(void) const
      public: virtual class xercesc_3_2::DOMChildNode * getChildNodeImpl(void)
      public: virtual class xercesc_3_2::DOMChildNode const * getChildNodeImpl(void) const
      public: virtual class xercesc_3_2::DOMNodeList * getChildNodes(void) const
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getElements(void) const
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getEntities(void) const
      public: virtual void * getFeature(char16_t const *, char16_t const *) const
      public: virtual class xercesc_3_2::DOMNode * getFirstChild(void) const
      public: virtual char16_t const * getInternalSubset(void) const
      public: virtual class xercesc_3_2::DOMNode * getLastChild(void) const
      public: virtual char16_t const * getLocalName(void) const
      public: virtual char16_t const * getName(void) const
      public: virtual char16_t const * getNamespaceURI(void) const
      public: virtual class xercesc_3_2::DOMNode * getNextSibling(void) const
      public: virtual class xercesc_3_2::DOMNodeImpl * getNodeImpl(void)
      public: virtual class xercesc_3_2::DOMNodeImpl const * getNodeImpl(void) const
      public: virtual char16_t const * getNodeName(void) const
      public: virtual enum xercesc_3_2::DOMNode::NodeType getNodeType(void) const
      public: virtual char16_t const * getNodeValue(void) const
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getNotations(void) const
      public: virtual class xercesc_3_2::DOMDocument * getOwnerDocument(void) const
      public: virtual class xercesc_3_2::DOMNode * getParentNode(void) const
      public: virtual class xercesc_3_2::DOMParentNode * getParentNodeImpl(void)
      public: virtual class xercesc_3_2::DOMParentNode const * getParentNodeImpl(void) const
      public: virtual char16_t const * getPrefix(void) const
      public: virtual class xercesc_3_2::DOMNode * getPreviousSibling(void) const
      public: virtual char16_t const * getPublicId(void) const
      public: virtual char16_t const * getSystemId(void) const
      public: virtual char16_t const * getTextContent(void) const
      public: virtual void * getUserData(char16_t const *) const
      public: virtual bool hasAttributes(void) const
      public: virtual bool hasChildNodes(void) const
      public: virtual class xercesc_3_2::DOMNode * insertBefore(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *)
      public: virtual bool isDefaultNamespace(char16_t const *) const
      public: virtual bool isEqualNode(class xercesc_3_2::DOMNode const *) const
      public: virtual bool isSameNode(class xercesc_3_2::DOMNode const *) const
      public: virtual bool isSupported(char16_t const *, char16_t const *) const
      public: virtual char16_t const * lookupNamespaceURI(char16_t const *) const
      public: virtual char16_t const * lookupPrefix(char16_t const *) const
      public: virtual void normalize(void)
      public: virtual void release(void)
      public: virtual class xercesc_3_2::DOMNode * removeChild(class xercesc_3_2::DOMNode *)
      public: virtual class xercesc_3_2::DOMNode * replaceChild(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *)
      protected: virtual void setInternalSubset(char16_t const *)
      public: virtual void setNodeValue(char16_t const *)
      public: virtual void setOwnerDocument(class xercesc_3_2::DOMDocument *)
      public: virtual void setPrefix(char16_t const *)
      protected: virtual void setPublicId(char16_t const *)
      public: virtual void setReadOnly(bool, bool)
      protected: virtual void setSystemId(char16_t const *)
      public: virtual void setTextContent(char16_t const *)
      public: virtual void * setUserData(char16_t const *, void *, class xercesc_3_2::DOMUserDataHandler *)
#endif

      // VFTable. Offset=0, Size=51, Start=0
      // Corresponding base: xercesc_3_2::DOMDocumentType
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~DOMDocumentTypeImpl(void); // 0
      public: virtual char16_t const * getNodeName(void) const; // 1
      public: virtual char16_t const * getNodeValue(void) const; // 2
      public: virtual enum xercesc_3_2::DOMNode::NodeType getNodeType(void) const; // 3
      public: virtual class xercesc_3_2::DOMNode * getParentNode(void) const; // 4
      public: virtual class xercesc_3_2::DOMNodeList * getChildNodes(void) const; // 5
      public: virtual class xercesc_3_2::DOMNode * getFirstChild(void) const; // 6
      public: virtual class xercesc_3_2::DOMNode * getLastChild(void) const; // 7
      public: virtual class xercesc_3_2::DOMNode * getPreviousSibling(void) const; // 8
      public: virtual class xercesc_3_2::DOMNode * getNextSibling(void) const; // 9
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getAttributes(void) const; // 10
      public: virtual class xercesc_3_2::DOMDocument * getOwnerDocument(void) const; // 11
      public: virtual class xercesc_3_2::DOMNode * cloneNode(bool) const; // 12
      public: virtual class xercesc_3_2::DOMNode * insertBefore(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *); // 13
      public: virtual class xercesc_3_2::DOMNode * replaceChild(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *); // 14
      public: virtual class xercesc_3_2::DOMNode * removeChild(class xercesc_3_2::DOMNode *); // 15
      public: virtual class xercesc_3_2::DOMNode * appendChild(class xercesc_3_2::DOMNode *); // 16
      public: virtual bool hasChildNodes(void) const; // 17
      public: virtual void setNodeValue(char16_t const *); // 18
      public: virtual void normalize(void); // 19
      public: virtual bool isSupported(char16_t const *, char16_t const *) const; // 20
      public: virtual char16_t const * getNamespaceURI(void) const; // 21
      public: virtual char16_t const * getPrefix(void) const; // 22
      public: virtual char16_t const * getLocalName(void) const; // 23
      public: virtual void setPrefix(char16_t const *); // 24
      public: virtual bool hasAttributes(void) const; // 25
      public: virtual bool isSameNode(class xercesc_3_2::DOMNode const *) const; // 26
      public: virtual bool isEqualNode(class xercesc_3_2::DOMNode const *) const; // 27
      public: virtual void * setUserData(char16_t const *, void *, class xercesc_3_2::DOMUserDataHandler *); // 28
      public: virtual void * getUserData(char16_t const *) const; // 29
      public: virtual char16_t const * getBaseURI(void) const; // 30
      public: virtual short compareDocumentPosition(class xercesc_3_2::DOMNode const *) const; // 31
      public: virtual char16_t const * getTextContent(void) const; // 32
      public: virtual void setTextContent(char16_t const *); // 33
      public: virtual char16_t const * lookupPrefix(char16_t const *) const; // 34
      public: virtual bool isDefaultNamespace(char16_t const *) const; // 35
      public: virtual char16_t const * lookupNamespaceURI(char16_t const *) const; // 36
      public: virtual void * getFeature(char16_t const *, char16_t const *) const; // 37
      public: virtual void release(void); // 38
      public: virtual char16_t const * getName(void) const; // 39
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getEntities(void) const; // 40
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getNotations(void) const; // 41
      public: virtual char16_t const * getPublicId(void) const; // 42
      public: virtual char16_t const * getSystemId(void) const; // 43
      public: virtual char16_t const * getInternalSubset(void) const; // 44
      protected: virtual void setPublicId(char16_t const *); // 45
      protected: virtual void setSystemId(char16_t const *); // 46
      protected: virtual void setInternalSubset(char16_t const *); // 47
      public: virtual void setOwnerDocument(class xercesc_3_2::DOMDocument *); // 48
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getElements(void) const; // 49
      public: virtual void setReadOnly(bool, bool); // 50
      // VFTable with 0 offset end

      // VFTable. Offset=8, Size=3, Start=3
      // Corresponding base: xercesc_3_2::HasDOMNodeImpl
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentTypeImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMNodeImpl const * getNodeImpl(void) const override; // 1
      public: virtual class xercesc_3_2::DOMNodeImpl * getNodeImpl(void) override; // 2
      // VFTable with 8 offset end

      // VFTable. Offset=16, Size=3, Start=3
      // Corresponding base: xercesc_3_2::HasDOMParentImpl
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentTypeImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMParentNode const * getParentNodeImpl(void) const override; // 1
      public: virtual class xercesc_3_2::DOMParentNode * getParentNodeImpl(void) override; // 2
      // VFTable with 16 offset end

      // VFTable. Offset=24, Size=3, Start=3
      // Corresponding base: xercesc_3_2::HasDOMChildImpl
      // Owner: SophisXML.dll
      // public: virtual ~DOMDocumentTypeImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMChildNode const * getChildNodeImpl(void) const override; // 1
      public: virtual class xercesc_3_2::DOMChildNode * getChildNodeImpl(void) override; // 2
      // VFTable with 24 offset end

    public:
    };

    class DOMElement
    {
    public:
    };

    class DOMEntity
    {
    public:
    };

    class DOMEntityReference
    {
    public:
    };

    class DOMError
    {
    public:
    };

    class/*or struct*/ DOMErrorHandler
    {
      // Functions:
      protected: DOMErrorHandler(void)
#if 0 // All found virtual functions names:
      public: virtual ~DOMErrorHandler(void)
#endif

      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class DOMException
    {
      // Functions:
      public: DOMException(class xercesc_3_2::DOMException const &)
      public: DOMException(short, short, class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~DOMException(void)
#endif

    public:
    };

    class DOMImplementation : public DOMImplementationLS
    {
      // Functions:
      protected: DOMImplementation(void)
#if 0 // All found virtual functions names:
      public: virtual ~DOMImplementation(void)
#endif

    public:
    };

    class DOMImplementationLS
    {
    public:
    };

    class/*or struct*/ DOMImplementationRegistry
    {
      // Static functions:
      public: static void addSource(class xercesc_3_2::DOMImplementationSource *)
      public: static class xercesc_3_2::DOMImplementation * getDOMImplementation(char16_t const *)
    public:
    };

    class DOMImplementationSource
    {
      // Functions:
      protected: DOMImplementationSource(void)
#if 0 // All found virtual functions names:
      public: virtual ~DOMImplementationSource(void)
#endif

      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual ~DOMImplementationSource(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      // VFTable with 0 offset end

    public:
    };

    class DOMLSInput
    {
    public:
    };

    class DOMLSOutput
    {
      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ DOMLSOutputImpl : public XMemory, public DOMLSOutput
    {
      // Functions:
      public: DOMLSOutputImpl(class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~DOMLSOutputImpl(void)
      public: virtual class xercesc_3_2::XMLFormatTarget * getByteStream(void) const
      public: virtual char16_t const * getEncoding(void) const
      public: virtual char16_t const * getSystemId(void) const
      public: virtual void release(void)
      public: virtual void setByteStream(class xercesc_3_2::XMLFormatTarget *)
      public: virtual void setEncoding(char16_t const *const)
      public: virtual void setSystemId(char16_t const *const)
#endif

      // VFTable. Offset=0, Size=8, Start=0
      // Corresponding base: xercesc_3_2::DOMLSOutput
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~DOMLSOutputImpl(void); // 0
      public: virtual class xercesc_3_2::XMLFormatTarget * getByteStream(void) const; // 1
      public: virtual char16_t const * getEncoding(void) const; // 2
      public: virtual char16_t const * getSystemId(void) const; // 3
      public: virtual void setByteStream(class xercesc_3_2::XMLFormatTarget *); // 4
      public: virtual void setEncoding(char16_t const *const); // 5
      public: virtual void setSystemId(char16_t const *const); // 6
      public: virtual void release(void); // 7
      // VFTable with 0 offset end

    public:
    };

    class DOMLSParser
    {
    public:
      // Enumerations:
      enum ActionType : int {
      };

      // VFTable. Offset=0, Size=21, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMConfiguration * getDomConfig(void); // 1 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::DOMLSParserFilter const * getFilter(void) const; // 2 (xercesc_3_2::DOMLSParserImpl)
      public: virtual bool getAsync(void) const; // 3 (xercesc_3_2::DOMLSParserImpl)
      public: virtual bool getBusy(void) const; // 4 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void setFilter(class xercesc_3_2::DOMLSParserFilter *const); // 5 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::DOMDocument * parse(class xercesc_3_2::DOMLSInput const *); // 6 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char const *const); // 7 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char16_t const *const); // 8 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::DOMNode * parseWithContext(class xercesc_3_2::DOMLSInput const *, class xercesc_3_2::DOMNode *, enum xercesc_3_2::DOMLSParser::ActionType); // 9 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void abort(void); // 10 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void release(void); // 11 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void resetDocumentPool(void); // 12 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char const *const, enum xercesc_3_2::Grammar::GrammarType, bool); // 13 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char16_t const *const, enum xercesc_3_2::Grammar::GrammarType, bool); // 14 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::Grammar * loadGrammar(class xercesc_3_2::DOMLSInput const *, enum xercesc_3_2::Grammar::GrammarType, bool); // 15 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::Grammar * getGrammar(char16_t const *const) const; // 16 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::Grammar * getRootGrammar(void) const; // 17 (xercesc_3_2::DOMLSParserImpl)
      public: virtual char16_t const * getURIText(unsigned int) const; // 18 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void resetCachedGrammarPool(void); // 19 (xercesc_3_2::DOMLSParserImpl)
      public: virtual unsigned __int64 getSrcOffset(void) const; // 20 (xercesc_3_2::DOMLSParserImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMLSParserFilter
    {
    public:
    };

    class/*or struct*/ DOMLSParserImpl : public AbstractDOMParser, public DOMLSParser, public DOMConfiguration
    {
      // Functions:
      public: DOMLSParserImpl(class xercesc_3_2::XMLValidator *const, class xercesc_3_2::MemoryManager *const, class xercesc_3_2::XMLGrammarPool *const)
#if 0 // All found virtual functions names:
      public: virtual ~DOMLSParserImpl(void)
      public: virtual void XMLDecl(char16_t const *const, char16_t const *const, char16_t const *const, char16_t const *const)
      public: virtual void abort(void)
      public: virtual bool canSetParameter(char16_t const *, void const *) const
      public: virtual bool canSetParameter(char16_t const *, bool) const
      public: virtual void docCharacters(char16_t const *const, unsigned __int64, bool)
      public: virtual void docComment(char16_t const *const)
      public: virtual void docPI(char16_t const *const, char16_t const *const)
      public: virtual void endElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, bool, char16_t const *const)
      public: virtual void endInputSource(class xercesc_3_2::InputSource const &)
      public: virtual void error(unsigned int, char16_t const *const, enum xercesc_3_2::XMLErrorReporter::ErrTypes, char16_t const *const, char16_t const *const, char16_t const *const, unsigned __int64, unsigned __int64)
      public: virtual bool expandSystemId(char16_t const *const, class xercesc_3_2::XMLBuffer &)
      public: virtual bool getAsync(void) const
      public: virtual bool getBusy(void) const
      public: virtual class xercesc_3_2::DOMConfiguration * getDomConfig(void)
      public: virtual class xercesc_3_2::DOMLSParserFilter const * getFilter(void) const
      public: virtual class xercesc_3_2::Grammar * getGrammar(char16_t const *const) const
      public: virtual void const * getParameter(char16_t const *) const
      public: virtual class xercesc_3_2::DOMStringList const * getParameterNames(void) const
      public: virtual class xercesc_3_2::Grammar * getRootGrammar(void) const
      public: virtual unsigned __int64 getSrcOffset(void) const
      public: virtual char16_t const * getURIText(unsigned int) const
      public: virtual class xercesc_3_2::Grammar * loadGrammar(class xercesc_3_2::DOMLSInput const *, enum xercesc_3_2::Grammar::GrammarType, bool)
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char const *const, enum xercesc_3_2::Grammar::GrammarType, bool)
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char16_t const *const, enum xercesc_3_2::Grammar::GrammarType, bool)
      public: virtual class xercesc_3_2::DOMDocument * parse(class xercesc_3_2::DOMLSInput const *)
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char const *const)
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char16_t const *const)
      public: virtual class xercesc_3_2::DOMNode * parseWithContext(class xercesc_3_2::DOMLSInput const *, class xercesc_3_2::DOMNode *, enum xercesc_3_2::DOMLSParser::ActionType)
      public: virtual void release(void)
      public: virtual void resetCachedGrammarPool(void)
      public: virtual void resetDocumentPool(void)
      public: virtual void resetEntities(void)
      public: virtual void resetErrors(void)
      public: virtual class xercesc_3_2::InputSource * resolveEntity(class xercesc_3_2::XMLResourceIdentifier *)
      public: virtual void setFilter(class xercesc_3_2::DOMLSParserFilter *const)
      public: virtual void setParameter(char16_t const *, void const *)
      public: virtual void setParameter(char16_t const *, bool)
      public: virtual void startDocument(void)
      public: virtual void startElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, char16_t const *const, class xercesc_3_2::RefVectorOf<class xercesc_3_2::XMLAttr> const &, unsigned __int64, bool, bool)
      public: virtual void startEntityReference(class xercesc_3_2::XMLEntityDecl const &)
      public: virtual void startInputSource(class xercesc_3_2::InputSource const &)
#endif

      // Warning: Greater base vftable size!
      // VFTable. Offset=0, Size=13, Start=20
      // Corresponding base: xercesc_3_2::AbstractDOMParser
      // public: virtual ~DOMLSParserImpl(void); // 0
      // Overrides:
      public: virtual void docCharacters(char16_t const *const, unsigned __int64, bool) override; // 1
      public: virtual void docComment(char16_t const *const) override; // 2
      public: virtual void docPI(char16_t const *const, char16_t const *const) override; // 3
      public: virtual void endElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, bool, char16_t const *const) override; // 5
      public: virtual void startDocument(void) override; // 9
      public: virtual void startElement(class xercesc_3_2::XMLElementDecl const &, unsigned int, char16_t const *const, class xercesc_3_2::RefVectorOf<class xercesc_3_2::XMLAttr> const &, unsigned __int64, bool, bool) override; // 10
      public: virtual void startEntityReference(class xercesc_3_2::XMLEntityDecl const &) override; // 11
      public: virtual void XMLDecl(char16_t const *const, char16_t const *const, char16_t const *const, char16_t const *const) override; // 12
      // VFTable with 0 offset end

      // VFTable. Offset=8, Size=3, Start=3
      // Corresponding base: xercesc_3_2::XMLErrorReporter
      // public: virtual ~DOMLSParserImpl(void); // 0
      // Overrides:
      public: virtual void error(unsigned int, char16_t const *const, enum xercesc_3_2::XMLErrorReporter::ErrTypes, char16_t const *const, char16_t const *const, char16_t const *const, unsigned __int64, unsigned __int64) override; // 1
      public: virtual void resetErrors(void) override; // 2
      // VFTable with 8 offset end

      // VFTable. Offset=16, Size=6, Start=6
      // Corresponding base: xercesc_3_2::XMLEntityHandler
      // public: virtual ~DOMLSParserImpl(void); // 0
      // Overrides:
      public: virtual void endInputSource(class xercesc_3_2::InputSource const &) override; // 1
      public: virtual bool expandSystemId(char16_t const *const, class xercesc_3_2::XMLBuffer &) override; // 2
      public: virtual void resetEntities(void) override; // 3
      public: virtual class xercesc_3_2::InputSource * resolveEntity(class xercesc_3_2::XMLResourceIdentifier *) override; // 4
      public: virtual void startInputSource(class xercesc_3_2::InputSource const &) override; // 5
      // VFTable with 16 offset end

      // VFTable. Offset=192, Size=21, Start=21
      // Corresponding base: xercesc_3_2::DOMLSParser
      // public: virtual ~DOMLSParserImpl(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::DOMConfiguration * getDomConfig(void) override; // 1
      public: virtual class xercesc_3_2::DOMLSParserFilter const * getFilter(void) const override; // 2
      public: virtual bool getAsync(void) const override; // 3
      public: virtual bool getBusy(void) const override; // 4
      public: virtual void setFilter(class xercesc_3_2::DOMLSParserFilter *const) override; // 5
      public: virtual class xercesc_3_2::DOMDocument * parse(class xercesc_3_2::DOMLSInput const *) override; // 6
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char const *const) override; // 7
      public: virtual class xercesc_3_2::DOMDocument * parseURI(char16_t const *const) override; // 8
      public: virtual class xercesc_3_2::DOMNode * parseWithContext(class xercesc_3_2::DOMLSInput const *, class xercesc_3_2::DOMNode *, enum xercesc_3_2::DOMLSParser::ActionType) override; // 9
      public: virtual void abort(void) override; // 10
      public: virtual void release(void) override; // 11
      public: virtual void resetDocumentPool(void) override; // 12
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char const *const, enum xercesc_3_2::Grammar::GrammarType, bool) override; // 13
      public: virtual class xercesc_3_2::Grammar * loadGrammar(char16_t const *const, enum xercesc_3_2::Grammar::GrammarType, bool) override; // 14
      public: virtual class xercesc_3_2::Grammar * loadGrammar(class xercesc_3_2::DOMLSInput const *, enum xercesc_3_2::Grammar::GrammarType, bool) override; // 15
      public: virtual class xercesc_3_2::Grammar * getGrammar(char16_t const *const) const override; // 16
      public: virtual class xercesc_3_2::Grammar * getRootGrammar(void) const override; // 17
      public: virtual char16_t const * getURIText(unsigned int) const override; // 18
      public: virtual void resetCachedGrammarPool(void) override; // 19
      public: virtual unsigned __int64 getSrcOffset(void) const override; // 20
      // VFTable with 192 offset end

      // Warning: Greater base vftable size!
      // VFTable. Offset=200, Size=6, Start=7
      // Corresponding base: xercesc_3_2::DOMConfiguration
      // Overrides:
      public: virtual void setParameter(char16_t const *, bool) override; // 0
      public: virtual void setParameter(char16_t const *, void const *) override; // 1
      public: virtual void const * getParameter(char16_t const *) const override; // 2
      public: virtual bool canSetParameter(char16_t const *, bool) const override; // 3
      public: virtual bool canSetParameter(char16_t const *, void const *) const override; // 4
      public: virtual class xercesc_3_2::DOMStringList const * getParameterNames(void) const override; // 5
      // VFTable with 200 offset end

    public:
    };

    class DOMLSSerializer
    {
      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class DOMLSSerializerFilter
    {
    public:
    };

    class/*or struct*/ DOMLSSerializerImpl : public XMemory, public DOMLSSerializer, public DOMConfiguration
    {
      // Functions:
      public: DOMLSSerializerImpl(class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~DOMLSSerializerImpl(void)
      public: virtual bool canSetParameter(char16_t const *, void const *) const
      public: virtual bool canSetParameter(char16_t const *, bool) const
      protected: virtual bool customNodeSerialize(class xercesc_3_2::DOMNode const *const, int)
      public: virtual class xercesc_3_2::DOMConfiguration * getDomConfig(void)
      public: virtual class xercesc_3_2::DOMLSSerializerFilter * getFilter(void) const
      public: virtual char16_t const * getNewLine(void) const
      public: virtual void const * getParameter(char16_t const *) const
      public: virtual class xercesc_3_2::DOMStringList const * getParameterNames(void) const
      public: virtual void release(void)
      public: virtual void setFilter(class xercesc_3_2::DOMLSSerializerFilter *)
      public: virtual void setNewLine(char16_t const *const)
      public: virtual void setParameter(char16_t const *, void const *)
      public: virtual void setParameter(char16_t const *, bool)
      public: virtual bool write(class xercesc_3_2::DOMNode const *, class xercesc_3_2::DOMLSOutput *const)
      public: virtual char16_t * writeToString(class xercesc_3_2::DOMNode const *, class xercesc_3_2::MemoryManager *)
      public: virtual bool writeToURI(class xercesc_3_2::DOMNode const *, char16_t const *)
#endif

      // VFTable. Offset=0, Size=11, Start=0
      // Corresponding base: xercesc_3_2::DOMLSSerializer
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~DOMLSSerializerImpl(void); // 0
      public: virtual class xercesc_3_2::DOMConfiguration * getDomConfig(void); // 1
      public: virtual void setNewLine(char16_t const *const); // 2
      public: virtual void setFilter(class xercesc_3_2::DOMLSSerializerFilter *); // 3
      public: virtual char16_t const * getNewLine(void) const; // 4
      public: virtual class xercesc_3_2::DOMLSSerializerFilter * getFilter(void) const; // 5
      public: virtual bool write(class xercesc_3_2::DOMNode const *, class xercesc_3_2::DOMLSOutput *const); // 6
      public: virtual bool writeToURI(class xercesc_3_2::DOMNode const *, char16_t const *); // 7
      public: virtual char16_t * writeToString(class xercesc_3_2::DOMNode const *, class xercesc_3_2::MemoryManager *); // 8
      public: virtual void release(void); // 9
      protected: virtual bool customNodeSerialize(class xercesc_3_2::DOMNode const *const, int); // 10
      // VFTable with 0 offset end

      // VFTable. Offset=8, Size=7, Start=7
      // Corresponding base: xercesc_3_2::DOMConfiguration
      // Owner: SophisXML.dll
      // Overrides:
      public: virtual void setParameter(char16_t const *, bool) override; // 0
      public: virtual void setParameter(char16_t const *, void const *) override; // 1
      public: virtual void const * getParameter(char16_t const *) const override; // 2
      public: virtual bool canSetParameter(char16_t const *, bool) const override; // 3
      public: virtual bool canSetParameter(char16_t const *, void const *) const override; // 4
      public: virtual class xercesc_3_2::DOMStringList const * getParameterNames(void) const override; // 5
      // VFTable with 8 offset end

    public:
    };

    class/*or struct*/ DOMMemoryManager
    {
    public:
      // Enumerations:
      enum NodeObjectType : int {
      };

      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class DOMNamedNodeMap
    {
    public:
    };

    class DOMNode
    {
    public:
      // Enumerations:
      enum NodeType : int {
      };

      // VFTable. Offset=0, Size=39, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual char16_t const * getNodeName(void) const; // 1 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getNodeValue(void) const; // 2 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual enum xercesc_3_2::DOMNode::NodeType getNodeType(void) const; // 3 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * getParentNode(void) const; // 4 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNodeList * getChildNodes(void) const; // 5 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * getFirstChild(void) const; // 6 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * getLastChild(void) const; // 7 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * getPreviousSibling(void) const; // 8 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * getNextSibling(void) const; // 9 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNamedNodeMap * getAttributes(void) const; // 10 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMDocument * getOwnerDocument(void) const; // 11 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * cloneNode(bool) const; // 12 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * insertBefore(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *); // 13 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * replaceChild(class xercesc_3_2::DOMNode *, class xercesc_3_2::DOMNode *); // 14 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * removeChild(class xercesc_3_2::DOMNode *); // 15 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNode * appendChild(class xercesc_3_2::DOMNode *); // 16 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool hasChildNodes(void) const; // 17 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void setNodeValue(char16_t const *); // 18 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void normalize(void); // 19 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool isSupported(char16_t const *, char16_t const *) const; // 20 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getNamespaceURI(void) const; // 21 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getPrefix(void) const; // 22 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getLocalName(void) const; // 23 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void setPrefix(char16_t const *); // 24 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool hasAttributes(void) const; // 25 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool isSameNode(class xercesc_3_2::DOMNode const *) const; // 26 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool isEqualNode(class xercesc_3_2::DOMNode const *) const; // 27 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void * setUserData(char16_t const *, void *, class xercesc_3_2::DOMUserDataHandler *); // 28 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void * getUserData(char16_t const *) const; // 29 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getBaseURI(void) const; // 30 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual short compareDocumentPosition(class xercesc_3_2::DOMNode const *) const; // 31 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * getTextContent(void) const; // 32 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void setTextContent(char16_t const *); // 33 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * lookupPrefix(char16_t const *) const; // 34 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual bool isDefaultNamespace(char16_t const *) const; // 35 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual char16_t const * lookupNamespaceURI(char16_t const *) const; // 36 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void * getFeature(char16_t const *, char16_t const *) const; // 37 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual void release(void); // 38 (xercesc_3_2::DOMDocumentTypeImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMNodeFilter
    {
    public:
    };

    class DOMNodeImpl
    {
    public:
    };

    class DOMNodeIterator
    {
    public:
    };

    class DOMNodeIteratorImpl
    {
    public:
    };

    class DOMNodeList
    {
    public:
    };

    class DOMNotation
    {
    public:
    };

    class/*or struct*/ DOMPSVITypeInfo
    {
    public:
      // Enumerations:
      enum PSVIProperty : int {
      };

      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual char16_t const * getStringProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const; // 1 (xercesc_3_2::DOMTypeInfoImpl)
      public: virtual int getNumericProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const; // 2 (xercesc_3_2::DOMTypeInfoImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMParentNode
    {
    public:
    };

    class DOMProcessingInstruction
    {
    public:
    };

    class DOMRange
    {
    public:
    };

    class DOMRangeImpl
    {
    public:
    };

    class DOMStringList
    {
    public:
    };

    class DOMText
    {
    public:
    };

    class DOMTreeWalker
    {
    public:
    };

    class/*or struct*/ DOMTypeInfo
    {
    public:
      // Enumerations:
      enum DerivationMethods : int {
      };

      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ DOMTypeInfoImpl : public DOMTypeInfo, public DOMPSVITypeInfo
    {
      // Functions:
      public: DOMTypeInfoImpl(char16_t const *, char16_t const *)
#if 0 // All found virtual functions names:
      public: virtual ~DOMTypeInfoImpl(void)
      public: virtual int getNumericProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const
      public: virtual char16_t const * getStringProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const
      public: virtual char16_t const * getTypeName(void) const
      public: virtual char16_t const * getTypeNamespace(void) const
      public: virtual bool isDerivedFrom(char16_t const *, char16_t const *, enum xercesc_3_2::DOMTypeInfo::DerivationMethods) const
      public: virtual void setNumericProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty, int)
      public: virtual void setStringProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty, char16_t const *)
#endif

      // VFTable. Offset=0, Size=6, Start=0
      // Corresponding base: xercesc_3_2::DOMTypeInfo
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~DOMTypeInfoImpl(void); // 0
      public: virtual char16_t const * getTypeName(void) const; // 1
      public: virtual char16_t const * getTypeNamespace(void) const; // 2
      public: virtual bool isDerivedFrom(char16_t const *, char16_t const *, enum xercesc_3_2::DOMTypeInfo::DerivationMethods) const; // 3
      public: virtual void setStringProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty, char16_t const *); // 4
      public: virtual void setNumericProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty, int); // 5
      // VFTable with 0 offset end

      // VFTable. Offset=8, Size=3, Start=3
      // Corresponding base: xercesc_3_2::DOMPSVITypeInfo
      // Owner: SophisXML.dll
      // public: virtual ~DOMTypeInfoImpl(void); // 0
      // Overrides:
      public: virtual char16_t const * getStringProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const override; // 1
      public: virtual int getNumericProperty(enum xercesc_3_2::DOMPSVITypeInfo::PSVIProperty) const override; // 2
      // VFTable with 8 offset end

    public:
    };

    class DOMUserDataHandler
    {
    public:
    };

    class/*or struct*/ DOMXPathEvaluator
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMXPathExpression * createExpression(char16_t const *, class xercesc_3_2::DOMXPathNSResolver const *); // 1 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMXPathNSResolver * createNSResolver(class xercesc_3_2::DOMNode const *); // 2 (xercesc_3_2::DOMDocumentImpl)
      public: virtual class xercesc_3_2::DOMXPathResult * evaluate(char16_t const *, class xercesc_3_2::DOMNode const *, class xercesc_3_2::DOMXPathNSResolver const *, enum xercesc_3_2::DOMXPathResult::ResultType, class xercesc_3_2::DOMXPathResult *); // 3 (xercesc_3_2::DOMDocumentImpl)
      // VFTable with 0 offset end

    public:
    };

    class DOMXPathExpression
    {
    public:
    };

    class DOMXPathNSResolver
    {
    public:
    };

    class DOMXPathResult
    {
    public:
      // Enumerations:
      enum ResultType : int {
      };

    public:
    };

    class DTDAttDef
    {
    public:
    };

    class DTDElementDecl
    {
    public:
    };

    class DTDEntityDecl
    {
    public:
    };

    class DTDGrammar
    {
    public:
    };

    class DatatypeValidator
    {
      // Functions:
      public: char16_t const * getTypeLocalName(void) const
      public: char16_t const * getTypeName(void) const
    public:
    };

    class/*or struct*/ DocTypeHandler
    {
      // VFTable. Offset=0, Size=17, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void attDef(class xercesc_3_2::DTDElementDecl const &, class xercesc_3_2::DTDAttDef const &, bool); // 1 (xercesc_3_2::AbstractDOMParser)
      public: virtual void doctypeComment(char16_t const *const); // 2 (xercesc_3_2::AbstractDOMParser)
      public: virtual void doctypeDecl(class xercesc_3_2::DTDElementDecl const &, char16_t const *const, char16_t const *const, bool, bool); // 3 (xercesc_3_2::AbstractDOMParser)
      public: virtual void doctypePI(char16_t const *const, char16_t const *const); // 4 (xercesc_3_2::AbstractDOMParser)
      public: virtual void doctypeWhitespace(char16_t const *const, unsigned __int64); // 5 (xercesc_3_2::AbstractDOMParser)
      public: virtual void elementDecl(class xercesc_3_2::DTDElementDecl const &, bool); // 6 (xercesc_3_2::AbstractDOMParser)
      public: virtual void endAttList(class xercesc_3_2::DTDElementDecl const &); // 7 (xercesc_3_2::AbstractDOMParser)
      public: virtual void endIntSubset(void); // 8 (xercesc_3_2::AbstractDOMParser)
      public: virtual void endExtSubset(void); // 9 (xercesc_3_2::AbstractDOMParser)
      public: virtual void entityDecl(class xercesc_3_2::DTDEntityDecl const &, bool, bool); // 10 (xercesc_3_2::AbstractDOMParser)
      public: virtual void resetDocType(void); // 11 (xercesc_3_2::AbstractDOMParser)
      public: virtual void notationDecl(class xercesc_3_2::XMLNotationDecl const &, bool); // 12 (xercesc_3_2::AbstractDOMParser)
      public: virtual void startAttList(class xercesc_3_2::DTDElementDecl const &); // 13 (xercesc_3_2::AbstractDOMParser)
      public: virtual void startIntSubset(void); // 14 (xercesc_3_2::AbstractDOMParser)
      public: virtual void startExtSubset(void); // 15 (xercesc_3_2::AbstractDOMParser)
      public: virtual void TextDecl(char16_t const *const, char16_t const *const); // 16 (xercesc_3_2::AbstractDOMParser)
      // VFTable with 0 offset end

    public:
    };

    class Grammar
    {
    public:
      // Enumerations:
      enum GrammarType : int {
      };

    public:
    };

    class/*or struct*/ HasDOMChildImpl
    {
      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMChildNode const * getChildNodeImpl(void) const; // 1 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMChildNode * getChildNodeImpl(void); // 2 (xercesc_3_2::DOMDocumentTypeImpl)
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ HasDOMNodeImpl
    {
      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMNodeImpl const * getNodeImpl(void) const; // 1 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMNodeImpl * getNodeImpl(void); // 2 (xercesc_3_2::DOMDocumentTypeImpl)
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ HasDOMParentImpl
    {
      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual class xercesc_3_2::DOMParentNode const * getParentNodeImpl(void) const; // 1 (xercesc_3_2::DOMDocumentTypeImpl)
      public: virtual class xercesc_3_2::DOMParentNode * getParentNodeImpl(void); // 2 (xercesc_3_2::DOMDocumentTypeImpl)
      // VFTable with 0 offset end

    public:
    };

    class InputSource : public XMemory
    {
      // Functions:
      protected: InputSource(class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~InputSource(void)
      public: virtual char16_t const * getEncoding(void) const
      public: virtual bool getIssueFatalErrorIfNotFound(void) const
      public: virtual char16_t const * getPublicId(void) const
      public: virtual char16_t const * getSystemId(void) const
      public: virtual void setEncoding(char16_t const *const)
      public: virtual void setIssueFatalErrorIfNotFound(bool)
      public: virtual void setPublicId(char16_t const *const)
      public: virtual void setSystemId(char16_t const *const)
#endif

      // VFTable. Offset=0, Size=10, Start=0
      // Added virtual functions:
      public: virtual ~InputSource(void); // 0
      public: virtual class xercesc_3_2::BinInputStream * makeStream(void) const; // 1 (xercesc_3_2::MemBufInputSource)
      public: virtual char16_t const * getEncoding(void) const; // 2
      public: virtual char16_t const * getPublicId(void) const; // 3
      public: virtual char16_t const * getSystemId(void) const; // 4
      public: virtual bool getIssueFatalErrorIfNotFound(void) const; // 5
      public: virtual void setEncoding(char16_t const *const); // 6
      public: virtual void setPublicId(char16_t const *const); // 7
      public: virtual void setSystemId(char16_t const *const); // 8
      public: virtual void setIssueFatalErrorIfNotFound(bool); // 9
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ MemBufInputSource : public InputSource
    {
      // Functions:
      public: MemBufInputSource(unsigned char const *const, unsigned __int64, char const *const, bool, class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~MemBufInputSource(void)
      public: virtual class xercesc_3_2::BinInputStream * makeStream(void) const
#endif

      // VFTable. Offset=0, Size=10, Start=10
      // Corresponding base: xercesc_3_2::InputSource
      // Owner: SophisXML.dll
      // public: virtual ~MemBufInputSource(void); // 0
      // Overrides:
      public: virtual class xercesc_3_2::BinInputStream * makeStream(void) const override; // 1
      // VFTable with 0 offset end

    public:
    };

    class MemoryManager
    {
      // Functions:
      protected: MemoryManager(void)
#if 0 // All found virtual functions names:
      public: virtual ~MemoryManager(void)
#endif

      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class NoSuchElementException
    {
      // Functions:
      public: NoSuchElementException(class xercesc_3_2::NoSuchElementException const &)
      public: NoSuchElementException(char const *const, unsigned __int64, enum xercesc_3_2::XMLExcepts::Codes, class xercesc_3_2::MemoryManager *)
#if 0 // All found virtual functions names:
      public: virtual ~NoSuchElementException(void)
#endif

    public:
    };

    class NullPointerException
    {
      // Functions:
      public: NullPointerException(class xercesc_3_2::NullPointerException const &)
      public: NullPointerException(char const *const, unsigned __int64, enum xercesc_3_2::XMLExcepts::Codes, class xercesc_3_2::MemoryManager *)
#if 0 // All found virtual functions names:
      public: virtual ~NullPointerException(void)
#endif

    public:
    };

    class/*or struct*/ OutOfMemoryException
    {
      // Functions:
      public: char16_t const * getMessage(void) const
    public:
    };

    class PSVIAttributeList
    {
    public:
    };

    class PSVIElement
    {
    public:
    };

    class PSVIHandler
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void handleElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *); // 1 (xercesc_3_2::AbstractDOMParser)
      public: virtual void handlePartialElementPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIElement *); // 2 (xercesc_3_2::AbstractDOMParser)
      public: virtual void handleAttributesPSVI(char16_t const *const, char16_t const *const, class xercesc_3_2::PSVIAttributeList *); // 3 (xercesc_3_2::AbstractDOMParser)
      // VFTable with 0 offset end

    public:
    };

    class PanicHandler
    {
    public:
    };

    class QName
    {
      // Functions:
      public: char16_t * getLocalPart(void)
      public: unsigned int getURI(void) const
    public:
    };

    template<typename T0, typename T2    >
    class/*or struct*/ RefHash2KeysTableOfEnumerator
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>, struct xercesc_3_2::StringHasher>
#if 0
    template<>
    class/*or struct*/ RefHash2KeysTableOfEnumerator<class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>, struct xercesc_3_2::StringHasher> : public XMLEnumerator<class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>>, public XMemory
    {
      // VFTable. Offset=0, Size=4, Start=4
      // Corresponding base: XMLEnumerator::XMLEnumerator::XMLEnumerator<class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class RefHash3KeysIdPoolEnumerator
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::SchemaElementDecl, struct xercesc_3_2::StringHasher>
#if 0
    template<>
    class RefHash3KeysIdPoolEnumerator<class xercesc_3_2::SchemaElementDecl, struct xercesc_3_2::StringHasher> : public XMLEnumerator<class xercesc_3_2::SchemaElementDecl>, public XMemory
    {
      // VFTable. Offset=0, Size=4, Start=4
      // Corresponding base: XMLEnumerator::XMLEnumerator::XMLEnumerator<class xercesc_3_2::SchemaElementDecl>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class RefHashTableOfEnumerator
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::ComplexTypeInfo, struct xercesc_3_2::StringHasher>
#if 0
    template<>
    class/*or struct*/ RefHashTableOfEnumerator<class xercesc_3_2::ComplexTypeInfo, struct xercesc_3_2::StringHasher> : public XMLEnumerator<class xercesc_3_2::ComplexTypeInfo>, public XMemory
    {
      // VFTable. Offset=0, Size=4, Start=4
      // Corresponding base: XMLEnumerator::XMLEnumerator::XMLEnumerator<class xercesc_3_2::ComplexTypeInfo>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::DatatypeValidator, struct xercesc_3_2::StringHasher>
#if 0
    template<>
    class/*or struct*/ RefHashTableOfEnumerator<class xercesc_3_2::DatatypeValidator, struct xercesc_3_2::StringHasher> : public XMLEnumerator<class xercesc_3_2::DatatypeValidator>, public XMemory
    {
      // VFTable. Offset=0, Size=4, Start=4
      // Corresponding base: XMLEnumerator::XMLEnumerator::XMLEnumerator<class xercesc_3_2::DatatypeValidator>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::Grammar, struct xercesc_3_2::StringHasher>
#if 0
    template<>
    class RefHashTableOfEnumerator<class xercesc_3_2::Grammar, struct xercesc_3_2::StringHasher> : public XMLEnumerator<class xercesc_3_2::Grammar>, public XMemory
    {
      // VFTable. Offset=0, Size=4, Start=4
      // Corresponding base: XMLEnumerator::XMLEnumerator::XMLEnumerator<class xercesc_3_2::Grammar>
      // Owner: SophisXML.dll
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    template<typename T1    >
    class RefVectorOf
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::DOMNodeIteratorImpl>
#if 0
    template<>
    class RefVectorOf<class xercesc_3_2::DOMNodeIteratorImpl>
    {
    public:
    };
#endif
// <class xercesc_3_2::DOMRangeImpl>
#if 0
    template<>
    class RefVectorOf<class xercesc_3_2::DOMRangeImpl>
    {
    public:
    };
#endif
// <class xercesc_3_2::XMLAttr>
#if 0
    template<>
    class RefVectorOf<class xercesc_3_2::XMLAttr>
    {
    public:
    };
#endif
#endif


    class SchemaElementDecl
    {
      // Functions:
      public: class xercesc_3_2::ComplexTypeInfo * getComplexTypeInfo(void) const
    public:
    };

    class SchemaGrammar
    {
      // Functions:
      public: class xercesc_3_2::RefHash3KeysIdPoolEnumerator<class xercesc_3_2::SchemaElementDecl, struct xercesc_3_2::StringHasher> getElemEnumerator(void) const
    public:
    };

    namespace/*or class/struct?*/ SchemaSymbols
    {
      // Variables:
      public: static char16_t const *const fgATTVAL_ANYTYPE
      public: static char16_t const *const fgATT_NILL
      public: static char16_t const *const fgDT_ANYSIMPLETYPE
      public: static char16_t const *const fgDT_ANYURI
      public: static char16_t const *const fgDT_BASE64BINARY
      public: static char16_t const *const fgDT_BOOLEAN
      public: static char16_t const *const fgDT_BYTE
      public: static char16_t const *const fgDT_DATE
      public: static char16_t const *const fgDT_DATETIME
      public: static char16_t const *const fgDT_DECIMAL
      public: static char16_t const *const fgDT_DOUBLE
      public: static char16_t const *const fgDT_FLOAT
      public: static char16_t const *const fgDT_INT
      public: static char16_t const *const fgDT_INTEGER
      public: static char16_t const *const fgDT_LONG
      public: static char16_t const *const fgDT_MONTHDAY
      public: static char16_t const *const fgDT_NAME
      public: static char16_t const *const fgDT_NCNAME
      public: static char16_t const *const fgDT_NEGATIVEINTEGER
      public: static char16_t const *const fgDT_NONNEGATIVEINTEGER
      public: static char16_t const *const fgDT_NONPOSITIVEINTEGER
      public: static char16_t const *const fgDT_NORMALIZEDSTRING
      public: static char16_t const *const fgDT_POSITIVEINTEGER
      public: static char16_t const *const fgDT_QNAME
      public: static char16_t const *const fgDT_SHORT
      public: static char16_t const *const fgDT_STRING
      public: static char16_t const *const fgDT_TIME
      public: static char16_t const *const fgDT_UBYTE
      public: static char16_t const *const fgDT_UINT
      public: static char16_t const *const fgDT_ULONG
      public: static char16_t const *const fgDT_USHORT
      public: static char16_t const *const fgDT_YEARMONTH
      public: static char16_t const *const fgELT_ALL
      public: static char16_t const *const fgELT_ATTRIBUTE
      public: static char16_t const *const fgELT_ATTRIBUTEGROUP
      public: static char16_t const *const fgELT_COMPLEXCONTENT
      public: static char16_t const *const fgELT_COMPLEXTYPE
      public: static char16_t const *const fgELT_ELEMENT
      public: static char16_t const *const fgELT_ENUMERATION
      public: static char16_t const *const fgELT_EXTENSION
      public: static char16_t const *const fgELT_IMPORT
      public: static char16_t const *const fgELT_RESTRICTION
      public: static char16_t const *const fgELT_SEQUENCE
      public: static char16_t const *const fgELT_SIMPLECONTENT
      public: static char16_t const *const fgELT_SIMPLETYPE
      public: static char16_t const *const fgURI_SCHEMAFORSCHEMA
      public: static char16_t const *const fgURI_XSI
      public: static char16_t const *const fgXSI_TYPE
    };

    struct StringHasher
    {
    public:
    };

    template<typename T1    >
    class ValueVectorOf
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::SchemaElementDecl *>
#if 0
    template<>
    class ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ Wrapper4InputSource
    {
      // Functions:
      public: Wrapper4InputSource(class xercesc_3_2::InputSource *const, bool, class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~Wrapper4InputSource(void)
#endif

    public:
    };

    class XMLAttr
    {
    public:
    };

    class XMLBigInteger
    {
      // Functions:
      public: XMLBigInteger(char16_t const *const, class xercesc_3_2::MemoryManager *const)
      public: ~XMLBigInteger(void)
      public: char16_t * getRawData(void) const
      // Static functions:
      public: static int compareValues(class xercesc_3_2::XMLBigInteger const *const, class xercesc_3_2::XMLBigInteger const *const, class xercesc_3_2::MemoryManager *const)
    public:
    };

    class XMLBuffer
    {
    public:
    };

    class/*or struct*/ XMLChar1_0
    {
      // Static functions:
      public: static bool isValidName(char16_t const *const, unsigned __int64)
    public:
    };

    class/*or struct*/ XMLChar1_1
    {
      // Static functions:
      public: static bool isFirstNameChar(char16_t, char16_t)
      public: static bool isNameChar(char16_t, char16_t)
      public: static bool isValidNCName(char16_t const *const, unsigned __int64)
      public: static bool isValidName(char16_t const *const, unsigned __int64)
      public: static bool isValidQName(char16_t const *const, unsigned __int64)
    public:
    };

    class XMLDTDDescription
    {
    public:
    };

    class/*or struct*/ XMLDocumentHandler
    {
      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class XMLElementDecl
    {
      // Functions:
      public: class xercesc_3_2::QName * getElementName(void)
    public:
    };

    class XMLEntityDecl
    {
    public:
    };

    class/*or struct*/ XMLEntityHandler
    {
      // VFTable. Offset=0, Size=6, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void endInputSource(class xercesc_3_2::InputSource const &); // 1 (xercesc_3_2::DOMLSParserImpl)
      public: virtual bool expandSystemId(char16_t const *const, class xercesc_3_2::XMLBuffer &); // 2 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void resetEntities(void); // 3 (xercesc_3_2::DOMLSParserImpl)
      public: virtual class xercesc_3_2::InputSource * resolveEntity(class xercesc_3_2::XMLResourceIdentifier *); // 4 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void startInputSource(class xercesc_3_2::InputSource const &); // 5 (xercesc_3_2::DOMLSParserImpl)
      // VFTable with 0 offset end

    public:
    };

    template<typename T1    >
    class/*or struct*/ XMLEnumerator
    {
    public:
    };
#if 0 // Instances:
// <class xercesc_3_2::ComplexTypeInfo>
#if 0
    template<>
    class/*or struct*/ XMLEnumerator<class xercesc_3_2::ComplexTypeInfo>
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void) = 0; // 1
      public: virtual void unknown_vf_0_2(void) = 0; // 2
      public: virtual void unknown_vf_0_3(void) = 0; // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::DatatypeValidator>
#if 0
    template<>
    class/*or struct*/ XMLEnumerator<class xercesc_3_2::DatatypeValidator>
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void) = 0; // 1
      public: virtual void unknown_vf_0_2(void) = 0; // 2
      public: virtual void unknown_vf_0_3(void) = 0; // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::Grammar>
#if 0
    template<>
    class/*or struct*/ XMLEnumerator<class xercesc_3_2::Grammar>
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void) = 0; // 1
      public: virtual void unknown_vf_0_2(void) = 0; // 2
      public: virtual void unknown_vf_0_3(void) = 0; // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::SchemaElementDecl>
#if 0
    template<>
    class/*or struct*/ XMLEnumerator<class xercesc_3_2::SchemaElementDecl>
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void) = 0; // 1
      public: virtual void unknown_vf_0_2(void) = 0; // 2
      public: virtual void unknown_vf_0_3(void) = 0; // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>>
#if 0
    template<>
    class/*or struct*/ XMLEnumerator<class xercesc_3_2::ValueVectorOf<class xercesc_3_2::SchemaElementDecl *>>
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void) = 0; // 1
      public: virtual void unknown_vf_0_2(void) = 0; // 2
      public: virtual void unknown_vf_0_3(void) = 0; // 3
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    class/*or struct*/ XMLErrorReporter
    {
    public:
      // Enumerations:
      enum ErrTypes : int {
      };

      // VFTable. Offset=0, Size=3, Start=0
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void error(unsigned int, char16_t const *const, enum xercesc_3_2::XMLErrorReporter::ErrTypes, char16_t const *const, char16_t const *const, char16_t const *const, unsigned __int64, unsigned __int64); // 1 (xercesc_3_2::DOMLSParserImpl)
      public: virtual void resetErrors(void); // 2 (xercesc_3_2::DOMLSParserImpl)
      // VFTable with 0 offset end

    public:
    };

    class XMLException
    {
      // Functions:
      public: XMLException(class xercesc_3_2::XMLException const &)
      public: char16_t const * getMessage(void) const
    public:
    };

    namespace/*or class/struct?*/ XMLExcepts
    {
      // Enumerations:
      enum Codes : int {
      };

    };

    class XMLFormatTarget : public XMemory
    {
      // Functions:
      protected: XMLFormatTarget(void)
#if 0 // All found virtual functions names:
      public: virtual ~XMLFormatTarget(void)
#endif

    public:
    };

    class XMLGrammarDescription
    {
    public:
    };

    class XMLGrammarPool : public XMemory
    {
      // VFTable. Offset=0, Size=0, Start=0
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ XMLGrammarPoolImpl : public XMLGrammarPool
    {
      // Functions:
      public: XMLGrammarPoolImpl(class xercesc_3_2::MemoryManager *const)
#if 0 // All found virtual functions names:
      public: virtual ~XMLGrammarPoolImpl(void)
      public: virtual bool cacheGrammar(class xercesc_3_2::Grammar *const)
      public: virtual bool clear(void)
      public: virtual class xercesc_3_2::XMLDTDDescription * createDTDDescription(char16_t const *const)
      public: virtual class xercesc_3_2::DTDGrammar * createDTDGrammar(void)
      public: virtual class xercesc_3_2::XMLSchemaDescription * createSchemaDescription(char16_t const *const)
      public: virtual class xercesc_3_2::SchemaGrammar * createSchemaGrammar(void)
      private: virtual void createXSModel(void)
      public: virtual void deserializeGrammars(class xercesc_3_2::BinInputStream *const)
      public: virtual class xercesc_3_2::RefHashTableOfEnumerator<class xercesc_3_2::Grammar, struct xercesc_3_2::StringHasher> getGrammarEnumerator(void) const
      public: virtual class xercesc_3_2::XMLStringPool * getURIStringPool(void)
      public: virtual class xercesc_3_2::XSModel * getXSModel(bool &)
      public: virtual void lockPool(void)
      public: virtual class xercesc_3_2::Grammar * orphanGrammar(char16_t const *const)
      public: virtual class xercesc_3_2::Grammar * retrieveGrammar(class xercesc_3_2::XMLGrammarDescription *const)
      public: virtual void serializeGrammars(class xercesc_3_2::BinOutputStream *const)
      public: virtual void unlockPool(void)
#endif

      // VFTable. Offset=0, Size=17, Start=0
      // Corresponding base: xercesc_3_2::XMLGrammarPool
      // Owner: SophisXML.dll
      // Added virtual functions:
      public: virtual ~XMLGrammarPoolImpl(void); // 0
      public: virtual bool cacheGrammar(class xercesc_3_2::Grammar *const); // 1
      public: virtual class xercesc_3_2::Grammar * retrieveGrammar(class xercesc_3_2::XMLGrammarDescription *const); // 2
      public: virtual class xercesc_3_2::Grammar * orphanGrammar(char16_t const *const); // 3
      public: virtual class xercesc_3_2::RefHashTableOfEnumerator<class xercesc_3_2::Grammar, struct xercesc_3_2::StringHasher> getGrammarEnumerator(void) const; // 4
      public: virtual bool clear(void); // 5
      public: virtual void lockPool(void); // 6
      public: virtual void unlockPool(void); // 7
      public: virtual class xercesc_3_2::DTDGrammar * createDTDGrammar(void); // 8
      public: virtual class xercesc_3_2::SchemaGrammar * createSchemaGrammar(void); // 9
      public: virtual class xercesc_3_2::XMLDTDDescription * createDTDDescription(char16_t const *const); // 10
      public: virtual class xercesc_3_2::XMLSchemaDescription * createSchemaDescription(char16_t const *const); // 11
      public: virtual class xercesc_3_2::XSModel * getXSModel(bool &); // 12
      public: virtual class xercesc_3_2::XMLStringPool * getURIStringPool(void); // 13
      public: virtual void serializeGrammars(class xercesc_3_2::BinOutputStream *const); // 14
      public: virtual void deserializeGrammars(class xercesc_3_2::BinInputStream *const); // 15
      private: virtual void createXSModel(void); // 16
      // VFTable with 0 offset end

    public:
    };

    class XMLNotationDecl
    {
    public:
    };

    class/*or struct*/ XMLPlatformUtils
    {
      // Static functions:
      public: static void Initialize(char const *const, char const *const, class xercesc_3_2::PanicHandler *const, class xercesc_3_2::MemoryManager *const)
      public: static void Terminate(void)
      // Variables:
      public: static class xercesc_3_2::MemoryManager *fgMemoryManager
    public:
    };

    class XMLResourceIdentifier
    {
    public:
    };

    class XMLSchemaDescription
    {
    public:
    };

    class/*or struct*/ XMLString
    {
      // Static functions:
      public: static int compareIString(char16_t const *const, char16_t const *const)
      public: static int compareString(char16_t const *const, char16_t const *const)
      public: static bool equals(char16_t const *, char16_t const *)
      public: static unsigned __int64 hash(char16_t const *const, unsigned __int64)
      public: static int indexOf(char16_t const *const, char16_t)
      public: static bool isDigit(char16_t)
      public: static void release(char **, class xercesc_3_2::MemoryManager *const)
      public: static void release(char16_t **, class xercesc_3_2::MemoryManager *const)
      public: static bool startsWith(char16_t const *const, char16_t const *const)
      public: static unsigned __int64 stringLen(char const *const)
      public: static unsigned __int64 stringLen(char16_t const *const)
      public: static void subString(char16_t *const, char16_t const *const, unsigned __int64, unsigned __int64, class xercesc_3_2::MemoryManager *const)
      public: static char * transcode(char16_t const *const, class xercesc_3_2::MemoryManager *const)
      public: static char16_t * transcode(char const *const, class xercesc_3_2::MemoryManager *const)
      public: static bool transcode(char const *const, char16_t *const, unsigned __int64, class xercesc_3_2::MemoryManager *const)
      public: static void trim(char16_t *const)
    public:
    };

    class XMLStringPool
    {
    public:
    };

    class/*or struct*/ XMLStringTokenizer
    {
      // Functions:
      public: XMLStringTokenizer(char16_t const *const, class xercesc_3_2::MemoryManager *const)
      public: ~XMLStringTokenizer(void)
      public: bool hasMoreTokens(void)
      public: char16_t * nextToken(void)
    public:
    };

    namespace/*or class/struct?*/ XMLUni
    {
      // Variables:
      public: static char16_t const *const fgCDATAString
      public: static char16_t const *const fgDOMComments
      public: static char16_t const *const fgDOMErrorHandler
      public: static char16_t const *const fgDOMNamespaces
      public: static char16_t const *const fgDOMValidate
      public: static char16_t const *const fgDOMValidateIfSchema
      public: static char16_t const *const fgDOMWRTDiscardDefaultContent
      public: static char16_t const *const fgDOMWRTFormatPrettyPrint
      public: static char16_t const *const fgDOMXMLDeclaration
      public: static char16_t const *const fgISO88591EncodingString
      public: static char16_t const *const fgSGXMLScanner
      public: static char16_t const *const fgUTF8EncodingString
      public: static char16_t const *const fgXMLNSString
      public: static char16_t const *const fgXMLNSURIName
      public: static char16_t const *const fgXMLString
      public: static char16_t const *const fgXMLURIName
      public: static char16_t const *const fgXercesCacheGrammarFromParse
      public: static char16_t const *const fgXercesDOMHasPSVIInfo
      public: static char16_t const *const fgXercesScannerName
      public: static char16_t const *const fgXercesSchema
      public: static char16_t const *const fgXercesSchemaFullChecking
      public: static char16_t const *const fgXercesUseCachedGrammarInParse
      public: static char const *const fgXercescDefaultLocale
    };

    class XMLValidator
    {
    public:
    };

    class/*or struct*/ XMemory
    {
      // Static functions:
      public: static void * operator new(unsigned __int64)
      public: static void * operator new(unsigned __int64, class xercesc_3_2::MemoryManager *)
      public: static void operator delete(void *)
      public: static void operator delete(void *, class xercesc_3_2::MemoryManager *)
    public:
    };

    class XSModel
    {
    public:
    };


    // Functions:
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class DOMError const &)
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class DOMException const &)
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class QName const &)
  public:
  };


  // Functions:
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, class sophisToolsbaseExceptionBase const &)
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, char16_t const *)
  void __ExceptionPtrCopy(void *, void const *)
  void __ExceptionPtrDestroy(void *)
  // Variables:
  int gExportDoubleXmlPrecision
public:
};
