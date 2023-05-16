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

  struct _Cvtvec
  {
  public:
  };

  namespace/*or class/struct?*/ `anonymous namespace'
  {
    // Nested containers:
    class PollingThreadExec
    {
    public:
    };

    class StatisticsProcessor : public PollingThread
    {
      // VFTable. Offset=0, Size=11, Start=11
      // Corresponding base: thread::thread::PollingThread
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };


  };

  namespace/*or class/struct?*/ boost
  {
    // Nested containers:
    class/*or struct*/ bad_lexical_cast : public bad_cast
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::bad_cast
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class condition_variable
    {
    public:
    };

    class condition_variable_any
    {
    public:
    };

    class/*or struct*/ detail
    {
    public:
      // Nested containers:
      template<typename T0, typename T2      >
      class/*or struct*/ basic_pointerbuf
      {
      public:
      };
#if 0 // Instances:
// <char, class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
      template<>
      class/*or struct*/ basic_pointerbuf<char, class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>> : public basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>
      {
        // VFTable. Offset=0, Size=15, Start=15
        // Corresponding base: basic_stringbuf::basic_stringbuf::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      template<typename T0, typename T2      >
      class/*or struct*/ basic_unlockedbuf
      {
      public:
      };
#if 0 // Instances:
// <class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>, char>
#if 0
      template<>
      class/*or struct*/ basic_unlockedbuf<class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>, char> : public basic_pointerbuf<char, class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>>
      {
        // VFTable. Offset=0, Size=15, Start=15
        // Corresponding base: basic_pointerbuf::basic_pointerbuf::basic_pointerbuf::basic_pointerbuf<char, class std::basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>>>
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      struct mono_platform_timepoint
      {
      public:
      };

      template<typename T1      >
      class/*or struct*/ thread_data
      {
      public:
      };
#if 0 // Instances:
// <class `anonymous namespace'::PollingThreadExec>
#if 0
      template<>
      class/*or struct*/ thread_data<class `anonymous namespace'::PollingThreadExec> : public thread_data_base
      {
        // VFTable. Offset=0, Size=3, Start=3
        // Corresponding base: detail::detail::thread_data_base
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      class/*or struct*/ thread_data_base
      {
        // Functions:
        public: boost::detail::thread_data_base::thread_data_base(void)
#if 0 // All found virtual functions names:
        public: virtual boost::detail::thread_data_base::~thread_data_base(void)
        public: virtual void boost::detail::thread_data_base::notify_all_at_thread_exit(class boost::condition_variable *, class boost::mutex *)
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Added virtual functions:
        public: virtual boost::detail::thread_data_base::~thread_data_base(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void boost::detail::thread_data_base::notify_all_at_thread_exit(class boost::condition_variable *, class boost::mutex *); // 2
        // VFTable with 0 offset end

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


      // Functions:
      void * get_tss_data(void const *)
      void set_tss_data(void const *, void (__cdecl *)(void (__cdecl *)(void *), void *), void (__cdecl *)(void *), void *, bool)
    public:
    };

    class/*or struct*/ exception
    {
      // VFTable. Offset=0, Size=1, Start=0
      // Owner: SophisSystem.dll
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
        // Owner: SophisSystem.dll
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
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class mutex
    {
    public:
    };

    namespace/*or class/struct?*/ numeric
    {
      // Nested containers:
      class/*or struct*/ bad_numeric_cast : public bad_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::bad_cast
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ negative_overflow : public bad_numeric_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: numeric::numeric::bad_numeric_cast
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ positive_overflow : public bad_numeric_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: numeric::numeric::bad_numeric_cast
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };


    };

    class recursive_mutex
    {
    public:
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
          // Owner: SophisSystem.dll
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
          // Owner: SophisSystem.dll
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
          // Owner: SophisSystem.dll
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
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };


    };

    class/*or struct*/ this_thread
    {
      // Functions:
      class boost::thread::id get_id(void)
      bool interruptible_wait(void *, struct boost::detail::mono_platform_timepoint const &)
    public:
    };

    class/*or struct*/ thread
    {
    public:
      // Nested containers:
      class id
      {
      public:
      };


      // Functions:
      public: ~thread(void)
      private: bool do_try_join_until(struct boost::detail::mono_platform_timepoint const &)
      public: class id get_id(void) const
      public: void join(void)
      private: void start_thread(void)
    public:
    };

    class/*or struct*/ thread_exception : public system_error
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: system::system::system_error
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ thread_resource_error : public thread_exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: boost::thread_exception
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };


  };

  struct fd_set
  {
  public:
  };

  namespace/*or class/struct?*/ sophis
  {
    // Nested containers:
    namespace/*or class/struct?*/ tools
    {
      // Nested containers:
      class CSRArchive
      {
#if 0 // All found virtual functions names:
        public: virtual class sophis::tools::CSRArchive * sophis::tools::CSRArchive::Clone(void) const
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::Rewind(void) const; // 1 (comm::comm::ByteArraySerializableArchive)
        public: virtual class sophis::tools::CSRArchive * sophis::tools::CSRArchive::Clone(void) const; // 2
        // VFTable with 0 offset end

      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class DataModelException : public ExceptionBase
        {
          // Functions:
          protected: sophis::tools::dataModel::DataModelException::DataModelException(char const *, char const *, long)
          public: sophis::tools::dataModel::DataModelException::DataModelException(class sophis::tools::dataModel::DataModelException const &)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataModelException::~DataModelException(void)
#endif

        public:
        };

        class DataTypeRepository
        {
          // Functions:
          public: sophis::tools::dataModel::DataTypeRepository::DataTypeRepository(void)
          public: void sophis::tools::dataModel::DataTypeRepository::`vbase dtor'(void)
          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisSystem.dll
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

        namespace/*or class/struct?*/ DataTypeRepositorySingletonHolder
        {
          // Variables:
          private: static class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::DataTypeRepository> sophis::tools::dataModel::DataTypeRepositorySingletonHolder::fInstance
        };

        class/*or struct*/ Transformer
        {
          // Functions:
          public: sophis::tools::dataModel::Transformer::Transformer(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::Transformer::~Transformer(void)
#endif

        public:
        };

        class/*or struct*/ TransformerManagerSingleton
        {
          // Static functions:
          public: static void sophis::tools::dataModel::TransformerManagerSingleton::dispose(void)
          public: static void sophis::tools::dataModel::TransformerManagerSingleton::init(void)
        public:
        };


      };

      namespace/*or class/struct?*/ util
      {
        // Nested containers:
        class/*or struct*/ BasicRunnable
        {
          // Functions:
          public: sophis::tools::util::BasicRunnable::BasicRunnable(void)
          protected: bool sophis::tools::util::BasicRunnable::exitRequested(void) const
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

        class/*or struct*/ DateTimeUtil
        {
          // Static functions:
          public: static __int64 sophis::tools::util::DateTimeUtil::currentTime(void)
          public: static void sophis::tools::util::DateTimeUtil::dispose(void)
          public: static void sophis::tools::util::DateTimeUtil::init(void)
          public: static void sophis::tools::util::DateTimeUtil::printDateTime(class std::basic_ostream<char, struct std::char_traits<char>> &, __int64, bool, bool, char, char)
          public: static void sophis::tools::util::DateTimeUtil::scanDate(class std::basic_istream<char, struct std::char_traits<char>> &, class sophisTools::CSRDay &, bool)
          // Variables:
          public: static unsigned long const sophis::tools::util::DateTimeUtil::SECONDS_PER_DAY
        public:
        };

        template<typename T1        >
        class NotificationListener
        {
        public:
        };
#if 0 // Instances:
// <struct sophis::tools::util::Worker::JobTerminatedEvent>
#if 0
        template<>
        class NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>
        {
          // Functions:
          public: sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>::~NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>(void)
#endif

          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisSystem.dll
          // Added virtual functions:
          public: virtual sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>::~NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>(void) = 0; // 0
          // VFTable with 0 offset end

          // VFTable. Offset=32, Size=4, Start=0
          // Owner: SophisSystem.dll
          // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
          public: virtual sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>::~NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>(void); // 0
          public: virtual void unknown_vf_32_1(void); // 1
          public: virtual void unknown_vf_32_2(void); // 2
          public: virtual void unknown_vf_32_3(void); // 3
#endif
          // VFTable with 32 offset end

        public:
        };
#endif
#endif


        template<typename T1        >
        class NotificationProvider
        {
        public:
        };
#if 0 // Instances:
// <struct sophis::tools::util::Worker::JobTerminatedEvent>
#if 0
        template<>
        class NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>
        {
        public:
          // Nested containers:
          class/*or struct*/ ListenerList
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisSystem.dll
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


          // VFTable. Offset=0, Size=4, Start=0
          // Owner: SophisSystem.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          public: virtual void unknown_vf_0_2(void); // 2
          public: virtual void unknown_vf_0_3(void); // 3
          // VFTable with 0 offset end

          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisSystem.dll
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
#endif
#endif


        class/*or struct*/ SystemInfoUtil
        {
          // Static functions:
          public: static void sophis::tools::util::SystemInfoUtil::dispose(void)
          public: static void sophis::tools::util::SystemInfoUtil::init(void)
        public:
        };

        class UIDGenerator
        {
        public:
        };

        class Worker : public Runnable
        {
        public:
          // Nested containers:
          struct JobTerminatedEvent
          {
          public:
          };


          // Functions:
          public: sophis::tools::util::Worker::Worker(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::util::Worker::~Worker(void)
#endif

        public:
        };

        class WorkerAllocator : public RefCount
        {
          // Functions:
          public: sophis::tools::util::WorkerAllocator::WorkerAllocator(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::util::WorkerAllocator::~WorkerAllocator(void)
#endif

        public:
        };

        class WorkerList
        {
          // Functions:
          public: sophis::tools::util::WorkerList::WorkerList(void)
          public: void sophis::tools::util::WorkerList::`vbase dtor'(void)
          // VFTable. Offset=40, Size=4, Start=0
          // Owner: SophisSystem.dll
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

        class WorkerVisitor : public RefCount
        {
          // VFTable. Offset=0, Size=5, Start=0
          // Corresponding base: base::base::RefCount
          // Owner: SophisSystem.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          public: virtual void unknown_vf_0_4(void) = 0; // 4
          // VFTable with 0 offset end

        public:
        };


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
      public: CSRDay(long)
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
        protected: sophisTools::base::ExceptionBase::ExceptionBase(char const *, char const *, long)
        protected: sophisTools::base::ExceptionBase::ExceptionBase(char const *, char const *, long, bool, bool)
        public: sophisTools::base::ExceptionBase::ExceptionBase(class sophisTools::base::ExceptionBase const &)
        public: class sophisTools::base::ExceptionBase & sophisTools::base::ExceptionBase::operator=(class sophisTools::base::ExceptionBase const &)
        public: char const * sophisTools::base::ExceptionBase::operator char const *(void) const
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::base::ExceptionBase::getError(void) const
        public: char const * sophisTools::base::ExceptionBase::getName(void) const
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::ExceptionBase::~ExceptionBase(void)
#endif

      public:
      };

      class GeneralException : public ExceptionBase
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
        public: sophisTools::base::InvalidArgument::InvalidArgument(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::InvalidArgument::~InvalidArgument(void)
#endif

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

      class InvalidParameter
      {
        // Functions:
        public: sophisTools::base::InvalidParameter::InvalidParameter(class sophisTools::base::InvalidParameter const &)
        public: sophisTools::base::InvalidParameter::InvalidParameter(char const *, char const *, char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::InvalidParameter::~InvalidParameter(void)
#endif

      public:
      };

      class/*or struct*/ LocaleUtil
      {
        // Static functions:
        public: static void sophisTools::base::LocaleUtil::dispose(void)
        public: static void sophisTools::base::LocaleUtil::init(void)
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

      class/*or struct*/ RefCount
      {
        // Functions:
        public: sophisTools::base::RefCount::RefCount(void)
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
// <class sophis::tools::dataModel::DataTypeRepository>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::dataModel::DataTypeRepository>
      {
      public:
      };
#endif
// <class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>
      {
      public:
      };
#endif
// <class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>
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
// <class sophis::tools::util::WorkerAllocator>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::WorkerAllocator>
      {
      public:
      };
#endif
// <class sophis::tools::util::WorkerList>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::WorkerList>
      {
      public:
      };
#endif
// <class sophis::tools::util::WorkerVisitor>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::util::WorkerVisitor>
      {
      public:
      };
#endif
// <class sophisTools::base::Runnable>
#if 0
      template<>
      class RefCountHandle<class sophisTools::base::Runnable>
      {
      public:
      };
#endif
// <class sophisTools::base::StringTokenizer>
#if 0
      template<>
      class RefCountHandle<class sophisTools::base::StringTokenizer>
      {
      public:
      };
#endif
// <class sophisTools::comm::CoherencyChannel>
#if 0
      template<>
      class RefCountHandle<class sophisTools::comm::CoherencyChannel>
      {
      public:
      };
#endif
// <class sophisTools::comm::QuoteInfo>
#if 0
      template<>
      class RefCountHandle<class sophisTools::comm::QuoteInfo>
      {
      public:
      };
#endif
// <class sophisTools::comm::SerializablePacket>
#if 0
      template<>
      class/*or struct*/ RefCountHandle<class sophisTools::comm::SerializablePacket>
      {
        // Functions:
        public: sophisTools::base::RefCountHandle<class sophisTools::comm::SerializablePacket>::~RefCountHandle<class sophisTools::comm::SerializablePacket>(void)
      public:
      };
#endif
// <class sophisTools::comm::SerializableRiskEvent>
#if 0
      template<>
      class RefCountHandle<class sophisTools::comm::SerializableRiskEvent>
      {
        // Functions:
        public: sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>(class sophisTools::comm::SerializableRiskEvent *)
        public: sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>(void)
        public: sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::~RefCountHandle<class sophisTools::comm::SerializableRiskEvent>(void)
        public: class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent> & sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::operator=(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent> const &)
        public: bool sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::operator!(void) const
        public: bool sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::operator bool(void) const
        public: class sophisTools::comm::SerializableRiskEvent * sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::operator->(void)
        // Static functions:
        public: static class sophisTools::comm::SerializableRiskEvent * sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>::_duplicate(class sophisTools::comm::SerializableRiskEvent *)
      public:
      };
#endif
// <class sophisTools::comm::SerializableRiskEventQueue>
#if 0
      template<>
      class RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>
      {
      public:
      };
#endif
// <class sophisTools::io::BufferedInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::BufferedInputStream>
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
        public: class sophisTools::io::ByteArrayIOStream * sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayIOStream>::operator->(void)
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
// <class sophisTools::io::InputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::InputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::Library>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::Library>
      {
      public:
      };
#endif
// <class sophisTools::io::LibraryList>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::LibraryList>
      {
      public:
      };
#endif
// <class sophisTools::io::LineInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::LineInputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::LineOutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::LineOutputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::ObjectInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ObjectInputStream>
      {
      public:
      };
#endif
// <class sophisTools::io::ObjectOutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ObjectOutputStream>
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
// <class sophisTools::logger::FilterEngine>
#if 0
      template<>
      class RefCountHandle<class sophisTools::logger::FilterEngine>
      {
      public:
      };
#endif
// <class sophisTools::logger::Logger>
#if 0
      template<>
      class RefCountHandle<class sophisTools::logger::Logger>
      {
      public:
      };
#endif
// <class sophisTools::logger::ShiftableLogger>
#if 0
      template<>
      class RefCountHandle<class sophisTools::logger::ShiftableLogger>
      {
      public:
      };
#endif
// <class sophisTools::net::Reactor::EventHandler>
#if 0
      template<>
      class RefCountHandle<class sophisTools::net::Reactor::EventHandler>
      {
      public:
      };
#endif
// <class sophisTools::net::Reactor>
#if 0
      template<>
      class RefCountHandle<class sophisTools::net::Reactor>
      {
      public:
      };
#endif
// <class sphSystem::config::ArgMap>
#if 0
      template<>
      class RefCountHandle<class sphSystem::config::ArgMap>
      {
      public:
      };
#endif
// <class sphSystem::config::InitParameters>
#if 0
      template<>
      class RefCountHandle<class sphSystem::config::InitParameters>
      {
      public:
      };
#endif
// <class sphSystem::config::PropertyReader>
#if 0
      template<>
      class RefCountHandle<class sphSystem::config::PropertyReader>
      {
      public:
      };
#endif
// <class sphSystem::logger::SafeLogger>
#if 0
      template<>
      class RefCountHandle<class sphSystem::logger::SafeLogger>
      {
      public:
      };
#endif
// <class sphSystem::plugin::Plugin>
#if 0
      template<>
      class RefCountHandle<class sphSystem::plugin::Plugin>
      {
      public:
      };
#endif
// <class sphSystem::plugin::PluginManager>
#if 0
      template<>
      class RefCountHandle<class sphSystem::plugin::PluginManager>
      {
      public:
      };
#endif
// <class sphSystem::server::ApplicationTool>
#if 0
      template<>
      class RefCountHandle<class sphSystem::server::ApplicationTool>
      {
      public:
      };
#endif
// <class sphSystem::statistics::AbstractCounter>
#if 0
      template<>
      class RefCountHandle<class sphSystem::statistics::AbstractCounter>
      {
      public:
      };
#endif
// <class sphSystem::statistics::EventCounter>
#if 0
      template<>
      class RefCountHandle<class sphSystem::statistics::EventCounter>
      {
      public:
      };
#endif
// <class sphSystem::statistics::LateQuotationCounter>
#if 0
      template<>
      class RefCountHandle<class sphSystem::statistics::LateQuotationCounter>
      {
      public:
      };
#endif
// <class sphSystem::thread::Runnable>
#if 0
      template<>
      class RefCountHandle<class sphSystem::thread::Runnable>
      {
      public:
      };
#endif
// <class sphSystem::thread::ScheduledAction>
#if 0
      template<>
      class RefCountHandle<class sphSystem::thread::ScheduledAction>
      {
      public:
      };
#endif
// <class sphSystem::thread::ThreadPool>
#if 0
      template<>
      class RefCountHandle<class sphSystem::thread::ThreadPool>
      {
      public:
      };
#endif
// <class sphSystem::thread::WorkerManager>
#if 0
      template<>
      class RefCountHandle<class sphSystem::thread::WorkerManager>
      {
      public:
      };
#endif
// <class sphSystem::util::UIDGenerator>
#if 0
      template<>
      class RefCountHandle<class sphSystem::util::UIDGenerator>
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
      class RefCountHandle<class sophisTools::comm::CoherencyChannel>
      {
      public:
      };
#endif

#if 0
      template<>
      class RefCountHandle<class sophisTools::comm::SerializableRiskEvent>
      {
      public:
      };
#endif

#if 0
      template<>
      class RefCountHandle<class sophisTools::logger::Logger>
      {
      public:
      };
#endif

#if 0
      template<>
      class RefCountHandle<class sophisTools::logger::ShiftableLogger>
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

      class Runnable : public RefCount
      {
        // Functions:
        public: sophisTools::base::Runnable::Runnable(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::Runnable::~Runnable(void)
#endif

      public:
      };

      class/*or struct*/ SignalUtil
      {
        // Static functions:
        public: static void sophisTools::base::SignalUtil::setInterruptHandler(void (__cdecl *)(long))
      public:
      };

      class StringTokenizer
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::base::StringTokenizer> sophisTools::base::StringTokenizer::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool)
      public:
      };

      class/*or struct*/ StringUtil
      {
        // Static functions:
        public: static bool sophisTools::base::StringUtil::string2bool(char const *)
        public: static void sophisTools::base::StringUtil::trim(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, char)
      public:
      };

      class SystemException
      {
        // Functions:
        public: sophisTools::base::SystemException::SystemException(class sophisTools::base::SystemException const &)
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

    namespace/*or class/struct?*/ comm
    {
      // Nested containers:
      class AlreadyConnected
      {
        // Functions:
        public: sophisTools::comm::AlreadyConnected::AlreadyConnected(class sophisTools::comm::AlreadyConnected const &)
        public: sophisTools::comm::AlreadyConnected::AlreadyConnected(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::AlreadyConnected::~AlreadyConnected(void)
#endif

      public:
      };

      class ByteArraySerializableArchive : public SerializableArchive
      {
        // Functions:
        protected: sophisTools::comm::ByteArraySerializableArchive::ByteArraySerializableArchive(class sophisTools::io::ObjectInputStream *, class sophisTools::io::ObjectOutputStream *, class sophisTools::io::ByteArrayRandomAccessIOStream *)
        protected: sophisTools::comm::ByteArraySerializableArchive::ByteArraySerializableArchive(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream>)
        public: sophisTools::comm::ByteArraySerializableArchive::ByteArraySerializableArchive(class sophisTools::comm::ByteArraySerializableArchive const &)
        public: class sophisTools::comm::ByteArraySerializableArchive & sophisTools::comm::ByteArraySerializableArchive::operator=(class sophisTools::comm::ByteArraySerializableArchive const &)
        protected: char const * sophisTools::comm::ByteArraySerializableArchive::getBuffer(void) const
        protected: class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayIOStream> sophisTools::comm::ByteArraySerializableArchive::getByteArray(void)
        protected: unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getReadCount(void) const
        protected: unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getWriteCount(void) const
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::ByteArraySerializableArchive::~ByteArraySerializableArchive(void)
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(char &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(short &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(int &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(long &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(unsigned long &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(float &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(double &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(class sophis::tools::CSRArchive *&) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(__int64 &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(unsigned __int64 &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(bool &) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(char *) const
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(class sophisTools::io::Serializable *) const
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(char)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(short)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(int)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(long)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(unsigned long)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(float)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(double)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(char const *)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(class sophis::tools::CSRArchive const *)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(class sophisTools::io::Serializable const *)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(__int64)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(unsigned __int64)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(bool)
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::Rewind(void) const
        protected: virtual char const * sophisTools::comm::ByteArraySerializableArchive::getBuffer(void)
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getReadCount(void)
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getSize(void)
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getWriteCount(void)
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::readObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream>)
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::writeObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream>) const
#endif

        // VFTable. Offset=0, Size=34, Start=0
        // Corresponding base: comm::comm::SerializableArchive
        // Added virtual functions:
        public: virtual sophisTools::comm::ByteArraySerializableArchive::~ByteArraySerializableArchive(void); // 0
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::Rewind(void) const; // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual bool sphSystem::comm::BytesArchive::End(void) const; // 3 (comm::comm::BytesArchive)
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(class sophis::tools::CSRArchive const *); // 4
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(char const *); // 5
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(double); // 6
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(float); // 7
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(__int64); // 8
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(unsigned __int64); // 9
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(unsigned long); // 10
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(long); // 11
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(int); // 12
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(short); // 13
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(char); // 14
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(bool); // 15
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(class sophis::tools::CSRArchive *&) const; // 16
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(char *) const; // 17
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(double &) const; // 18
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(float &) const; // 19
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(__int64 &) const; // 20
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(unsigned __int64 &) const; // 21
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(unsigned long &) const; // 22
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(long &) const; // 23
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(int &) const; // 24
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(short &) const; // 25
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(char &) const; // 26
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(bool &) const; // 27
        public: virtual class sophis::tools::CSRArchive & sophisTools::comm::ByteArraySerializableArchive::operator<<(class sophisTools::io::Serializable const *); // 28
        public: virtual class sophis::tools::CSRArchive const & sophisTools::comm::ByteArraySerializableArchive::operator>>(class sophisTools::io::Serializable *) const; // 29
        protected: virtual char const * sophisTools::comm::ByteArraySerializableArchive::getBuffer(void); // 30
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getSize(void); // 31
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getReadCount(void); // 32
        protected: virtual unsigned __int64 sophisTools::comm::ByteArraySerializableArchive::getWriteCount(void); // 33
        // VFTable with 0 offset end

        // VFTable. Offset=8, Size=2, Start=2
        // Corresponding base: io::io::Serializable
        // Overrides:
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::readObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream>) override; // 0
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::writeObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream>) const override; // 1
        // VFTable with 8 offset end

      public:
      };

      class ChannelDisconnected
      {
        // Functions:
        public: sophisTools::comm::ChannelDisconnected::ChannelDisconnected(class sophisTools::comm::ChannelDisconnected const &)
        public: sophisTools::comm::ChannelDisconnected::ChannelDisconnected(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::ChannelDisconnected::~ChannelDisconnected(void)
#endif

      public:
      };

      class CoherencyChannel
      {
        // Functions:
        public: sophisTools::comm::CoherencyChannel::CoherencyChannel(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::CoherencyChannel::~CoherencyChannel(void)
#endif

      public:
      };

      class Connection
      {
        // Functions:
        public: void sophisTools::comm::Connection::extractFromConnection(char const *)
      public:
      };

      class ConnectionException
      {
        // Functions:
        public: sophisTools::comm::ConnectionException::ConnectionException(class sophisTools::comm::ConnectionException const &)
      public:
      };

      class/*or struct*/ ILateQuoteReporter
      {
        // Functions:
        public: sophisTools::comm::ILateQuoteReporter::ILateQuoteReporter(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::ILateQuoteReporter::~ILateQuoteReporter(void)
#endif

      public:
      };

      class/*or struct*/ OpaqueSerializerPrototypeManagerSingleton
      {
        // Static functions:
        public: static void sophisTools::comm::OpaqueSerializerPrototypeManagerSingleton::dispose(void)
        public: static void sophisTools::comm::OpaqueSerializerPrototypeManagerSingleton::init(void)
      public:
      };

      class QuoteInfo
      {
        // Functions:
        public: void sophisTools::comm::QuoteInfo::Print(class std::basic_ostream<char, struct std::char_traits<char>> &)
        // Static functions:
        public: static void sophisTools::comm::QuoteInfo::PrintHeader(class std::basic_ostream<char, struct std::char_traits<char>> &)
      public:
      };

      class/*or struct*/ SerializableArchive : public CSRArchive, public Serializable
      {
        // Warning: Greater base vftable size!
        // VFTable. Offset=0, Size=0, Start=3
        // Corresponding base: tools::tools::CSRArchive
        // VFTable with 0 offset end

      public:
      };

      class SerializablePacket
      {
      public:
      };

      class SerializableRiskEvent
      {
        // Functions:
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::comm::SerializableRiskEvent::toString(void) const
      public:
      };

      class SerializableRiskEventQueue
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sophisTools::comm::SerializableRiskEventQueue::create(void)
      public:
      };

      class UnexpectedEvent
      {
        // Functions:
        public: sophisTools::comm::UnexpectedEvent::UnexpectedEvent(class sophisTools::comm::UnexpectedEvent const &)
        public: sophisTools::comm::UnexpectedEvent::UnexpectedEvent(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::comm::UnexpectedEvent::~UnexpectedEvent(void)
#endif

      public:
      };


    };

    namespace/*or class/struct?*/ io
    {
      // Nested containers:
      class BufferedInputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::BufferedInputStream> sophisTools::io::BufferedInputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
      public:
      };

      class ByteArrayIOStream
      {
        // Functions:
        public: void sophisTools::io::ByteArrayIOStream::wipe(void)
      public:
      };

      class ByteArrayRandomAccessIOStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream> sophisTools::io::ByteArrayRandomAccessIOStream::create(void)
      public:
      };

      class File
      {
        // Functions:
        public: void sophisTools::io::File::changeWorkingDirectory(void)
        // Static functions:
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::io::File::baseName(char const *, bool)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::File::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sophisTools::io::File::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        // Variables:
        public: static char const sophisTools::io::File::OS_SEPARATOR
      public:
      };

      class/*or struct*/ FileInputStream
      {
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

      class IOException
      {
        // Functions:
        public: sophisTools::io::IOException::IOException(class sophisTools::io::IOException const &)
      public:
      };

      class InputStream
      {
      public:
      };

      class Library
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::Library> sophisTools::io::Library::create(char const *, char)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::LibraryList> sophisTools::io::Library::getLoadedModules(void)
      public:
      };

      class LibraryList
      {
      public:
      };

      class LineInputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::LineInputStream> sophisTools::io::LineInputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
      public:
      };

      class LineOutputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream> sophisTools::io::LineOutputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
      public:
      };

      class/*or struct*/ NewByteArrayRandomAccessIOStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream> sophisTools::io::NewByteArrayRandomAccessIOStream::create(char const *, unsigned __int64, unsigned __int64, bool)
      public:
      };

      class ObjectInputStream
      {
        // Functions:
        public: sophisTools::io::ObjectInputStream::ObjectInputStream(class sophisTools::io::InputStream *)
        public: void sophisTools::io::ObjectInputStream::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream> sophisTools::io::ObjectInputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::InputStream>)
#if 0 // All found virtual functions names:
        public: virtual void sophisTools::io::ObjectInputStream::_add_ref(void)
        public: virtual void sophisTools::io::ObjectInputStream::_remove_ref(void)
        public: virtual long sophisTools::io::ObjectInputStream::getRef(void) const
#endif

        // VFTable. Offset=64, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class ObjectOutputStream
      {
        // Functions:
        public: sophisTools::io::ObjectOutputStream::ObjectOutputStream(class sophisTools::io::OutputStream *)
        public: void sophisTools::io::ObjectOutputStream::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream> sophisTools::io::ObjectOutputStream::create(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
#if 0 // All found virtual functions names:
        public: virtual void sophisTools::io::ObjectOutputStream::_add_ref(void)
        public: virtual void sophisTools::io::ObjectOutputStream::_remove_ref(void)
        public: virtual long sophisTools::io::ObjectOutputStream::getRef(void) const
#endif

        // VFTable. Offset=56, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class OutputStream
      {
      public:
      };

      class/*or struct*/ OutputStreamAdapter
      {
        // Functions:
        public: sophisTools::io::OutputStreamAdapter::OutputStreamAdapter(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
        public: void sophisTools::io::OutputStreamAdapter::`vbase dtor'(void)
      public:
      };

      class Serializable
      {
        // VFTable. Offset=0, Size=2, Start=0
        // Added virtual functions:
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::readObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream>); // 0 (comm::comm::ByteArraySerializableArchive)
        public: virtual void sophisTools::comm::ByteArraySerializableArchive::writeObject(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream>) const; // 1 (comm::comm::ByteArraySerializableArchive)
        // VFTable with 0 offset end

      public:
      };

      class SerializationException
      {
        // Functions:
        public: sophisTools::io::SerializationException::SerializationException(class sophisTools::io::SerializationException const &)
      public:
      };

      class TimeOutException
      {
        // Functions:
        public: sophisTools::io::TimeOutException::TimeOutException(class sophisTools::io::TimeOutException const &)
        public: sophisTools::io::TimeOutException::TimeOutException(long, char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::io::TimeOutException::~TimeOutException(void)
#endif

      public:
      };


    };

    namespace/*or class/struct?*/ logger
    {
      // Nested containers:
      class FilterEngine : public RefCount
      {
        // Functions:
        public: sophisTools::logger::FilterEngine::FilterEngine(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::logger::FilterEngine::~FilterEngine(void)
#endif

      public:
      };

      class Logger
      {
        // Functions:
        public: sophisTools::logger::Logger::Logger(void)
        // Static functions:
        public: static char const * sophisTools::logger::Logger::getLevelName(enum Log::Severity)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::logger::Logger::~Logger(void)
#endif

      public:
      };

      class/*or struct*/ LoggerUtil
      {
        // Static functions:
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, unsigned int)
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, char const *, unsigned int)
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, char const *, char const *, char const *, char const *, unsigned int)
        public: static void sophisTools::logger::LoggerUtil::Log(enum Log::Severity, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, unsigned int)
        public: static void sophisTools::logger::LoggerUtil::addConstraints(class std::list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>>)
        public: static void sophisTools::logger::LoggerUtil::dispose(void)
        protected: static void sophisTools::logger::LoggerUtil::init(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, enum Log::Severity)
        public: static bool sophisTools::logger::LoggerUtil::isLogWorthIt(enum Log::Severity)
        public: static void sophisTools::logger::LoggerUtil::removeAllConstraints(void)
        public: static void sophisTools::logger::LoggerUtil::setDefaultLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>)
        public: static void sophisTools::logger::LoggerUtil::setDefaultVerbosity(enum Log::Severity const &)
        public: static void sophisTools::logger::LoggerUtil::setFilterEngine(class sophisTools::base::RefCountHandle<class sophisTools::logger::FilterEngine>)
        public: static void sophisTools::logger::LoggerUtil::setLogPrivateBytes(bool)
        public: static void sophisTools::logger::LoggerUtil::setLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>)
        public: static void sophisTools::logger::LoggerUtil::setMode(bool)
        public: static void sophisTools::logger::LoggerUtil::setProcessName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sophisTools::logger::LoggerUtil::setVerbosity(enum Log::Severity const &, bool)
      public:
      };

      class/*or struct*/ LoggerUtilLog4cxx
      {
        // Static functions:
        public: static bool sophisTools::logger::LoggerUtilLog4cxx::IsLogWorthIt(enum Log::Severity)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, char const *, char const *, char const *)
        public: static void sophisTools::logger::LoggerUtilLog4cxx::Log(enum Log::Severity, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *)
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
        public: void sophisTools::logger::PostMortemLogEngine::pushMessage(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, unsigned __int64)
        public: void sophisTools::logger::PostMortemLogEngine::pushMessage(enum Log::Severity, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, char const *, char const *, char const *, unsigned __int64)
        public: void sophisTools::logger::PostMortemLogEngine::pushMessage(enum Log::Severity, char const *, char const *, char const *, char const *, unsigned __int64)
        // Static functions:
        public: static class sophisTools::logger::PostMortemLogEngine & sophisTools::logger::PostMortemLogEngine::Instance(void)
        // Variables:
        public: static enum sophisTools::logger::PostMortemLogEngine::ePostMortemState sophisTools::logger::PostMortemLogEngine::bIsPostMortemLogActivated
      public:
      };

      class/*or struct*/ ShiftFileLogger
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger> sophisTools::logger::ShiftFileLogger::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned __int64, bool, bool, bool)
      public:
      };

      class ShiftableLogger
      {
        // Functions:
        public: sophisTools::logger::ShiftableLogger::ShiftableLogger(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::logger::ShiftableLogger::~ShiftableLogger(void)
#endif

      public:
      };

      class/*or struct*/ SophisLoggerConfiguration
      {
        // Static functions:
        public: static bool sophisTools::logger::SophisLoggerConfiguration::GetOldLogger(void)
      public:
      };

      class/*or struct*/ SophisLoggerImpl
      {
        // Static functions:
        public: static void sophisTools::logger::SophisLoggerImpl::Dispose(void)
      public:
      };

      class/*or struct*/ StderrLogger
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger> sophisTools::logger::StderrLogger::create(bool)
      public:
      };

      struct filterConstraint
      {
        // Functions:
        public: sophisTools::logger::filterConstraint::filterConstraint(struct sophisTools::logger::filterConstraint &&)
        public: sophisTools::logger::filterConstraint::filterConstraint(struct sophisTools::logger::filterConstraint const &)
        public: sophisTools::logger::filterConstraint::filterConstraint(char const *, char const *, bool, enum Log::Severity)
        public: sophisTools::logger::filterConstraint::~filterConstraint(void)
      public:
      };


    };

    namespace/*or class/struct?*/ net
    {
      // Nested containers:
      class/*or struct*/ InetAddress
      {
        // Static functions:
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::net::InetAddress::getLocalHostName(void)
      public:
      };

      class/*or struct*/ NetworkUtil
      {
        // Static functions:
        public: static void sophisTools::net::NetworkUtil::dispose(void)
        public: static void sophisTools::net::NetworkUtil::init(void)
      public:
      };

      class Reactor
      {
      public:
        // Nested containers:
        class EventHandler
        {
        public:
        };


        // Functions:
        public: sophisTools::net::Reactor::Reactor(void)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::net::Reactor::~Reactor(void)
#endif

      public:
      };

      class/*or struct*/ SelectReactor
      {
      public:
        // Nested containers:
        struct HandlerInfo
        {
        public:
        };


        // Functions:
        protected: sophisTools::net::SelectReactor::SelectReactor(__int64)
        protected: void sophisTools::net::SelectReactor::evalFdSets(struct fd_set &, struct fd_set &, class std::list<struct sophisTools::net::SelectReactor::HandlerInfo, class std::allocator<struct sophisTools::net::SelectReactor::HandlerInfo>> &)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::net::SelectReactor::~SelectReactor(void)
        public: virtual void sophisTools::net::SelectReactor::_add_ref(void)
        public: virtual void sophisTools::net::SelectReactor::_remove_ref(void)
        public: virtual void sophisTools::net::SelectReactor::dispatch(void)
        public: virtual bool sophisTools::net::SelectReactor::dispatchOneEvent(long)
        public: virtual bool sophisTools::net::SelectReactor::eventReady(void)
        public: virtual long sophisTools::net::SelectReactor::getRef(void) const
        public: virtual void sophisTools::net::SelectReactor::interruptDispatch(void)
        public: virtual void sophisTools::net::SelectReactor::registerHandler(class sophisTools::base::RefCountHandle<class sophisTools::net::Reactor::EventHandler>, long, long)
        protected: virtual void sophisTools::net::SelectReactor::setFdSets(struct fd_set &, struct fd_set &, int &)
        public: virtual void sophisTools::net::SelectReactor::unregisterHandler(class sophisTools::base::RefCountHandle<class sophisTools::net::Reactor::EventHandler>)
#endif

      public:
      };


    };

    namespace/*or class/struct?*/ time
    {
      // Nested containers:
      class Date
      {
        // Functions:
        public: class std::basic_ostream<char, struct std::char_traits<char>> & sophisTools::time::Date::toStream(class std::basic_ostream<char, struct std::char_traits<char>> &) const
        // Static functions:
        public: static class sophisTools::time::Date sophisTools::time::Date::Build(class std::basic_istream<char, struct std::char_traits<char>> &)
      public:
      };

      class DateTime
      {
        // Functions:
        public: sophisTools::time::DateTime::DateTime(void)
        // Static functions:
        public: static class sophisTools::time::DateTime sophisTools::time::DateTime::Build(class std::basic_istream<char, struct std::char_traits<char>> &)
      public:
      };

      class Time24
      {
        // Functions:
        public: bool sophisTools::time::Time24::operator==(class sophisTools::time::Time24 const &) const
        public: class sophisTools::time::Time24 sophisTools::time::Time24::operator-(class sophisTools::time::Time24 const &) const
        public: bool sophisTools::time::Time24::operator<(class sophisTools::time::Time24 const &) const
        public: class std::basic_ostream<char, struct std::char_traits<char>> & sophisTools::time::Time24::toStream(class std::basic_ostream<char, struct std::char_traits<char>> &) const
        // Static functions:
        public: static class sophisTools::time::Time24 sophisTools::time::Time24::Build(class std::basic_istream<char, struct std::char_traits<char>> &)
        public: static class sophisTools::time::Time24 sophisTools::time::Time24::Build(short, short, short)
        // Variables:
        public: static class sophisTools::time::Time24 const sophisTools::time::Time24::MIDNITE_00
        public: static class sophisTools::time::Time24 const sophisTools::time::Time24::ONE_DAY
      public:
      };

      class/*or struct*/ TimeUtil
      {
        // Static functions:
        public: static class sophisTools::time::Date & sophisTools::time::TimeUtil::addDay(class sophisTools::time::Date &, long)
        public: static class sophisTools::time::DateTime sophisTools::time::TimeUtil::from_Time_t(__int64 const &)
        public: static class sophisTools::time::Date sophisTools::time::TimeUtil::now_to_SophisDate(void)
        public: static class sophisTools::time::Time24 sophisTools::time::TimeUtil::now_to_SophisTime_Time24(void)
        public: static unsigned long sophisTools::time::TimeUtil::secondsFromMidnight(class sophisTools::time::Time24 const &)
        public: static unsigned long sophisTools::time::TimeUtil::secondsToMidnight(class sophisTools::time::Time24 const &)
        public: static __int64 sophisTools::time::TimeUtil::to_Time_t(class sophisTools::time::DateTime const &)
      public:
      };


    };


    // Functions:
    void waitForAllSons(void)
  public:
  };

  namespace/*or class/struct?*/ sphSystem
  {
    // Nested containers:
    namespace/*or class/struct?*/ base
    {
      // Nested containers:
      class AppDomainHelper
      {
        // Functions:
        public: class sphSystem::base::AppDomainHelper & sphSystem::base::AppDomainHelper::operator=(class sphSystem::base::AppDomainHelper &&)
        public: class sphSystem::base::AppDomainHelper & sphSystem::base::AppDomainHelper::operator=(class sphSystem::base::AppDomainHelper const &)
        // Variables:
        public: static void (__cdecl *sphSystem::base::AppDomainHelper::MainAppDomainExecuter)(void (__cdecl *)(void *), void *)
      public:
      };

      class/*or struct*/ Benchmark
      {
      public:
        // Nested containers:
        class/*or struct*/ Event
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisSystem.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class IListener
        {
        public:
        };


        // Functions:
        public: sphSystem::base::Benchmark::Benchmark(long, class sphSystem::base::Benchmark::IListener &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::base::Benchmark::~Benchmark(void)
        public: virtual void sphSystem::base::Benchmark::measure(__int64)
#endif

        // VFTable. Offset=0, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::base::Benchmark::~Benchmark(void); // 0
        public: virtual void sphSystem::base::Benchmark::measure(__int64); // 1
        // VFTable with 0 offset end

      public:
      };

      class Stepper
      {
        // Functions:
        public: sphSystem::base::Stepper::Stepper(class sphSystem::base::Stepper const &)
        public: sphSystem::base::Stepper::Stepper(long, double)
        public: class sphSystem::base::Stepper & sphSystem::base::Stepper::operator=(class sphSystem::base::Stepper const &)
        public: void sphSystem::base::Stepper::beginStep(void)
        public: void sphSystem::base::Stepper::endStep(void)
        public: double sphSystem::base::Stepper::getFrequency(void) const
        public: void sphSystem::base::Stepper::reset(void)
        public: void sphSystem::base::Stepper::setFrequency(double)
        // Variables:
        private: static char const *sphSystem::base::Stepper::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::base::Stepper::~Stepper(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::base::Stepper::~Stepper(void); // 0
        // VFTable with 0 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ comm
    {
      // Nested containers:
      class BytesArchive : public ByteArraySerializableArchive
      {
        // Functions:
        protected: sphSystem::comm::BytesArchive::BytesArchive(class sophisTools::io::ObjectInputStream *, class sophisTools::io::ObjectOutputStream *, class sophisTools::io::ByteArrayRandomAccessIOStream *)
        protected: sphSystem::comm::BytesArchive::BytesArchive(class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectInputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::ObjectOutputStream>, class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayRandomAccessIOStream>)
        public: sphSystem::comm::BytesArchive::BytesArchive(class sphSystem::comm::BytesArchive const &)
        public: class sphSystem::comm::BytesArchive & sphSystem::comm::BytesArchive::operator=(class sphSystem::comm::BytesArchive const &)
        public: void sphSystem::comm::BytesArchive::marshall(class std::vector<unsigned char, class std::allocator<unsigned char>> &, bool) const
        // Static functions:
        public: static class sophis::tools::CSRArchive * sphSystem::comm::BytesArchive::CreateInstance(void)
        public: static class sphSystem::comm::BytesArchive * sphSystem::comm::BytesArchive::create(class std::vector<unsigned char, class std::allocator<unsigned char>> *)
        public: static class sphSystem::comm::BytesArchive * sphSystem::comm::BytesArchive::create(class std::vector<unsigned char, class std::allocator<unsigned char>> *, bool)
        public: static class sphSystem::comm::BytesArchive * sphSystem::comm::BytesArchive::create(void)
        // Variables:
        private: static char const *sphSystem::comm::BytesArchive::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::comm::BytesArchive::~BytesArchive(void)
        public: virtual bool sphSystem::comm::BytesArchive::End(void) const
        public: virtual class std::vector<unsigned char, class std::allocator<unsigned char>> * sphSystem::comm::BytesArchive::marshall(bool)
        public: virtual void sphSystem::comm::BytesArchive::unmarshall(class std::vector<unsigned char, class std::allocator<unsigned char>> *)
#endif

        // VFTable. Offset=0, Size=36, Start=34
        // Corresponding base: comm::comm::ByteArraySerializableArchive
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::comm::BytesArchive::~BytesArchive(void); // 0
        // Overrides:
        public: virtual bool sphSystem::comm::BytesArchive::End(void) const override; // 3
        // Added virtual functions:
        public: virtual class std::vector<unsigned char, class std::allocator<unsigned char>> * sphSystem::comm::BytesArchive::marshall(bool); // 34
        public: virtual void sphSystem::comm::BytesArchive::unmarshall(class std::vector<unsigned char, class std::allocator<unsigned char>> *); // 35
        // VFTable with 0 offset end

        // VFTable. Offset=8, Size=2, Start=2
        // Corresponding base: io::io::Serializable
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::comm::BytesArchive::~BytesArchive(void); // 0
        // VFTable with 8 offset end

      public:
      };

      class ChannelReceiveThread
      {
        // VFTable. Offset=24, Size=11, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_24_0(void); // 0
        public: virtual void unknown_vf_24_1(void); // 1
        public: virtual void unknown_vf_24_2(void); // 2
        public: virtual void unknown_vf_24_3(void); // 3
        public: virtual void unknown_vf_24_4(void); // 4
        public: virtual void unknown_vf_24_5(void); // 5
        public: virtual void unknown_vf_24_6(void); // 6
        public: virtual void unknown_vf_24_7(void); // 7
        public: virtual void unknown_vf_24_8(void); // 8
        public: virtual void unknown_vf_24_9(void); // 9
        public: virtual void unknown_vf_24_10(void); // 10
#endif
        // VFTable with 24 offset end

      public:
      };

      class ChannelSendThread
      {
        // VFTable. Offset=24, Size=11, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_24_0(void); // 0
        public: virtual void unknown_vf_24_1(void); // 1
        public: virtual void unknown_vf_24_2(void); // 2
        public: virtual void unknown_vf_24_3(void); // 3
        public: virtual void unknown_vf_24_4(void); // 4
        public: virtual void unknown_vf_24_5(void); // 5
        public: virtual void unknown_vf_24_6(void); // 6
        public: virtual void unknown_vf_24_7(void); // 7
        public: virtual void unknown_vf_24_8(void); // 8
        public: virtual void unknown_vf_24_9(void); // 9
        public: virtual void unknown_vf_24_10(void); // 10
#endif
        // VFTable with 24 offset end

      public:
      };

      class/*or struct*/ QueuedCoherencyChannel
      {
        // Functions:
        protected: sphSystem::comm::QueuedCoherencyChannel::QueuedCoherencyChannel(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>)
        protected: void sphSystem::comm::QueuedCoherencyChannel::`vbase dtor'(void)
        public: void sphSystem::comm::QueuedCoherencyChannel::push(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel> sphSystem::comm::QueuedCoherencyChannel::create(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel> sphSystem::comm::QueuedCoherencyChannel::create(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>)
        // Variables:
        private: static char const *sphSystem::comm::QueuedCoherencyChannel::__CLASS__
#if 0 // All found virtual functions names:
        protected: virtual sphSystem::comm::QueuedCoherencyChannel::~QueuedCoherencyChannel(void)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::_add_ref(void)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::_remove_ref(void)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::connect(void)
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::QueuedCoherencyChannel::createRcvQueue(void)
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::QueuedCoherencyChannel::createSndQueue(void)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::disconnect(void)
        public: virtual char const * sphSystem::comm::QueuedCoherencyChannel::getConnectionStr(void)
        public: virtual long sphSystem::comm::QueuedCoherencyChannel::getRef(void) const
        public: virtual bool sphSystem::comm::QueuedCoherencyChannel::isConnected(void)
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::processIncomingQueue(void)
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::processOutgoingQueue(void)
        public: virtual unsigned __int64 sphSystem::comm::QueuedCoherencyChannel::ready(void)
        public: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent> sphSystem::comm::QueuedCoherencyChannel::receiveEvent(__int64)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::receiveEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>, __int64)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::sendEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>)
        public: virtual void sphSystem::comm::QueuedCoherencyChannel::setRiskUserName(char const *)
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::start(void)
#endif

        // VFTable. Offset=0, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::start(void); // 0
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::processIncomingQueue(void); // 1
        protected: virtual void sphSystem::comm::QueuedCoherencyChannel::processOutgoingQueue(void); // 2
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::QueuedCoherencyChannel::createSndQueue(void); // 3
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::QueuedCoherencyChannel::createRcvQueue(void); // 4
        // VFTable with 0 offset end

        // VFTable. Offset=280, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        protected: virtual sphSystem::comm::QueuedCoherencyChannel::~QueuedCoherencyChannel(void); // 0
        public: virtual void unknown_vf_280_1(void); // 1
        public: virtual void unknown_vf_280_2(void); // 2
        public: virtual void unknown_vf_280_3(void); // 3
#endif
        // VFTable with 280 offset end

        // VFTable. Offset=296, Size=9, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        protected: virtual sphSystem::comm::QueuedCoherencyChannel::~QueuedCoherencyChannel(void); // 0
        public: virtual void unknown_vf_296_1(void); // 1
        public: virtual void unknown_vf_296_2(void); // 2
        public: virtual void unknown_vf_296_3(void); // 3
        public: virtual void unknown_vf_296_4(void); // 4
        public: virtual void unknown_vf_296_5(void); // 5
        public: virtual void unknown_vf_296_6(void); // 6
        public: virtual void unknown_vf_296_7(void); // 7
        public: virtual void unknown_vf_296_8(void); // 8
#endif
        // VFTable with 296 offset end

      public:
      };

      class/*or struct*/ SafeCoherencyChannel
      {
        // Functions:
        protected: sphSystem::comm::SafeCoherencyChannel::SafeCoherencyChannel(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>)
        public: void sphSystem::comm::SafeCoherencyChannel::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel> sphSystem::comm::SafeCoherencyChannel::create(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>)
        // Variables:
        private: static char const *sphSystem::comm::SafeCoherencyChannel::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::comm::SafeCoherencyChannel::~SafeCoherencyChannel(void)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::_add_ref(void)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::_remove_ref(void)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::connect(void)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::disconnect(void)
        public: virtual char const * sphSystem::comm::SafeCoherencyChannel::getConnectionStr(void)
        public: virtual long sphSystem::comm::SafeCoherencyChannel::getRef(void) const
        public: virtual bool sphSystem::comm::SafeCoherencyChannel::isConnected(void)
        public: virtual unsigned __int64 sphSystem::comm::SafeCoherencyChannel::ready(void)
        public: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent> sphSystem::comm::SafeCoherencyChannel::receiveEvent(__int64)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::receiveEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>, __int64)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::sendEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>)
        public: virtual void sphSystem::comm::SafeCoherencyChannel::setRiskUserName(char const *)
#endif

        // VFTable. Offset=48, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::comm::SafeCoherencyChannel::~SafeCoherencyChannel(void); // 0
        public: virtual void unknown_vf_48_1(void); // 1
        public: virtual void unknown_vf_48_2(void); // 2
        public: virtual void unknown_vf_48_3(void); // 3
#endif
        // VFTable with 48 offset end

        // VFTable. Offset=64, Size=9, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::comm::SafeCoherencyChannel::~SafeCoherencyChannel(void); // 0
        public: virtual void unknown_vf_64_1(void); // 1
        public: virtual void unknown_vf_64_2(void); // 2
        public: virtual void unknown_vf_64_3(void); // 3
        public: virtual void unknown_vf_64_4(void); // 4
        public: virtual void unknown_vf_64_5(void); // 5
        public: virtual void unknown_vf_64_6(void); // 6
        public: virtual void unknown_vf_64_7(void); // 7
        public: virtual void unknown_vf_64_8(void); // 8
#endif
        // VFTable with 64 offset end

      public:
      };

      class SimpleChannelReceiveThread
      {
        // VFTable. Offset=24, Size=11, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_24_0(void); // 0
        public: virtual void unknown_vf_24_1(void); // 1
        public: virtual void unknown_vf_24_2(void); // 2
        public: virtual void unknown_vf_24_3(void); // 3
        public: virtual void unknown_vf_24_4(void); // 4
        public: virtual void unknown_vf_24_5(void); // 5
        public: virtual void unknown_vf_24_6(void); // 6
        public: virtual void unknown_vf_24_7(void); // 7
        public: virtual void unknown_vf_24_8(void); // 8
        public: virtual void unknown_vf_24_9(void); // 9
        public: virtual void unknown_vf_24_10(void); // 10
#endif
        // VFTable with 24 offset end

      public:
      };

      class SimpleChannelSendThread
      {
        // VFTable. Offset=24, Size=11, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_24_0(void); // 0
        public: virtual void unknown_vf_24_1(void); // 1
        public: virtual void unknown_vf_24_2(void); // 2
        public: virtual void unknown_vf_24_3(void); // 3
        public: virtual void unknown_vf_24_4(void); // 4
        public: virtual void unknown_vf_24_5(void); // 5
        public: virtual void unknown_vf_24_6(void); // 6
        public: virtual void unknown_vf_24_7(void); // 7
        public: virtual void unknown_vf_24_8(void); // 8
        public: virtual void unknown_vf_24_9(void); // 9
        public: virtual void unknown_vf_24_10(void); // 10
#endif
        // VFTable with 24 offset end

      public:
      };

      class/*or struct*/ SimpleQueuedCoherencyChannel
      {
        // Functions:
        protected: sphSystem::comm::SimpleQueuedCoherencyChannel::SimpleQueuedCoherencyChannel(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>)
        protected: void sphSystem::comm::SimpleQueuedCoherencyChannel::`vbase dtor'(void)
        public: void sphSystem::comm::SimpleQueuedCoherencyChannel::push(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel> sphSystem::comm::SimpleQueuedCoherencyChannel::create(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel> sphSystem::comm::SimpleQueuedCoherencyChannel::create(class sophisTools::base::RefCountHandle<class sophisTools::comm::CoherencyChannel>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>, class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue>)
        // Variables:
        private: static char const *sphSystem::comm::SimpleQueuedCoherencyChannel::__CLASS__
#if 0 // All found virtual functions names:
        protected: virtual sphSystem::comm::SimpleQueuedCoherencyChannel::~SimpleQueuedCoherencyChannel(void)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::_add_ref(void)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::_remove_ref(void)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::connect(void)
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::SimpleQueuedCoherencyChannel::createRcvQueue(void)
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::SimpleQueuedCoherencyChannel::createSndQueue(void)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::disconnect(void)
        public: virtual char const * sphSystem::comm::SimpleQueuedCoherencyChannel::getConnectionStr(void)
        public: virtual long sphSystem::comm::SimpleQueuedCoherencyChannel::getRef(void) const
        public: virtual bool sphSystem::comm::SimpleQueuedCoherencyChannel::isConnected(void)
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::processIncomingQueue(void)
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::processOutgoingQueue(void)
        public: virtual unsigned __int64 sphSystem::comm::SimpleQueuedCoherencyChannel::ready(void)
        public: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent> sphSystem::comm::SimpleQueuedCoherencyChannel::receiveEvent(__int64)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::receiveEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>, __int64)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::sendEvent(class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEvent>)
        public: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::setRiskUserName(char const *)
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::start(void)
#endif

        // VFTable. Offset=0, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::start(void); // 0
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::processIncomingQueue(void); // 1
        protected: virtual void sphSystem::comm::SimpleQueuedCoherencyChannel::processOutgoingQueue(void); // 2
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::SimpleQueuedCoherencyChannel::createSndQueue(void); // 3
        protected: virtual class sophisTools::base::RefCountHandle<class sophisTools::comm::SerializableRiskEventQueue> sphSystem::comm::SimpleQueuedCoherencyChannel::createRcvQueue(void); // 4
        // VFTable with 0 offset end

        // VFTable. Offset=216, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        protected: virtual sphSystem::comm::SimpleQueuedCoherencyChannel::~SimpleQueuedCoherencyChannel(void); // 0
        public: virtual void unknown_vf_216_1(void); // 1
        public: virtual void unknown_vf_216_2(void); // 2
        public: virtual void unknown_vf_216_3(void); // 3
#endif
        // VFTable with 216 offset end

        // VFTable. Offset=232, Size=9, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        protected: virtual sphSystem::comm::SimpleQueuedCoherencyChannel::~SimpleQueuedCoherencyChannel(void); // 0
        public: virtual void unknown_vf_232_1(void); // 1
        public: virtual void unknown_vf_232_2(void); // 2
        public: virtual void unknown_vf_232_3(void); // 3
        public: virtual void unknown_vf_232_4(void); // 4
        public: virtual void unknown_vf_232_5(void); // 5
        public: virtual void unknown_vf_232_6(void); // 6
        public: virtual void unknown_vf_232_7(void); // 7
        public: virtual void unknown_vf_232_8(void); // 8
#endif
        // VFTable with 232 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ config
    {
      // Nested containers:
      class AdminUtil
      {
        // Functions:
        public: class sphSystem::config::AdminUtil & sphSystem::config::AdminUtil::operator=(class sphSystem::config::AdminUtil &&)
        public: class sphSystem::config::AdminUtil & sphSystem::config::AdminUtil::operator=(class sphSystem::config::AdminUtil const &)
        // Static functions:
        public: static void sphSystem::config::AdminUtil::autoShutDownTimeOut(__int64 const &)
        public: static __int64 sphSystem::config::AdminUtil::autoShutDownTimeOut(void)
        public: static class sophisTools::time::Time24 const * sphSystem::config::AdminUtil::dailyAutoShutDown(void)
        public: static void sphSystem::config::AdminUtil::dailyAutoShutDown(class sophisTools::time::Time24 const &)
        public: static void sphSystem::config::AdminUtil::dispose(void)
        public: static void sphSystem::config::AdminUtil::exitWatcher(bool)
        public: static bool sphSystem::config::AdminUtil::exitWatcher(void)
        public: static void sphSystem::config::AdminUtil::init(void)
        public: static void sphSystem::config::AdminUtil::preinit(void)
        public: static void sphSystem::config::AdminUtil::statistics(bool const &)
        public: static bool sphSystem::config::AdminUtil::statistics(void)
        // Variables:
        private: static char const **sphSystem::config::AdminUtil::__ALLOWED_OPTIONS__
        private: static char const *sphSystem::config::AdminUtil::__PREFIX__
        private: static __int64 sphSystem::config::AdminUtil::fAutoShutDownTimeOut
        private: static class sophisTools::time::Time24 *sphSystem::config::AdminUtil::fDailyAutoShutDown
        private: static bool sphSystem::config::AdminUtil::fExitWatcher
        private: static bool sphSystem::config::AdminUtil::fStatistics
      public:
      };

      class ArgMap
      {
        // Functions:
        public: sphSystem::config::ArgMap::ArgMap(class sphSystem::config::ArgMap const &)
        public: sphSystem::config::ArgMap::ArgMap(class sphSystem::config::PropertySet const &)
        public: sphSystem::config::ArgMap::ArgMap(int, char **)
        public: sphSystem::config::ArgMap::ArgMap(char const *)
        public: sphSystem::config::ArgMap::ArgMap(void)
        public: class sphSystem::config::ArgMap & sphSystem::config::ArgMap::operator=(class sphSystem::config::ArgMap const &)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> & sphSystem::config::ArgMap::operator[](class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::begin(void)
        public: class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::begin(void) const
        public: void sphSystem::config::ArgMap::dispose(void)
        public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::end(void)
        public: class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::end(void) const
        public: void sphSystem::config::ArgMap::erase(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::find(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: class std::_Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>> sphSystem::config::ArgMap::find(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
        public: void sphSystem::config::ArgMap::getArgs(long &, char **&)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ArgMap::getArgsAsString(void)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ArgMap::getArgsAsStringWithoutLog(void)
        protected: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ArgMap::getValue(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, unsigned __int64 &)
        protected: void sphSystem::config::ArgMap::init(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class sphSystem::config::PropertySet const &)
        protected: void sphSystem::config::ArgMap::init(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>)
        public: struct std::pair<class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>, bool> sphSystem::config::ArgMap::insert(struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>> const &)
        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class/*or struct*/ CommandLine
      {
        // Functions:
        public: sphSystem::config::CommandLine::CommandLine(void)
        public: void sphSystem::config::CommandLine::`vbase dtor'(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::CommandLine::~CommandLine(void)
        public: virtual void sphSystem::config::CommandLine::deleteEntry(char const *, char const *)
        protected: virtual void sphSystem::config::CommandLine::doFlush(void)
        public: virtual class sphSystem::config::PropertySet sphSystem::config::CommandLine::getAllProperties(void) const
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::CommandLine::getAllPropertiesAsArgs(void) const
        public: virtual void sphSystem::config::CommandLine::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
        public: virtual class sphSystem::config::PropertySet sphSystem::config::CommandLine::getSection(char const *)
        public: virtual bool sphSystem::config::CommandLine::isEntryDefined(char const *, char const *)
        public: virtual void sphSystem::config::CommandLine::setEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
#endif

        // VFTable. Offset=0, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual class sphSystem::config::PropertySet sphSystem::config::CommandLine::getAllProperties(void) const; // 0
        public: virtual class sphSystem::config::PropertySet sphSystem::config::CommandLine::getSection(char const *); // 1
        public: virtual void sphSystem::config::CommandLine::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &); // 2
        public: virtual void sphSystem::config::CommandLine::setEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &); // 3
        public: virtual void sphSystem::config::CommandLine::deleteEntry(char const *, char const *); // 4
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::CommandLine::getAllPropertiesAsArgs(void) const; // 5
        public: virtual bool sphSystem::config::CommandLine::isEntryDefined(char const *, char const *); // 6
        public: virtual void unknown_vf_0_7(void); // 7
        public: virtual void unknown_vf_0_8(void); // 8
        public: virtual void unknown_vf_0_9(void); // 9
        public: virtual void unknown_vf_0_10(void); // 10
        protected: virtual void sphSystem::config::CommandLine::doFlush(void); // 11
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::config::CommandLine::~CommandLine(void); // 0
        public: virtual void unknown_vf_32_1(void); // 1
        public: virtual void unknown_vf_32_2(void); // 2
        public: virtual void unknown_vf_32_3(void); // 3
#endif
        // VFTable with 32 offset end

      public:
      };

      class/*or struct*/ CommandLineHelper
      {
        // Static functions:
        public: static void sphSystem::config::CommandLineHelper::addOption(char const *, char const *, char const *)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::basename(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::config::CommandLineHelper::deleteOption(char const *, char const *)
        public: static void sphSystem::config::CommandLineHelper::dispose(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::CommandLineHelper::getArgs(void)
        public: static void sphSystem::config::CommandLineHelper::getArgs(long &, char **&)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::getArgsAsString(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::getArgsAsStringWithoutLog(void)
        public: static void sphSystem::config::CommandLineHelper::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sphSystem::config::CommandLineHelper::getExecutable(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::getFullProcessName(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::getFullProcessPath(void)
        public: static char const * sphSystem::config::CommandLineHelper::getProcessName(void)
        public: static void sphSystem::config::CommandLineHelper::init(int, char **)
        public: static bool sphSystem::config::CommandLineHelper::isDeprecated(void)
        public: static bool sphSystem::config::CommandLineHelper::isEntryDefined(char const *, char const *)
        public: static class sphSystem::config::PropertySet sphSystem::config::CommandLineHelper::parse(char const *)
        public: static void sphSystem::config::CommandLineHelper::setDeprecated(void)
        // Variables:
        private: static char const *sphSystem::config::CommandLineHelper::__CLASS__
        protected: static class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::CommandLineHelper::fArgs
        protected: static class sphSystem::config::PropertySet sphSystem::config::CommandLineHelper::fArgsCache
        protected: static class sophisTools::base::RefCountHandle<class sophisTools::io::File> sphSystem::config::CommandLineHelper::fExecutable
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::CommandLineHelper::fProcessName
        private: static bool sphSystem::config::CommandLineHelper::fisDeprecated
      public:
      };

      class ConfigUtil
      {
        // Functions:
        public: class sphSystem::config::ConfigUtil & sphSystem::config::ConfigUtil::operator=(class sphSystem::config::ConfigUtil &&)
        public: class sphSystem::config::ConfigUtil & sphSystem::config::ConfigUtil::operator=(class sphSystem::config::ConfigUtil const &)
        // Static functions:
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::buildStandardNamingPath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::buildStandardNamingPath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::config::ConfigUtil::deleteEntryEveryWhere(char const *, char const *)
        public: static void sphSystem::config::ConfigUtil::dispose(void)
        public: static bool sphSystem::config::ConfigUtil::doesBelongToAGroup(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getAccessPointName(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::ConfigUtil::getAllAsArgs(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::getCommandLine(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getConfigName(void)
        public: static void sphSystem::config::ConfigUtil::getConnectionEntry(char const *, class sophisTools::comm::Connection &)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getDBDirectory(void)
        public: static char const * sphSystem::config::ConfigUtil::getDomainName(void)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, short &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, short &, short const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, long &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, long &, long const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, unsigned long &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, unsigned long &, unsigned long const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, double &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, double &, double const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class sophisTools::time::Date &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class sophisTools::time::Date &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class sophisTools::time::Time24 &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, class sophisTools::time::Time24 &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, bool &)
        public: static void sphSystem::config::ConfigUtil::getEntryValue(char const *, char const *, bool &, bool const &)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getEnvironementDirectory(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::getGlobalParameters(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::getLocalParameters(void)
        public: static class sphSystem::config::PropertySet sphSystem::config::ConfigUtil::getSection(char const *)
        public: static class sphSystem::config::SetOfPropertySet sphSystem::config::ConfigUtil::getSequence(char const *, char const *)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getServerApplication(void)
        public: static char const * sphSystem::config::ConfigUtil::getServerCluster(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getServerGroup(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getServerInstance(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getServerName(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::getServerNameOnly(void)
        public: static void sphSystem::config::ConfigUtil::init(class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>, class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>)
        public: static bool sphSystem::config::ConfigUtil::isEntryDefined(char const *, char const *)
        public: static void sphSystem::config::ConfigUtil::preinit(void)
        public: static void sphSystem::config::ConfigUtil::setConnectionEntry(char const *, class sophisTools::comm::Connection const &)
        public: static void sphSystem::config::ConfigUtil::setEntryValue(char const *, char const *, char const *)
        // Variables:
        private: static char const **sphSystem::config::ConfigUtil::__ALLOWED_OPTIONS__
        private: static char const *sphSystem::config::ConfigUtil::__CLASS__
        private: static char const *sphSystem::config::ConfigUtil::__PREFIX__
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fApplicationName
        private: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::fCommandLine
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fDBDirectory
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fDomainName
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fEnvironementDirectory
        private: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::fGlobal
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fGlobalIniDir
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fGlobalIniFile
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fGroupName
        private: static class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters> sphSystem::config::ConfigUtil::fLocal
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fLocalIniDir
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fLocalIniFile
        private: static class boost::recursive_mutex sphSystem::config::ConfigUtil::fMutex
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fServerCLuster
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fServerFullName
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fServerInstance
        private: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::config::ConfigUtil::fServerName
        private: static bool sphSystem::config::ConfigUtil::fUseConfigurationServer
        private: static bool sphSystem::config::ConfigUtil::fWriteDefault
      public:
      };

      class IniFile
      {
        // Functions:
        public: sphSystem::config::IniFile::IniFile(char const *, bool)
        public: void sphSystem::config::IniFile::`vbase dtor'(void)
        public: void sphSystem::config::IniFile::load(void)
        public: void sphSystem::config::IniFile::reload(void)
        // Variables:
        private: static char const *sphSystem::config::IniFile::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::IniFile::~IniFile(void)
        public: virtual void sphSystem::config::IniFile::doFlush(void)
        public: virtual void sphSystem::config::IniFile::readFromStream(class sophisTools::base::RefCountHandle<class sophisTools::io::LineInputStream>)
        protected: virtual void sphSystem::config::IniFile::write(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>, class sphSystem::config::PropertySet const &)
        protected: virtual void sphSystem::config::IniFile::write(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>, char const *, long, class sphSystem::config::PropertySet const &)
        public: virtual void sphSystem::config::IniFile::writeFromStream(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>)
#endif

        // VFTable. Offset=0, Size=16, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::IniFile::~IniFile(void); // 0
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
        public: virtual void sphSystem::config::IniFile::doFlush(void); // 11
        public: virtual void sphSystem::config::IniFile::readFromStream(class sophisTools::base::RefCountHandle<class sophisTools::io::LineInputStream>); // 12
        public: virtual void sphSystem::config::IniFile::writeFromStream(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>); // 13
        protected: virtual void sphSystem::config::IniFile::write(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>, char const *, long, class sphSystem::config::PropertySet const &); // 14
        protected: virtual void sphSystem::config::IniFile::write(class sophisTools::base::RefCountHandle<class sophisTools::io::LineOutputStream>, class sphSystem::config::PropertySet const &); // 15
        // VFTable with 0 offset end

        // VFTable. Offset=80, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::config::IniFile::~IniFile(void); // 0
        public: virtual void unknown_vf_80_1(void); // 1
        public: virtual void unknown_vf_80_2(void); // 2
        public: virtual void unknown_vf_80_3(void); // 3
#endif
        // VFTable with 80 offset end

      public:
      };

      class IniFileUtil
      {
        // Functions:
        public: class sphSystem::config::IniFileUtil & sphSystem::config::IniFileUtil::operator=(class sphSystem::config::IniFileUtil &&)
        public: class sphSystem::config::IniFileUtil & sphSystem::config::IniFileUtil::operator=(class sphSystem::config::IniFileUtil const &)
        // Static functions:
        public: static class sphSystem::config::IniFile * sphSystem::config::IniFileUtil::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool)
        public: static class sphSystem::config::IniFile * sphSystem::config::IniFileUtil::create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool)
        public: static class sphSystem::config::IniFile * sphSystem::config::IniFileUtil::create(class sophisTools::base::RefCountHandle<class sophisTools::io::File>, bool)
        // Variables:
        private: static char const *sphSystem::config::IniFileUtil::__CLASS__
      public:
      };

      class InitParameters
      {
        // Functions:
        public: sphSystem::config::InitParameters::InitParameters(void)
        public: void sphSystem::config::InitParameters::getEntryValue(char const *, char const *, long &)
        public: void sphSystem::config::InitParameters::setEntryValue(char const *, char const *, long)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InitParameters::~InitParameters(void)
        public: virtual void sphSystem::config::InitParameters::flush(void)
        protected: virtual void sphSystem::config::InitParameters::flushed(void)
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::InitParameters::getAllPropertiesAsArgs(void) const
        public: virtual bool sphSystem::config::InitParameters::isEntryDefined(char const *, char const *)
        protected: virtual bool sphSystem::config::InitParameters::isModified(void) const
        protected: virtual void sphSystem::config::InitParameters::modified(void)
#endif

        // VFTable. Offset=0, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::InitParameters::~InitParameters(void) = 0; // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void) = 0; // 2
        public: virtual void unknown_vf_0_3(void) = 0; // 3
        public: virtual void unknown_vf_0_4(void) = 0; // 4
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::config::ArgMap> sphSystem::config::InitParameters::getAllPropertiesAsArgs(void) const; // 5
        public: virtual bool sphSystem::config::InitParameters::isEntryDefined(char const *, char const *); // 6
        public: virtual void sphSystem::config::InitParameters::flush(void); // 7
        protected: virtual bool sphSystem::config::InitParameters::isModified(void) const; // 8
        protected: virtual void sphSystem::config::InitParameters::modified(void); // 9
        protected: virtual void sphSystem::config::InitParameters::flushed(void); // 10
        public: virtual void unknown_vf_0_11(void) = 0; // 11
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::config::InitParameters::~InitParameters(void); // 0
        public: virtual void unknown_vf_32_1(void); // 1
        public: virtual void unknown_vf_32_2(void); // 2
        public: virtual void unknown_vf_32_3(void); // 3
#endif
        // VFTable with 32 offset end

      public:
      };

      class InitParametersException : public ExceptionBase
      {
        // Functions:
        protected: sphSystem::config::InitParametersException::InitParametersException(char const *, char const *)
        public: sphSystem::config::InitParametersException::InitParametersException(class sphSystem::config::InitParametersException &&)
        public: sphSystem::config::InitParametersException::InitParametersException(class sphSystem::config::InitParametersException const &)
        public: class sphSystem::config::InitParametersException & sphSystem::config::InitParametersException::operator=(class sphSystem::config::InitParametersException &&)
        public: class sphSystem::config::InitParametersException & sphSystem::config::InitParametersException::operator=(class sphSystem::config::InitParametersException const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InitParametersException::~InitParametersException(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::InitParametersException::~InitParametersException(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class InvalidEntry : public InitParametersException
      {
        // Functions:
        public: sphSystem::config::InvalidEntry::InvalidEntry(class sphSystem::config::InvalidEntry &&)
        public: sphSystem::config::InvalidEntry::InvalidEntry(class sphSystem::config::InvalidEntry const &)
        public: sphSystem::config::InvalidEntry::InvalidEntry(char const *)
        public: class sphSystem::config::InvalidEntry & sphSystem::config::InvalidEntry::operator=(class sphSystem::config::InvalidEntry &&)
        public: class sphSystem::config::InvalidEntry & sphSystem::config::InvalidEntry::operator=(class sphSystem::config::InvalidEntry const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InvalidEntry::~InvalidEntry(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: config::config::InitParametersException
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::config::InvalidEntry::~InvalidEntry(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class InvalidFileException : public ExceptionBase
      {
        // Functions:
        public: sphSystem::config::InvalidFileException::InvalidFileException(class sphSystem::config::InvalidFileException &&)
        public: sphSystem::config::InvalidFileException::InvalidFileException(class sphSystem::config::InvalidFileException const &)
        public: sphSystem::config::InvalidFileException::InvalidFileException(char const *, long)
        public: class sphSystem::config::InvalidFileException & sphSystem::config::InvalidFileException::operator=(class sphSystem::config::InvalidFileException &&)
        public: class sphSystem::config::InvalidFileException & sphSystem::config::InvalidFileException::operator=(class sphSystem::config::InvalidFileException const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InvalidFileException::~InvalidFileException(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::InvalidFileException::~InvalidFileException(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class InvalidPropertySetException : public ExceptionBase
      {
        // Functions:
        public: sphSystem::config::InvalidPropertySetException::InvalidPropertySetException(class sphSystem::config::InvalidPropertySetException &&)
        public: sphSystem::config::InvalidPropertySetException::InvalidPropertySetException(class sphSystem::config::InvalidPropertySetException const &)
        public: sphSystem::config::InvalidPropertySetException::InvalidPropertySetException(char const *)
        public: class sphSystem::config::InvalidPropertySetException & sphSystem::config::InvalidPropertySetException::operator=(class sphSystem::config::InvalidPropertySetException &&)
        public: class sphSystem::config::InvalidPropertySetException & sphSystem::config::InvalidPropertySetException::operator=(class sphSystem::config::InvalidPropertySetException const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InvalidPropertySetException::~InvalidPropertySetException(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::InvalidPropertySetException::~InvalidPropertySetException(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class InvalidTypeCodeException : public ExceptionBase
      {
        // Functions:
        public: sphSystem::config::InvalidTypeCodeException::InvalidTypeCodeException(class sphSystem::config::InvalidTypeCodeException &&)
        public: sphSystem::config::InvalidTypeCodeException::InvalidTypeCodeException(class sphSystem::config::InvalidTypeCodeException const &)
        public: sphSystem::config::InvalidTypeCodeException::InvalidTypeCodeException(char const *)
        public: class sphSystem::config::InvalidTypeCodeException & sphSystem::config::InvalidTypeCodeException::operator=(class sphSystem::config::InvalidTypeCodeException &&)
        public: class sphSystem::config::InvalidTypeCodeException & sphSystem::config::InvalidTypeCodeException::operator=(class sphSystem::config::InvalidTypeCodeException const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::InvalidTypeCodeException::~InvalidTypeCodeException(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::config::InvalidTypeCodeException::~InvalidTypeCodeException(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ LocalInitParameters
      {
        // Functions:
        public: sphSystem::config::LocalInitParameters::LocalInitParameters(class sphSystem::config::PropertySet const &)
        public: sphSystem::config::LocalInitParameters::LocalInitParameters(void)
        public: void sphSystem::config::LocalInitParameters::`vbase dtor'(void)
        protected: void sphSystem::config::LocalInitParameters::setProperties(class sphSystem::config::PropertySet const &)
        // Variables:
        private: static char const *sphSystem::config::LocalInitParameters::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::LocalInitParameters::~LocalInitParameters(void)
        public: virtual void sphSystem::config::LocalInitParameters::deleteEntry(char const *, char const *)
        protected: virtual void sphSystem::config::LocalInitParameters::doFlush(void)
        public: virtual class sphSystem::config::PropertySet sphSystem::config::LocalInitParameters::getAllProperties(void) const
        public: virtual void sphSystem::config::LocalInitParameters::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
        public: virtual class sphSystem::config::PropertySet sphSystem::config::LocalInitParameters::getSection(char const *)
        public: virtual bool sphSystem::config::LocalInitParameters::isEntryDefined(char const *, char const *)
        public: virtual void sphSystem::config::LocalInitParameters::setEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
#endif

        // VFTable. Offset=0, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual class sphSystem::config::PropertySet sphSystem::config::LocalInitParameters::getAllProperties(void) const; // 0
        public: virtual class sphSystem::config::PropertySet sphSystem::config::LocalInitParameters::getSection(char const *); // 1
        public: virtual void sphSystem::config::LocalInitParameters::getEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &); // 2
        public: virtual void sphSystem::config::LocalInitParameters::setEntryValue(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &); // 3
        public: virtual void sphSystem::config::LocalInitParameters::deleteEntry(char const *, char const *); // 4
        public: virtual void unknown_vf_0_5(void); // 5
        public: virtual bool sphSystem::config::LocalInitParameters::isEntryDefined(char const *, char const *); // 6
        public: virtual void unknown_vf_0_7(void); // 7
        public: virtual void unknown_vf_0_8(void); // 8
        public: virtual void unknown_vf_0_9(void); // 9
        public: virtual void unknown_vf_0_10(void); // 10
        protected: virtual void sphSystem::config::LocalInitParameters::doFlush(void); // 11
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::config::LocalInitParameters::~LocalInitParameters(void); // 0
        public: virtual void unknown_vf_40_1(void); // 1
        public: virtual void unknown_vf_40_2(void); // 2
        public: virtual void unknown_vf_40_3(void); // 3
#endif
        // VFTable with 40 offset end

      public:
      };

      class NoSuchEntry : public InitParametersException
      {
        // Functions:
        protected: sphSystem::config::NoSuchEntry::NoSuchEntry(char const *, char const *)
        public: sphSystem::config::NoSuchEntry::NoSuchEntry(class sphSystem::config::NoSuchEntry &&)
        public: sphSystem::config::NoSuchEntry::NoSuchEntry(class sphSystem::config::NoSuchEntry const &)
        public: sphSystem::config::NoSuchEntry::NoSuchEntry(char const *)
        public: class sphSystem::config::NoSuchEntry & sphSystem::config::NoSuchEntry::operator=(class sphSystem::config::NoSuchEntry &&)
        public: class sphSystem::config::NoSuchEntry & sphSystem::config::NoSuchEntry::operator=(class sphSystem::config::NoSuchEntry const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::NoSuchEntry::~NoSuchEntry(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: config::config::InitParametersException
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::config::NoSuchEntry::~NoSuchEntry(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class NoSuchSection : public InitParametersException
      {
        // Functions:
        protected: sphSystem::config::NoSuchSection::NoSuchSection(char const *, char const *)
        public: sphSystem::config::NoSuchSection::NoSuchSection(class sphSystem::config::NoSuchSection &&)
        public: sphSystem::config::NoSuchSection::NoSuchSection(class sphSystem::config::NoSuchSection const &)
        public: sphSystem::config::NoSuchSection::NoSuchSection(char const *)
        public: class sphSystem::config::NoSuchSection & sphSystem::config::NoSuchSection::operator=(class sphSystem::config::NoSuchSection &&)
        public: class sphSystem::config::NoSuchSection & sphSystem::config::NoSuchSection::operator=(class sphSystem::config::NoSuchSection const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::NoSuchSection::~NoSuchSection(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: config::config::InitParametersException
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::config::NoSuchSection::~NoSuchSection(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class NoSuchSequence : public InitParametersException
      {
        // Functions:
        public: sphSystem::config::NoSuchSequence::NoSuchSequence(class sphSystem::config::NoSuchSequence &&)
        public: sphSystem::config::NoSuchSequence::NoSuchSequence(class sphSystem::config::NoSuchSequence const &)
        public: sphSystem::config::NoSuchSequence::NoSuchSequence(char const *)
        public: class sphSystem::config::NoSuchSequence & sphSystem::config::NoSuchSequence::operator=(class sphSystem::config::NoSuchSequence &&)
        public: class sphSystem::config::NoSuchSequence & sphSystem::config::NoSuchSequence::operator=(class sphSystem::config::NoSuchSequence const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::NoSuchSequence::~NoSuchSequence(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: config::config::InitParametersException
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::config::NoSuchSequence::~NoSuchSequence(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class Property
      {
      public:
        // Enumerations:
        enum ValueKind : int {
        };

        // Functions:
        public: sphSystem::config::Property::Property(class sphSystem::config::Property const &)
        public: sphSystem::config::Property::Property(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: sphSystem::config::Property::~Property(void)
        public: void sphSystem::config::Property::copyValue(class sphSystem::config::Property const &)
        public: enum sphSystem::config::Property::ValueKind sphSystem::config::Property::getKind(void) const
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & sphSystem::config::Property::getName(void) const
        public: bool sphSystem::config::Property::getValue(char &) const
        public: bool sphSystem::config::Property::getValue(unsigned char &) const
        public: bool sphSystem::config::Property::getValue(short &) const
        public: bool sphSystem::config::Property::getValue(unsigned short &) const
        public: bool sphSystem::config::Property::getValue(long &) const
        public: bool sphSystem::config::Property::getValue(unsigned long &) const
        public: bool sphSystem::config::Property::getValue(float &) const
        public: bool sphSystem::config::Property::getValue(double &) const
        public: bool sphSystem::config::Property::getValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const
        public: bool sphSystem::config::Property::getValue(class sphSystem::config::PropertySet &) const
        public: bool sphSystem::config::Property::getValue(class sphSystem::config::SetOfPropertySet &) const
        public: bool sphSystem::config::Property::getValue(__int64 &) const
        public: bool sphSystem::config::Property::getValue(unsigned __int64 &) const
        public: bool sphSystem::config::Property::getValue(bool &) const
        public: void sphSystem::config::Property::setValue(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: void sphSystem::config::Property::setValue(class sphSystem::config::PropertySet const &)
        public: void sphSystem::config::Property::setValue(class sphSystem::config::SetOfPropertySet const &)
        public: void sphSystem::config::Property::setValue(__int64 const &)
        public: void sphSystem::config::Property::setValue(unsigned __int64 const &)
        public: void sphSystem::config::Property::setValue(char)
        public: void sphSystem::config::Property::setValue(unsigned char)
        public: void sphSystem::config::Property::setValue(short)
        public: void sphSystem::config::Property::setValue(unsigned short)
        public: void sphSystem::config::Property::setValue(long)
        public: void sphSystem::config::Property::setValue(unsigned long)
        public: void sphSystem::config::Property::setValue(float)
        public: void sphSystem::config::Property::setValue(double)
        public: void sphSystem::config::Property::setValue(bool)
      public:
      };

      class PropertyReader
      {
        // Functions:
        protected: sphSystem::config::PropertyReader::PropertyReader(class sphSystem::config::PropertySet const &)
        public: void sphSystem::config::PropertyReader::`vbase dtor'(void)
        public: bool sphSystem::config::PropertyReader::getBool(char const *)
        public: class sophisTools::CSRDay sphSystem::config::PropertyReader::getDate(char const *)
        public: __int64 sphSystem::config::PropertyReader::getDateTime(char const *)
        public: double sphSystem::config::PropertyReader::getDouble(char const *)
        public: float sphSystem::config::PropertyReader::getFloat(char const *)
        public: long sphSystem::config::PropertyReader::getLong(char const *)
        public: unsigned long sphSystem::config::PropertyReader::getPropertiesCount(void)
        public: class sphSystem::config::Property const * sphSystem::config::PropertyReader::getProperty(char const *)
        public: class sphSystem::config::PropertySet const & sphSystem::config::PropertyReader::getPropertySet(char const *)
        public: char const * sphSystem::config::PropertyReader::getString(char const *)
        public: unsigned long sphSystem::config::PropertyReader::getTime(char const *)
        public: long sphSystem::config::PropertyReader::getULong(char const *)
        public: bool sphSystem::config::PropertyReader::isPropertyDefined(char const *)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::config::PropertyReader> sphSystem::config::PropertyReader::create(class sphSystem::config::PropertySet const &)
        // Variables:
        private: static char const *sphSystem::config::PropertyReader::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::config::PropertyReader::~PropertyReader(void)
        public: virtual void sphSystem::config::PropertyReader::propertiesChanged(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::config::PropertyReader::propertiesChanged(void); // 0
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::config::PropertyReader::~PropertyReader(void); // 0
        public: virtual void unknown_vf_40_1(void); // 1
        public: virtual void unknown_vf_40_2(void); // 2
        public: virtual void unknown_vf_40_3(void); // 3
#endif
        // VFTable with 40 offset end

      public:
      };

      class PropertySet
      {
        // Functions:
        public: sphSystem::config::PropertySet::PropertySet(class sphSystem::config::PropertySet const &)
        public: sphSystem::config::PropertySet::PropertySet(void)
        public: sphSystem::config::PropertySet::~PropertySet(void)
        public: class sphSystem::config::PropertySet & sphSystem::config::PropertySet::operator=(class sphSystem::config::PropertySet const &)
        public: class sphSystem::config::Property * sphSystem::config::PropertySet::operator[](unsigned __int64)
        public: class sphSystem::config::Property const * sphSystem::config::PropertySet::operator[](unsigned __int64) const
        public: bool sphSystem::config::PropertySet::addProperty(class sphSystem::config::Property const &, bool)
        public: void sphSystem::config::PropertySet::dump(class std::basic_ostream<char, struct std::char_traits<char>> &) const
        public: class sphSystem::config::Property * sphSystem::config::PropertySet::getProperty(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: class sphSystem::config::Property const * sphSystem::config::PropertySet::getProperty(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
        public: unsigned __int64 sphSystem::config::PropertySet::getSize(void) const
        public: bool sphSystem::config::PropertySet::isDefined(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
        public: void sphSystem::config::PropertySet::merge(class sphSystem::config::PropertySet const &)
        public: void sphSystem::config::PropertySet::merge(class sphSystem::config::PropertySet const &, bool)
        public: void sphSystem::config::PropertySet::removeProperty(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
      public:
      };

      class SetOfPropertySet
      {
        // Functions:
        public: sphSystem::config::SetOfPropertySet::SetOfPropertySet(class sphSystem::config::SetOfPropertySet const &)
        public: sphSystem::config::SetOfPropertySet::SetOfPropertySet(void)
        public: sphSystem::config::SetOfPropertySet::~SetOfPropertySet(void)
        public: class sphSystem::config::SetOfPropertySet & sphSystem::config::SetOfPropertySet::operator=(class sphSystem::config::SetOfPropertySet const &)
        public: class sphSystem::config::PropertySet * sphSystem::config::SetOfPropertySet::operator[](unsigned __int64)
        public: class sphSystem::config::PropertySet const * sphSystem::config::SetOfPropertySet::operator[](unsigned __int64) const
        public: unsigned __int64 sphSystem::config::SetOfPropertySet::getSize(void) const
        public: void sphSystem::config::SetOfPropertySet::resize(unsigned __int64)
      public:
      };


    };

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

        // VFTable. Offset=0, Size=8, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::dataModel::BasicTransformer::~BasicTransformer(void) = 0; // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void) = 0; // 2
        public: virtual void unknown_vf_0_3(void) = 0; // 3
        public: virtual void unknown_vf_0_4(void) = 0; // 4
        public: virtual void unknown_vf_0_5(void) = 0; // 5
        public: virtual void sphSystem::dataModel::BasicTransformer::getEntryValue(char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &); // 6
        public: virtual bool sphSystem::dataModel::BasicTransformer::hasEntry(char const *); // 7
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::dataModel::BasicTransformer::~BasicTransformer(void); // 0
        public: virtual void unknown_vf_32_1(void); // 1
        public: virtual void unknown_vf_32_2(void); // 2
        public: virtual void unknown_vf_32_3(void); // 3
#endif
        // VFTable with 32 offset end

      public:
      };

      class Context
      {
        // Functions:
        public: sphSystem::dataModel::Context::Context(class sphSystem::dataModel::Context const &)
        public: sphSystem::dataModel::Context::Context(void)
        public: class sphSystem::dataModel::Context & sphSystem::dataModel::Context::operator=(class sphSystem::dataModel::Context const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::dataModel::Context::~Context(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::dataModel::Context::~Context(void); // 0
        // VFTable with 0 offset end

      public:
      };

      template<typename T1      >
      class/*or struct*/ GenericContext
      {
      public:
      };
#if 0 // Instances:
// <class sophis::tools::util::UIDGenerator>
#if 0
      template<>
      class/*or struct*/ GenericContext<class sophis::tools::util::UIDGenerator> : public Context
      {
        // Functions:
        public: sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::GenericContext<class sophis::tools::util::UIDGenerator>(class sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator> const &)
        public: sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::GenericContext<class sophis::tools::util::UIDGenerator>(void)
        public: class sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator> & sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::operator=(class sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator> &&)
        public: class sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator> & sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::operator=(class sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator> const &)
        public: class sophis::tools::util::UIDGenerator * sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::get(void)
        public: void sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::pop(void)
        public: void sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::push(class sophis::tools::util::UIDGenerator &)
        public: void sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::push(class sophis::tools::util::UIDGenerator const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::~GenericContext<class sophis::tools::util::UIDGenerator>(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: dataModel::dataModel::Context
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::dataModel::GenericContext<class sophis::tools::util::UIDGenerator>::~GenericContext<class sophis::tools::util::UIDGenerator>(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


#if 0
      template<>
      class GenericContext<class sophis::tools::util::UIDGenerator>
      {
      public:
      };
#endif

      class StorageContext
      {
        // Functions:
        public: sphSystem::dataModel::StorageContext::StorageContext(class sphSystem::dataModel::StorageContext const &)
        public: sphSystem::dataModel::StorageContext::StorageContext(void)
        public: class sphSystem::dataModel::StorageContext & sphSystem::dataModel::StorageContext::operator=(class sphSystem::dataModel::StorageContext const &)
        // Static functions:
        public: static class sphSystem::dataModel::StorageContext & sphSystem::dataModel::StorageContext::getInstance(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::dataModel::StorageContext::~StorageContext(void)
#endif

        // VFTable. Offset=0, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::dataModel::StorageContext::~StorageContext(void); // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void) = 0; // 2
        public: virtual void unknown_vf_0_3(void) = 0; // 3
        public: virtual void unknown_vf_0_4(void) = 0; // 4
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ StorageContextImpl : public StorageContext
      {
        // VFTable. Offset=0, Size=5, Start=5
        // Corresponding base: dataModel::dataModel::StorageContext
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };

      class UIDGeneratorContext : public GenericContext<class sophis::tools::util::UIDGenerator>
      {
        // Functions:
        public: sphSystem::dataModel::UIDGeneratorContext::UIDGeneratorContext(class sphSystem::dataModel::UIDGeneratorContext &&)
        public: sphSystem::dataModel::UIDGeneratorContext::UIDGeneratorContext(class sphSystem::dataModel::UIDGeneratorContext const &)
        public: sphSystem::dataModel::UIDGeneratorContext::UIDGeneratorContext(void)
        public: class sphSystem::dataModel::UIDGeneratorContext & sphSystem::dataModel::UIDGeneratorContext::operator=(class sphSystem::dataModel::UIDGeneratorContext &&)
        public: class sphSystem::dataModel::UIDGeneratorContext & sphSystem::dataModel::UIDGeneratorContext::operator=(class sphSystem::dataModel::UIDGeneratorContext const &)
        // Static functions:
        public: static class sphSystem::dataModel::Context * sphSystem::dataModel::UIDGeneratorContext::create(void)
        public: static class sphSystem::dataModel::UIDGeneratorContext & sphSystem::dataModel::UIDGeneratorContext::getInstance(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::dataModel::UIDGeneratorContext::~UIDGeneratorContext(void)
#endif

        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: GenericContext::GenericContext::GenericContext::GenericContext<class sophis::tools::util::UIDGenerator>
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::dataModel::UIDGeneratorContext::~UIDGeneratorContext(void); // 0
        // VFTable with 0 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ logger
    {
      // Nested containers:
      class AutoShiftWorkerThread
      {
        // VFTable. Offset=24, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_24_0(void); // 0
        public: virtual void unknown_vf_24_1(void); // 1
        public: virtual void unknown_vf_24_2(void); // 2
        public: virtual void unknown_vf_24_3(void); // 3
        public: virtual void unknown_vf_24_4(void); // 4
        public: virtual void unknown_vf_24_5(void); // 5
        public: virtual void unknown_vf_24_6(void); // 6
        public: virtual void unknown_vf_24_7(void); // 7
        public: virtual void unknown_vf_24_8(void); // 8
        public: virtual void unknown_vf_24_9(void); // 9
        public: virtual void unknown_vf_24_10(void); // 10
        public: virtual void unknown_vf_24_11(void); // 11
#endif
        // VFTable with 24 offset end

      public:
      };

      class/*or struct*/ AutoShiftableLogger
      {
        // Functions:
        protected: sphSystem::logger::AutoShiftableLogger::AutoShiftableLogger(class sophisTools::time::Time24 const &, class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger>, class sophisTools::base::RefCountHandle<class sphSystem::logger::SafeLogger>)
        public: void sphSystem::logger::AutoShiftableLogger::`vbase dtor'(void)
        protected: void sphSystem::logger::AutoShiftableLogger::createAndStartThread(void)
        public: void sphSystem::logger::AutoShiftableLogger::stop(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger> sphSystem::logger::AutoShiftableLogger::create(class sophisTools::time::Time24 const &, class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger>, bool, bool)
        // Variables:
        private: static char const *sphSystem::logger::AutoShiftableLogger::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::logger::AutoShiftableLogger::~AutoShiftableLogger(void)
#endif

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::AutoShiftableLogger::~AutoShiftableLogger(void); // 0
        public: virtual void unknown_vf_40_1(void); // 1
        public: virtual void unknown_vf_40_2(void); // 2
        public: virtual void unknown_vf_40_3(void); // 3
#endif
        // VFTable with 40 offset end

        // VFTable. Offset=56, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::AutoShiftableLogger::~AutoShiftableLogger(void); // 0
        public: virtual void unknown_vf_56_1(void); // 1
#endif
        // VFTable with 56 offset end

        // VFTable. Offset=80, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::AutoShiftableLogger::~AutoShiftableLogger(void); // 0
#endif
        // VFTable with 80 offset end

      public:
      };

      class/*or struct*/ FilterEngineImpl
      {
      public:
        // Nested containers:
        struct ConstraintValue
        {
        public:
        };


        // Functions:
        protected: sphSystem::logger::FilterEngineImpl::FilterEngineImpl(void)
        public: void sphSystem::logger::FilterEngineImpl::`vbase dtor'(void)
        private: bool sphSystem::logger::FilterEngineImpl::matchLevelAndThreadName(struct sphSystem::logger::FilterEngineImpl::ConstraintValue const &, enum Log::Severity const &)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::FilterEngine> sphSystem::logger::FilterEngineImpl::create(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::logger::FilterEngineImpl::~FilterEngineImpl(void)
        public: virtual void sphSystem::logger::FilterEngineImpl::_add_ref(void)
        public: virtual void sphSystem::logger::FilterEngineImpl::_remove_ref(void)
        public: virtual void sphSystem::logger::FilterEngineImpl::addConstraints(class std::list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>>)
        public: virtual class std::list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>> sphSystem::logger::FilterEngineImpl::getAllConstraints(void)
        public: virtual bool sphSystem::logger::FilterEngineImpl::getMode(void)
        public: virtual long sphSystem::logger::FilterEngineImpl::getRef(void) const
        public: virtual bool sphSystem::logger::FilterEngineImpl::isMatched(char const *, char const *, enum Log::Severity)
        public: virtual void sphSystem::logger::FilterEngineImpl::removeAllConstraints(void)
        public: virtual void sphSystem::logger::FilterEngineImpl::setMode(bool)
#endif

        // VFTable. Offset=0, Size=10, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::logger::FilterEngineImpl::_add_ref(void); // 0
        public: virtual void sphSystem::logger::FilterEngineImpl::_remove_ref(void); // 1
        public: virtual long sphSystem::logger::FilterEngineImpl::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::logger::FilterEngineImpl::addConstraints(class std::list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>>); // 4
        public: virtual void sphSystem::logger::FilterEngineImpl::removeAllConstraints(void); // 5
        public: virtual void sphSystem::logger::FilterEngineImpl::setMode(bool); // 6
        public: virtual bool sphSystem::logger::FilterEngineImpl::isMatched(char const *, char const *, enum Log::Severity); // 7
        public: virtual class std::list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>> sphSystem::logger::FilterEngineImpl::getAllConstraints(void); // 8
        public: virtual bool sphSystem::logger::FilterEngineImpl::getMode(void); // 9
        // VFTable with 0 offset end

        // VFTable. Offset=128, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::FilterEngineImpl::~FilterEngineImpl(void); // 0
        public: virtual void unknown_vf_128_1(void); // 1
        public: virtual void unknown_vf_128_2(void); // 2
        public: virtual void unknown_vf_128_3(void); // 3
#endif
        // VFTable with 128 offset end

      public:
      };

      class LoggedException : public ExceptionBase
      {
        // Functions:
        public: sphSystem::logger::LoggedException::LoggedException(class sphSystem::logger::LoggedException const &)
        public: sphSystem::logger::LoggedException::LoggedException(char const *)
        public: class sphSystem::logger::LoggedException & sphSystem::logger::LoggedException::operator=(class sphSystem::logger::LoggedException const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::logger::LoggedException::~LoggedException(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::logger::LoggedException::~LoggedException(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class LoggerBase
      {
        // Functions:
        public: class sphSystem::logger::LoggerBase & sphSystem::logger::LoggerBase::operator=(class sphSystem::logger::LoggerBase &&)
        public: class sphSystem::logger::LoggerBase & sphSystem::logger::LoggerBase::operator=(class sphSystem::logger::LoggerBase const &)
        // Static functions:
        public: static bool sphSystem::logger::LoggerBase::GetAutoShift(void)
        public: static void sphSystem::logger::LoggerBase::SetAutoShift(bool)
        public: static enum Log::Severity sphSystem::logger::LoggerBase::consoleSeverity(void)
        public: static void sphSystem::logger::LoggerBase::consoleSeverity(enum Log::Severity)
        public: static void sphSystem::logger::LoggerBase::dispose(void)
        public: static bool sphSystem::logger::LoggerBase::fillFilterEngineFromInitFile(void)
        public: static bool sphSystem::logger::LoggerBase::getBuffered(void)
        public: static bool sphSystem::logger::LoggerBase::getClearFileBefore(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::getLogFileName(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::getLogFilesFilter(void)
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::getLogPath(void)
        public: static bool sphSystem::logger::LoggerBase::getLoggable(void)
        public: static bool sphSystem::logger::LoggerBase::getSafeLogger(void)
        public: static bool sphSystem::logger::LoggerBase::getThreadIdHexadecimal(void)
        public: static void sphSystem::logger::LoggerBase::init(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>)
        public: static void sphSystem::logger::LoggerBase::logFileNameWithDate(bool)
        public: static bool sphSystem::logger::LoggerBase::logFileNameWithDate(void)
        public: static void sphSystem::logger::LoggerBase::logFileNameWithPID(bool)
        public: static bool sphSystem::logger::LoggerBase::logFileNameWithPID(void)
        public: static void sphSystem::logger::LoggerBase::logLoadedLibraries(enum Log::Severity)
        public: static void sphSystem::logger::LoggerBase::preinit(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::logger::LoggerBase::setClearFileBefore(bool)
        public: static void sphSystem::logger::LoggerBase::setLogFileName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::logger::LoggerBase::setLogPath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: static void sphSystem::logger::LoggerBase::setLogPrivateBytes(bool)
        public: static void sphSystem::logger::LoggerBase::setLoggable(bool)
        public: static void sphSystem::logger::LoggerBase::severity(enum Log::Severity)
        public: static int sphSystem::logger::LoggerBase::shiftSize(void)
        public: static void sphSystem::logger::LoggerBase::shiftSize(int)
        public: static void sphSystem::logger::LoggerBase::shiftTime(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        public: static void sphSystem::logger::LoggerBase::threadIdHexadecimal(bool)
        public: static void sphSystem::logger::LoggerBase::threadName(bool)
        public: static bool sphSystem::logger::LoggerBase::threadName(void)
        public: static void sphSystem::logger::LoggerBase::tryRemote(bool)
        public: static bool sphSystem::logger::LoggerBase::tryRemote(void)
        // Variables:
        protected: static char const **sphSystem::logger::LoggerBase::__ALLOWED_OPTIONS__
        protected: static char const *sphSystem::logger::LoggerBase::__CLASS__
        protected: static char const *sphSystem::logger::LoggerBase::__PREFIX__
        protected: static bool sphSystem::logger::LoggerBase::fAutoShift
        protected: static bool sphSystem::logger::LoggerBase::fBuffered
        protected: static bool sphSystem::logger::LoggerBase::fClearFileBefore
        protected: static enum Log::Severity sphSystem::logger::LoggerBase::fConsoleSeverity
        protected: static bool sphSystem::logger::LoggerBase::fInit
        protected: static class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger> sphSystem::logger::LoggerBase::fLocalLogger
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::fLogFileName
        protected: static bool sphSystem::logger::LoggerBase::fLogFileNameWithDate
        protected: static bool sphSystem::logger::LoggerBase::fLogFileNameWithPID
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::fLogFilesFilter
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::fLogPath
        protected: static bool sphSystem::logger::LoggerBase::fLogPrivateBytes
        protected: static bool sphSystem::logger::LoggerBase::fLoggable
        protected: static bool sphSystem::logger::LoggerBase::fPreInit
        protected: static bool sphSystem::logger::LoggerBase::fSafeLogger
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::fServerName
        protected: static enum Log::Severity sphSystem::logger::LoggerBase::fSeverity
        protected: static unsigned __int64 sphSystem::logger::LoggerBase::fShiftSize
        protected: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::logger::LoggerBase::fShiftTimeStr
        protected: static bool sphSystem::logger::LoggerBase::fThreadIdHexadecimal
        protected: static bool sphSystem::logger::LoggerBase::fThreadName
        protected: static bool sphSystem::logger::LoggerBase::fTryRemote
      public:
      };

      class SafeLogger
      {
        // Functions:
        protected: sphSystem::logger::SafeLogger::SafeLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>, bool, bool)
        public: void sphSystem::logger::SafeLogger::`vbase dtor'(void)
        protected: void sphSystem::logger::SafeLogger::doMessage(unsigned __int64, char const *, char const *, enum Log::Severity, char const *, char const *)
        public: class boost::recursive_mutex & sphSystem::logger::SafeLogger::getMutex(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger> sphSystem::logger::SafeLogger::create(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>, bool, bool)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::logger::SafeLogger::~SafeLogger(void)
        public: virtual void sphSystem::logger::SafeLogger::_add_ref(void)
        public: virtual void sphSystem::logger::SafeLogger::_remove_ref(void)
        public: virtual void sphSystem::logger::SafeLogger::getLogFilePath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const
        public: virtual long sphSystem::logger::SafeLogger::getRef(void) const
        public: virtual void sphSystem::logger::SafeLogger::message(unsigned __int64, char const *, char const *, enum Log::Severity, char const *, char const *)
#endif

        // VFTable. Offset=0, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::logger::SafeLogger::message(unsigned __int64, char const *, char const *, enum Log::Severity, char const *, char const *); // 0
        public: virtual void sphSystem::logger::SafeLogger::getLogFilePath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const; // 1
        // VFTable with 0 offset end

        // VFTable. Offset=80, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::SafeLogger::~SafeLogger(void); // 0
        public: virtual void unknown_vf_80_1(void); // 1
        public: virtual void unknown_vf_80_2(void); // 2
        public: virtual void unknown_vf_80_3(void); // 3
#endif
        // VFTable with 80 offset end

      public:
      };

      class/*or struct*/ SafeShiftableLogger
      {
        // Functions:
        protected: sphSystem::logger::SafeShiftableLogger::SafeShiftableLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger>, class sophisTools::base::RefCountHandle<class sphSystem::logger::SafeLogger>)
        public: void sphSystem::logger::SafeShiftableLogger::`vbase dtor'(void)
        public: class boost::recursive_mutex & sphSystem::logger::SafeShiftableLogger::getMutex(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger> sphSystem::logger::SafeShiftableLogger::create(class sophisTools::base::RefCountHandle<class sophisTools::logger::ShiftableLogger>, bool, bool)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::logger::SafeShiftableLogger::~SafeShiftableLogger(void)
        public: virtual void sphSystem::logger::SafeShiftableLogger::_add_ref(void)
        public: virtual void sphSystem::logger::SafeShiftableLogger::_remove_ref(void)
        public: virtual void sphSystem::logger::SafeShiftableLogger::getLogFilePath(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const
        public: virtual long sphSystem::logger::SafeShiftableLogger::getRef(void) const
        public: virtual void sphSystem::logger::SafeShiftableLogger::message(unsigned __int64, char const *, char const *, enum Log::Severity, char const *, char const *)
        public: virtual void sphSystem::logger::SafeShiftableLogger::shift(void)
#endif

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::SafeShiftableLogger::~SafeShiftableLogger(void); // 0
        public: virtual void unknown_vf_32_1(void); // 1
        public: virtual void unknown_vf_32_2(void); // 2
        public: virtual void unknown_vf_32_3(void); // 3
#endif
        // VFTable with 32 offset end

        // VFTable. Offset=48, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::SafeShiftableLogger::~SafeShiftableLogger(void); // 0
        public: virtual void unknown_vf_48_1(void); // 1
#endif
        // VFTable with 48 offset end

        // VFTable. Offset=72, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::logger::SafeShiftableLogger::~SafeShiftableLogger(void); // 0
#endif
        // VFTable with 72 offset end

      public:
      };


    };

    class/*or struct*/ mutex
    {
    public:
      // Nested containers:
      class MutexDecorator
      {
        // Functions:
        public: sphSystem::mutex::MutexDecorator::MutexDecorator(void)
        public: sphSystem::mutex::MutexDecorator::~MutexDecorator(void)
        public: class sphSystem::mutex::MutexDecorator & sphSystem::mutex::MutexDecorator::operator=(class sphSystem::mutex::MutexDecorator const &)
        public: void sphSystem::mutex::MutexDecorator::Lock(void)
        public: void sphSystem::mutex::MutexDecorator::Unlock(void)
      public:
      };

      struct MutexDecoratorGuard
      {
        // Functions:
        public: sphSystem::mutex::MutexDecoratorGuard::MutexDecoratorGuard(class sphSystem::mutex::MutexDecorator *)
        public: sphSystem::mutex::MutexDecoratorGuard::~MutexDecoratorGuard(void)
        public: struct sphSystem::mutex::MutexDecoratorGuard & sphSystem::mutex::MutexDecoratorGuard::operator=(struct sphSystem::mutex::MutexDecoratorGuard const &)
      public:
      };


      // Functions:
      class MutexDecorator * CreateNewMutexDecorator(void)
      void RemoveMutexDecorator(class MutexDecorator *)
    public:
    };

    namespace/*or class/struct?*/ net
    {
      // Nested containers:
      class/*or struct*/ SafeSelectReactor
      {
        // Functions:
        protected: sphSystem::net::SafeSelectReactor::SafeSelectReactor(__int64)
        public: void sphSystem::net::SafeSelectReactor::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::net::Reactor> sphSystem::net::SafeSelectReactor::create(__int64)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::net::SafeSelectReactor::~SafeSelectReactor(void)
        protected: virtual void sphSystem::net::SafeSelectReactor::evalFdSets(struct fd_set &, struct fd_set &)
        public: virtual void sphSystem::net::SafeSelectReactor::registerHandler(class sophisTools::base::RefCountHandle<class sophisTools::net::Reactor::EventHandler>, long, long)
        protected: virtual void sphSystem::net::SafeSelectReactor::setFdSets(struct fd_set &, struct fd_set &, int &)
        public: virtual void sphSystem::net::SafeSelectReactor::unregisterHandler(class sophisTools::base::RefCountHandle<class sophisTools::net::Reactor::EventHandler>)
#endif

        // VFTable. Offset=0, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        protected: virtual void sphSystem::net::SafeSelectReactor::setFdSets(struct fd_set &, struct fd_set &, int &); // 0
        protected: virtual void sphSystem::net::SafeSelectReactor::evalFdSets(struct fd_set &, struct fd_set &); // 1
        // VFTable with 0 offset end

        // VFTable. Offset=88, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::net::SafeSelectReactor::~SafeSelectReactor(void); // 0
        public: virtual void unknown_vf_88_1(void); // 1
        public: virtual void unknown_vf_88_2(void); // 2
        public: virtual void unknown_vf_88_3(void); // 3
#endif
        // VFTable with 88 offset end

        // VFTable. Offset=104, Size=6, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::net::SafeSelectReactor::~SafeSelectReactor(void); // 0
        public: virtual void unknown_vf_104_1(void); // 1
        public: virtual void unknown_vf_104_2(void); // 2
        public: virtual void unknown_vf_104_3(void); // 3
        public: virtual void unknown_vf_104_4(void); // 4
        public: virtual void unknown_vf_104_5(void); // 5
#endif
        // VFTable with 104 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ plugin
    {
      // Nested containers:
      class DuplicatePlugin : public ExceptionBase
      {
        // Functions:
        public: sphSystem::plugin::DuplicatePlugin::DuplicatePlugin(class sphSystem::plugin::DuplicatePlugin &&)
        public: sphSystem::plugin::DuplicatePlugin::DuplicatePlugin(class sphSystem::plugin::DuplicatePlugin const &)
        public: sphSystem::plugin::DuplicatePlugin::DuplicatePlugin(char const *)
        public: class sphSystem::plugin::DuplicatePlugin & sphSystem::plugin::DuplicatePlugin::operator=(class sphSystem::plugin::DuplicatePlugin &&)
        public: class sphSystem::plugin::DuplicatePlugin & sphSystem::plugin::DuplicatePlugin::operator=(class sphSystem::plugin::DuplicatePlugin const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::plugin::DuplicatePlugin::~DuplicatePlugin(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::plugin::DuplicatePlugin::~DuplicatePlugin(void); // 0
        // VFTable with 0 offset end

      public:
      };

      struct ListElement
      {
      public:
      };

      class NoSuchPlugin : public ExceptionBase
      {
        // Functions:
        public: sphSystem::plugin::NoSuchPlugin::NoSuchPlugin(class sphSystem::plugin::NoSuchPlugin &&)
        public: sphSystem::plugin::NoSuchPlugin::NoSuchPlugin(class sphSystem::plugin::NoSuchPlugin const &)
        public: sphSystem::plugin::NoSuchPlugin::NoSuchPlugin(char const *)
        public: class sphSystem::plugin::NoSuchPlugin & sphSystem::plugin::NoSuchPlugin::operator=(class sphSystem::plugin::NoSuchPlugin &&)
        public: class sphSystem::plugin::NoSuchPlugin & sphSystem::plugin::NoSuchPlugin::operator=(class sphSystem::plugin::NoSuchPlugin const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::plugin::NoSuchPlugin::~NoSuchPlugin(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::plugin::NoSuchPlugin::~NoSuchPlugin(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class Plugin
      {
        // Functions:
        public: sphSystem::plugin::Plugin::Plugin(class sphSystem::plugin::Plugin &&)
        public: sphSystem::plugin::Plugin::Plugin(class sphSystem::plugin::Plugin const &)
        public: sphSystem::plugin::Plugin::Plugin(void)
        public: class sphSystem::plugin::Plugin & sphSystem::plugin::Plugin::operator=(class sphSystem::plugin::Plugin &&)
        public: class sphSystem::plugin::Plugin & sphSystem::plugin::Plugin::operator=(class sphSystem::plugin::Plugin const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::plugin::Plugin::~Plugin(void)
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::plugin::Plugin::~Plugin(void) = 0; // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        public: virtual void unknown_vf_0_2(void) = 0; // 2
        // VFTable with 0 offset end

        // VFTable. Offset=16, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::plugin::Plugin::~Plugin(void) = 0; // 0
        public: virtual void unknown_vf_16_1(void) = 0; // 1
        public: virtual void unknown_vf_16_2(void) = 0; // 2
        public: virtual void unknown_vf_16_3(void); // 3
#endif
        // VFTable with 16 offset end

      public:
      };

      class PluginManager
      {
      public:
        // Nested containers:
        class/*or struct*/ PluginList : public list<struct sphSystem::plugin::ListElement, class std::allocator<struct sphSystem::plugin::ListElement>>
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Owner: SophisSystem.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };


        // Functions:
        protected: sphSystem::plugin::PluginManager::PluginManager(void)
        public: void sphSystem::plugin::PluginManager::`vbase dtor'(void)
        public: void sphSystem::plugin::PluginManager::configurePluginNames(class std::set<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const &)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::plugin::PluginManager> sphSystem::plugin::PluginManager::create(void)
        // Variables:
        private: static char const *sphSystem::plugin::PluginManager::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::plugin::PluginManager::~PluginManager(void)
        public: virtual void sphSystem::plugin::PluginManager::disposePlugins(void)
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::plugin::Plugin> sphSystem::plugin::PluginManager::getPlugin(char const *)
        public: virtual void sphSystem::plugin::PluginManager::initPlugins(void)
        public: virtual void sphSystem::plugin::PluginManager::loadConfigurationPlugins(void)
        public: virtual void sphSystem::plugin::PluginManager::loadPlugin(char const *)
        public: virtual void sphSystem::plugin::PluginManager::loadPlugin(class sophisTools::base::RefCountHandle<class sophisTools::io::Library>)
        public: virtual void sphSystem::plugin::PluginManager::registerPlugin(class sophisTools::base::RefCountHandle<class sphSystem::plugin::Plugin>)
#endif

        // VFTable. Offset=0, Size=7, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::plugin::PluginManager::loadPlugin(class sophisTools::base::RefCountHandle<class sophisTools::io::Library>); // 0
        public: virtual void sphSystem::plugin::PluginManager::loadPlugin(char const *); // 1
        public: virtual void sphSystem::plugin::PluginManager::loadConfigurationPlugins(void); // 2
        public: virtual class sophisTools::base::RefCountHandle<class sphSystem::plugin::Plugin> sphSystem::plugin::PluginManager::getPlugin(char const *); // 3
        public: virtual void sphSystem::plugin::PluginManager::registerPlugin(class sophisTools::base::RefCountHandle<class sphSystem::plugin::Plugin>); // 4
        public: virtual void sphSystem::plugin::PluginManager::initPlugins(void); // 5
        public: virtual void sphSystem::plugin::PluginManager::disposePlugins(void); // 6
        // VFTable with 0 offset end

        // VFTable. Offset=56, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::plugin::PluginManager::~PluginManager(void); // 0
        public: virtual void unknown_vf_56_1(void); // 1
        public: virtual void unknown_vf_56_2(void); // 2
        public: virtual void unknown_vf_56_3(void); // 3
#endif
        // VFTable with 56 offset end

      public:
      };

      class PluginManagerSingleton
      {
        // Functions:
        public: class sphSystem::plugin::PluginManagerSingleton & sphSystem::plugin::PluginManagerSingleton::operator=(class sphSystem::plugin::PluginManagerSingleton &&)
        public: class sphSystem::plugin::PluginManagerSingleton & sphSystem::plugin::PluginManagerSingleton::operator=(class sphSystem::plugin::PluginManagerSingleton const &)
        // Static functions:
        public: static void sphSystem::plugin::PluginManagerSingleton::dispose(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::plugin::PluginManager> sphSystem::plugin::PluginManagerSingleton::getInstance(void)
        public: static void sphSystem::plugin::PluginManagerSingleton::init(void)
        // Variables:
        private: static class sophisTools::base::RefCountHandle<class sphSystem::plugin::PluginManager> sphSystem::plugin::PluginManagerSingleton::fInstance
      public:
      };


    };

    namespace/*or class/struct?*/ server
    {
      // Nested containers:
      class/*or struct*/ AlreadyAttached : public GeneralException
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::GeneralException
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class ApplicationTool
      {
        // Functions:
        protected: sphSystem::server::ApplicationTool::ApplicationTool(void)
        public: void sphSystem::server::ApplicationTool::`vbase dtor'(void)
        private: void sphSystem::server::ApplicationTool::disposeFrameWorkComponents(void)
        public: bool sphSystem::server::ApplicationTool::hasWorkToDo(void)
        private: void sphSystem::server::ApplicationTool::initFrameWorkComponents(void)
        private: void sphSystem::server::ApplicationTool::timeToWork(void)
        private: void sphSystem::server::ApplicationTool::waitForWork(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::server::ApplicationTool> sphSystem::server::ApplicationTool::create(void)
        // Variables:
        private: static char const *sphSystem::server::ApplicationTool::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::server::ApplicationTool::~ApplicationTool(void)
        public: virtual void sphSystem::server::ApplicationTool::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *)
        public: virtual void sphSystem::server::ApplicationTool::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *, long &)
        public: virtual void sphSystem::server::ApplicationTool::detach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: virtual void sphSystem::server::ApplicationTool::dispose(void)
        protected: virtual void sphSystem::server::ApplicationTool::disposeDone(void)
        public: virtual void sphSystem::server::ApplicationTool::exitRequestCanceled(void)
        public: virtual void sphSystem::server::ApplicationTool::init(int, char **)
        protected: virtual void sphSystem::server::ApplicationTool::initializationDone(void)
        protected: virtual bool sphSystem::server::ApplicationTool::isDisposed(void)
        public: virtual bool sphSystem::server::ApplicationTool::isExitRequested(void)
        protected: virtual bool sphSystem::server::ApplicationTool::isInitialized(void)
        public: virtual void sphSystem::server::ApplicationTool::performWork(void)
        public: virtual void sphSystem::server::ApplicationTool::registerInitParameters(class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>, class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>)
        public: virtual void sphSystem::server::ApplicationTool::registerLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>)
        public: virtual void sphSystem::server::ApplicationTool::registrationCompleted(void)
        public: virtual void sphSystem::server::ApplicationTool::start(bool)
        public: virtual void sphSystem::server::ApplicationTool::stop(bool)
#endif

        // VFTable. Offset=0, Size=17, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::server::ApplicationTool::init(int, char **); // 0
        public: virtual void sphSystem::server::ApplicationTool::registerInitParameters(class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>, class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>); // 1
        public: virtual void sphSystem::server::ApplicationTool::registerLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>); // 2
        public: virtual void sphSystem::server::ApplicationTool::registrationCompleted(void); // 3
        public: virtual void sphSystem::server::ApplicationTool::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *, long &); // 4
        public: virtual void sphSystem::server::ApplicationTool::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *); // 5
        public: virtual void sphSystem::server::ApplicationTool::detach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 6
        public: virtual void sphSystem::server::ApplicationTool::start(bool); // 7
        public: virtual void sphSystem::server::ApplicationTool::performWork(void); // 8
        public: virtual void sphSystem::server::ApplicationTool::stop(bool); // 9
        public: virtual void sphSystem::server::ApplicationTool::dispose(void); // 10
        public: virtual bool sphSystem::server::ApplicationTool::isExitRequested(void); // 11
        public: virtual void sphSystem::server::ApplicationTool::exitRequestCanceled(void); // 12
        protected: virtual bool sphSystem::server::ApplicationTool::isDisposed(void); // 13
        protected: virtual void sphSystem::server::ApplicationTool::disposeDone(void); // 14
        protected: virtual bool sphSystem::server::ApplicationTool::isInitialized(void); // 15
        protected: virtual void sphSystem::server::ApplicationTool::initializationDone(void); // 16
        // VFTable with 0 offset end

        // VFTable. Offset=208, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::server::ApplicationTool::~ApplicationTool(void); // 0
        public: virtual void unknown_vf_208_1(void); // 1
        public: virtual void unknown_vf_208_2(void); // 2
        public: virtual void unknown_vf_208_3(void); // 3
#endif
        // VFTable with 208 offset end

      public:
      };

      class AutoShutDownThread : public PollingThread
      {
        // VFTable. Offset=0, Size=12, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_11(void); // 11
        // VFTable with 0 offset end

      public:
      };

      class AutoShutdownUtil
      {
        // Functions:
        public: class sphSystem::server::AutoShutdownUtil & sphSystem::server::AutoShutdownUtil::operator=(class sphSystem::server::AutoShutdownUtil &&)
        public: class sphSystem::server::AutoShutdownUtil & sphSystem::server::AutoShutdownUtil::operator=(class sphSystem::server::AutoShutdownUtil const &)
        // Static functions:
        public: static void sphSystem::server::AutoShutdownUtil::dispose(void)
        public: static void sphSystem::server::AutoShutdownUtil::enable(bool)
        public: static void sphSystem::server::AutoShutdownUtil::init(void)
        public: static void sphSystem::server::AutoShutdownUtil::start(void)
        // Variables:
        private: static char const *sphSystem::server::AutoShutdownUtil::__CLASS__
        private: static class std::shared_ptr<class sphSystem::thread::PollingThread> sphSystem::server::AutoShutdownUtil::fAutoShutdownThread
        private: static bool sphSystem::server::AutoShutdownUtil::fEnabled
      public:
      };

      class FrameWork
      {
        // Functions:
        public: class sphSystem::server::FrameWork & sphSystem::server::FrameWork::operator=(class sphSystem::server::FrameWork &&)
        public: class sphSystem::server::FrameWork & sphSystem::server::FrameWork::operator=(class sphSystem::server::FrameWork const &)
        protected: class sophisTools::base::RefCountHandle<class sphSystem::server::ApplicationTool> sphSystem::server::FrameWork::getApplicationTool(void)
        // Static functions:
        public: static void sphSystem::server::FrameWork::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *)
        public: static void sphSystem::server::FrameWork::attach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, bool, char const *, long &)
        public: static void sphSystem::server::FrameWork::detach(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: static void sphSystem::server::FrameWork::dispose(void)
        public: static void sphSystem::server::FrameWork::exitRequestCanceled(void)
        public: static bool sphSystem::server::FrameWork::hasWorkToDo(void)
        private: static void sphSystem::server::FrameWork::init(int, char **, class sophisTools::base::RefCountHandle<class sphSystem::server::ApplicationTool>)
        public: static void sphSystem::server::FrameWork::init(int, char **)
        public: static bool sphSystem::server::FrameWork::isExitRequested(void)
        public: static void sphSystem::server::FrameWork::performWork(void)
        public: static void sphSystem::server::FrameWork::registerInitParameters(class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>, class sophisTools::base::RefCountHandle<class sphSystem::config::InitParameters>)
        public: static void sphSystem::server::FrameWork::registerLogger(class sophisTools::base::RefCountHandle<class sophisTools::logger::Logger>)
        public: static void sphSystem::server::FrameWork::registrationCompleted(void)
        public: static void sphSystem::server::FrameWork::start(bool)
        public: static void sphSystem::server::FrameWork::stop(bool)
        // Variables:
        private: static char const *sphSystem::server::FrameWork::__CLASS__
        private: static class sophisTools::base::RefCountHandle<class sphSystem::server::ApplicationTool> sphSystem::server::FrameWork::fApplicationTool
      public:
      };

      class ProgramExitWatcherThread : public PollingThread
      {
        // Functions:
        public: sphSystem::server::ProgramExitWatcherThread::ProgramExitWatcherThread(class sophisTools::base::RefCountHandle<class sphSystem::server::ApplicationTool>)
        // Variables:
        private: static char const *sphSystem::server::ProgramExitWatcherThread::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::server::ProgramExitWatcherThread::~ProgramExitWatcherThread(void)
        public: virtual void sphSystem::server::ProgramExitWatcherThread::clean(void)
        public: virtual void sphSystem::server::ProgramExitWatcherThread::performJob(void)
#endif

        // VFTable. Offset=0, Size=11, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::server::ProgramExitWatcherThread::~ProgramExitWatcherThread(void); // 0
        // Overrides:
        public: virtual void sphSystem::server::ProgramExitWatcherThread::clean(void) override; // 7
        public: virtual void sphSystem::server::ProgramExitWatcherThread::performJob(void) override; // 10
        // VFTable with 0 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ statistics
    {
      // Nested containers:
      class AbstractCounter
      {
        // Functions:
        protected: sphSystem::statistics::AbstractCounter::AbstractCounter(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & sphSystem::statistics::AbstractCounter::getName(void) const
#if 0 // All found virtual functions names:
        public: virtual sphSystem::statistics::AbstractCounter::~AbstractCounter(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::statistics::AbstractCounter::~AbstractCounter(void) = 0; // 0
        // VFTable with 0 offset end

        // VFTable. Offset=64, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::statistics::AbstractCounter::~AbstractCounter(void); // 0
        public: virtual void unknown_vf_64_1(void); // 1
        public: virtual void unknown_vf_64_2(void); // 2
        public: virtual void unknown_vf_64_3(void); // 3
#endif
        // VFTable with 64 offset end

      public:
      };

      class EventCounter
      {
        // Functions:
        protected: sphSystem::statistics::EventCounter::EventCounter(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        public: void sphSystem::statistics::EventCounter::`vbase dtor'(void)
        public: void sphSystem::statistics::EventCounter::increment(long)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::statistics::EventCounter> sphSystem::statistics::EventCounter::Create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::statistics::EventCounter::~EventCounter(void)
        public: virtual void sphSystem::statistics::EventCounter::getStatistics(__int64, bool, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::statistics::EventCounter::getStatistics(__int64, bool, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &); // 0
        // VFTable with 0 offset end

        // VFTable. Offset=128, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::statistics::EventCounter::~EventCounter(void); // 0
        public: virtual void unknown_vf_128_1(void); // 1
        public: virtual void unknown_vf_128_2(void); // 2
        public: virtual void unknown_vf_128_3(void); // 3
#endif
        // VFTable with 128 offset end

      public:
      };

      class LateQuotationCounter
      {
        // Functions:
        protected: sphSystem::statistics::LateQuotationCounter::LateQuotationCounter(void)
        public: void sphSystem::statistics::LateQuotationCounter::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::statistics::LateQuotationCounter> sphSystem::statistics::LateQuotationCounter::Create(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, bool)
        // Variables:
        private: static char const *const sphSystem::statistics::LateQuotationCounter::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::statistics::LateQuotationCounter::~LateQuotationCounter(void)
        public: virtual void sphSystem::statistics::LateQuotationCounter::AddInfo(class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>)
        public: virtual void sphSystem::statistics::LateQuotationCounter::Dispose(void)
        protected: virtual void sphSystem::statistics::LateQuotationCounter::Init(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
        protected: virtual void sphSystem::statistics::LateQuotationCounter::Report(class std::list<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>> &)
        public: virtual void sphSystem::statistics::LateQuotationCounter::_add_ref(void)
        public: virtual void sphSystem::statistics::LateQuotationCounter::_remove_ref(void)
        public: virtual long sphSystem::statistics::LateQuotationCounter::getRef(void) const
        public: virtual void sphSystem::statistics::LateQuotationCounter::getStatistics(__int64, bool, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::statistics::LateQuotationCounter::Dispose(void); // 0
        protected: virtual void sphSystem::statistics::LateQuotationCounter::Init(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &); // 1
        protected: virtual void sphSystem::statistics::LateQuotationCounter::Report(class std::list<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>> &); // 2
        // VFTable with 0 offset end

        // VFTable. Offset=80, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::statistics::LateQuotationCounter::~LateQuotationCounter(void); // 0
        public: virtual void unknown_vf_80_1(void); // 1
        public: virtual void unknown_vf_80_2(void); // 2
        public: virtual void unknown_vf_80_3(void); // 3
#endif
        // VFTable with 80 offset end

        // VFTable. Offset=96, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::statistics::LateQuotationCounter::~LateQuotationCounter(void); // 0
#endif
        // VFTable with 96 offset end

        // VFTable. Offset=160, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::statistics::LateQuotationCounter::~LateQuotationCounter(void); // 0
        public: virtual void unknown_vf_160_1(void); // 1
        public: virtual void unknown_vf_160_2(void); // 2
        public: virtual void unknown_vf_160_3(void); // 3
        public: virtual void unknown_vf_160_4(void); // 4
#endif
        // VFTable with 160 offset end

      public:
      };

      class StatisticsHelper
      {
        // Functions:
        public: class sphSystem::statistics::StatisticsHelper & sphSystem::statistics::StatisticsHelper::operator=(class sphSystem::statistics::StatisticsHelper &&)
        public: class sphSystem::statistics::StatisticsHelper & sphSystem::statistics::StatisticsHelper::operator=(class sphSystem::statistics::StatisticsHelper const &)
        // Static functions:
        public: static void sphSystem::statistics::StatisticsHelper::AddCounter(class sophisTools::base::RefCountHandle<class sphSystem::statistics::AbstractCounter>)
        public: static void sphSystem::statistics::StatisticsHelper::Configure(bool, long)
        public: static void sphSystem::statistics::StatisticsHelper::Dispose(void)
        public: static void sphSystem::statistics::StatisticsHelper::RemoveCounter(class sophisTools::base::RefCountHandle<class sphSystem::statistics::AbstractCounter>)
        // Variables:
        private: static char const *const sphSystem::statistics::StatisticsHelper::__CLASS__
      public:
      };


    };

    namespace/*or class/struct?*/ thread
    {
      // Nested containers:
      class/*or struct*/ ActionAlreadyExists : public ExceptionBase
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ ActionInProgress : public ExceptionBase
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ BasicPoolAllocator
      {
        // Functions:
        protected: sphSystem::thread::BasicPoolAllocator::BasicPoolAllocator(unsigned __int64, class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: void sphSystem::thread::BasicPoolAllocator::`vbase dtor'(void)
        protected: class boost::recursive_mutex & sphSystem::thread::BasicPoolAllocator::getMutex(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerAllocator> sphSystem::thread::BasicPoolAllocator::create(unsigned __int64, class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        // Variables:
        private: static char const *sphSystem::thread::BasicPoolAllocator::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::BasicPoolAllocator::~BasicPoolAllocator(void)
        public: virtual void sphSystem::thread::BasicPoolAllocator::_add_ref(void)
        public: virtual void sphSystem::thread::BasicPoolAllocator::_remove_ref(void)
        public: virtual class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::BasicPoolAllocator::allocate(void)
        protected: virtual void sphSystem::thread::BasicPoolAllocator::createWorkForce(void)
        public: virtual void sphSystem::thread::BasicPoolAllocator::dispose(void)
        public: virtual long sphSystem::thread::BasicPoolAllocator::getRef(void) const
        protected: virtual class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerList> sphSystem::thread::BasicPoolAllocator::getWorkForce(void)
        public: virtual bool sphSystem::thread::BasicPoolAllocator::notify(struct sophis::tools::util::Worker::JobTerminatedEvent &)
        public: virtual void sphSystem::thread::BasicPoolAllocator::release(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>)
        public: virtual bool sphSystem::thread::BasicPoolAllocator::visitActiveWorkers(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>)
#endif

        // VFTable. Offset=0, Size=10, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::BasicPoolAllocator::_add_ref(void); // 0
        public: virtual void sphSystem::thread::BasicPoolAllocator::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::BasicPoolAllocator::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::BasicPoolAllocator::allocate(void); // 4
        public: virtual bool sphSystem::thread::BasicPoolAllocator::visitActiveWorkers(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>); // 5
        public: virtual void sphSystem::thread::BasicPoolAllocator::release(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>); // 6
        public: virtual void sphSystem::thread::BasicPoolAllocator::dispose(void); // 7
        protected: virtual void sphSystem::thread::BasicPoolAllocator::createWorkForce(void); // 8
        protected: virtual class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerList> sphSystem::thread::BasicPoolAllocator::getWorkForce(void); // 9
        // VFTable with 0 offset end

        // VFTable. Offset=8, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual bool sphSystem::thread::BasicPoolAllocator::notify(struct sophis::tools::util::Worker::JobTerminatedEvent &); // 0
#endif
        // VFTable with 8 offset end

        // VFTable. Offset=88, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::BasicPoolAllocator::~BasicPoolAllocator(void); // 0
        public: virtual void unknown_vf_88_1(void); // 1
        public: virtual void unknown_vf_88_2(void); // 2
        public: virtual void unknown_vf_88_3(void); // 3
#endif
        // VFTable with 88 offset end

      public:
      };

      class/*or struct*/ BasicWorker
      {
        // Functions:
        public: sphSystem::thread::BasicWorker::BasicWorker(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: sphSystem::thread::BasicWorker::BasicWorker(void)
        public: void sphSystem::thread::BasicWorker::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::BasicWorker::create(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::BasicWorker::create(void)
        // Variables:
        private: static char const *sphSystem::thread::BasicWorker::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::BasicWorker::~BasicWorker(void)
        public: virtual void sphSystem::thread::BasicWorker::_add_ref(void)
        public: virtual void sphSystem::thread::BasicWorker::_remove_ref(void)
        public: virtual void sphSystem::thread::BasicWorker::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: virtual void sphSystem::thread::BasicWorker::clean(void)
        public: virtual void sphSystem::thread::BasicWorker::doRun(void)
        public: virtual unsigned __int64 sphSystem::thread::BasicWorker::getLoad(void)
        public: virtual long sphSystem::thread::BasicWorker::getRef(void) const
        public: virtual bool sphSystem::thread::BasicWorker::isRunning(void)
        protected: virtual void sphSystem::thread::BasicWorker::jobProcessed(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        protected: virtual void sphSystem::thread::BasicWorker::process(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long)
        public: virtual bool sphSystem::thread::BasicWorker::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: virtual void sphSystem::thread::BasicWorker::requestExit(void)
        public: virtual void sphSystem::thread::BasicWorker::run(void)
        public: virtual void sphSystem::thread::BasicWorker::stop(bool)
        public: virtual void sphSystem::thread::BasicWorker::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long)
        public: virtual bool sphSystem::thread::BasicWorker::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>)
#endif

        // VFTable. Offset=0, Size=14, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::BasicWorker::_add_ref(void); // 0
        public: virtual void sphSystem::thread::BasicWorker::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::BasicWorker::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::thread::BasicWorker::run(void); // 4
        public: virtual void sphSystem::thread::BasicWorker::stop(bool); // 5
        public: virtual bool sphSystem::thread::BasicWorker::isRunning(void); // 6
        public: virtual bool sphSystem::thread::BasicWorker::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>); // 7
        public: virtual void sphSystem::thread::BasicWorker::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long); // 8
        public: virtual bool sphSystem::thread::BasicWorker::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 9
        public: virtual unsigned __int64 sphSystem::thread::BasicWorker::getLoad(void); // 10
        public: virtual void sphSystem::thread::BasicWorker::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>); // 11
        protected: virtual void sphSystem::thread::BasicWorker::process(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long); // 12
        protected: virtual void sphSystem::thread::BasicWorker::jobProcessed(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 13
        // VFTable with 0 offset end

        // VFTable. Offset=8, Size=10, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::BasicWorker::~BasicWorker(void); // 0
        public: virtual void unknown_vf_8_1(void); // 1
        public: virtual void unknown_vf_8_2(void); // 2
        public: virtual void unknown_vf_8_3(void); // 3
        public: virtual void unknown_vf_8_4(void); // 4
        public: virtual void unknown_vf_8_5(void); // 5
        public: virtual void unknown_vf_8_6(void); // 6
        public: virtual void sphSystem::thread::BasicWorker::doRun(void); // 7
        public: virtual void sphSystem::thread::BasicWorker::clean(void); // 8
        public: virtual void sphSystem::thread::BasicWorker::requestExit(void); // 9
#endif
        // VFTable with 8 offset end

        // VFTable. Offset=168, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::BasicWorker::~BasicWorker(void); // 0
        public: virtual void unknown_vf_168_1(void); // 1
        public: virtual void unknown_vf_168_2(void); // 2
        public: virtual void unknown_vf_168_3(void); // 3
#endif
        // VFTable with 168 offset end

      public:
      };

      class/*or struct*/ CapturedException
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

        // VFTable. Offset=112, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_112_0(void); // 0
        public: virtual void unknown_vf_112_1(void); // 1
        public: virtual void unknown_vf_112_2(void); // 2
        public: virtual void unknown_vf_112_3(void); // 3
#endif
        // VFTable with 112 offset end

      public:
      };

      class/*or struct*/ DailyActionThread : public PollingThread
      {
        // Functions:
        public: sphSystem::thread::DailyActionThread::DailyActionThread(class sophisTools::time::Time24 const &, char const *)
        // Variables:
        private: static char const *sphSystem::thread::DailyActionThread::__CLASSNAME__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::DailyActionThread::~DailyActionThread(void)
        protected: virtual void sphSystem::thread::DailyActionThread::performJob(void)
#endif

        // VFTable. Offset=0, Size=12, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::thread::DailyActionThread::~DailyActionThread(void); // 0
        // Overrides:
        protected: virtual void sphSystem::thread::DailyActionThread::performJob(void) override; // 10
        // Added virtual functions:
        public: virtual void unknown_vf_0_11(void) = 0; // 11
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ DataModelCapturedException
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

        // VFTable. Offset=112, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual void unknown_vf_112_0(void); // 0
        public: virtual void unknown_vf_112_1(void); // 1
        public: virtual void unknown_vf_112_2(void); // 2
        public: virtual void unknown_vf_112_3(void); // 3
#endif
        // VFTable with 112 offset end

      public:
      };

      class/*or struct*/ DataModelExceptionWrapper : public DataModelException
      {
        // VFTable. Offset=0, Size=2, Start=0
        // Corresponding base: dataModel::dataModel::dataModel::DataModelException
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ ExceptionBaseWrapper : public ExceptionBase
      {
        // VFTable. Offset=0, Size=2, Start=0
        // Corresponding base: base::base::ExceptionBase
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ LoopThread : public PollingThread
      {
      public:
        // Enumerations:
        enum State : int {
        };

        // Functions:
        public: sphSystem::thread::LoopThread::LoopThread(class std::shared_ptr<class sphSystem::thread::RunnableBase>)
        public: sphSystem::thread::LoopThread::LoopThread(class std::shared_ptr<class sphSystem::thread::RunnableBase>, char const *)
        public: sphSystem::thread::LoopThread::LoopThread(class std::shared_ptr<class sphSystem::thread::RunnableBase>, char const *, long)
        // Variables:
        private: static char const *sphSystem::thread::LoopThread::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::LoopThread::~LoopThread(void)
        public: virtual enum sphSystem::thread::LoopThread::State sphSystem::thread::LoopThread::getState(void) const
        public: virtual void sphSystem::thread::LoopThread::performJob(void)
        public: virtual void sphSystem::thread::LoopThread::start(void)
        public: virtual void sphSystem::thread::LoopThread::start(bool)
        public: virtual void sphSystem::thread::LoopThread::stop(void)
        public: virtual void sphSystem::thread::LoopThread::stop(bool)
#endif

        // VFTable. Offset=0, Size=16, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::thread::LoopThread::~LoopThread(void); // 0
        // Overrides:
        public: virtual void sphSystem::thread::LoopThread::performJob(void) override; // 10
        // Added virtual functions:
        public: virtual void sphSystem::thread::LoopThread::start(bool); // 11
        public: virtual void sphSystem::thread::LoopThread::start(void); // 12
        public: virtual void sphSystem::thread::LoopThread::stop(bool); // 13
        public: virtual void sphSystem::thread::LoopThread::stop(void); // 14
        public: virtual enum sphSystem::thread::LoopThread::State sphSystem::thread::LoopThread::getState(void) const; // 15
        // VFTable with 0 offset end

      public:
      };

      class MultiActionThread : public PollingThread
      {
        // Functions:
        protected: sphSystem::thread::MultiActionThread::MultiActionThread(class std::map<class sophisTools::time::Time24, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, struct sphSystem::thread::less_Time24, class std::allocator<struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>>, char const *, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, bool, class sophisTools::time::Time24 const &, __int64, bool)
        protected: bool sphSystem::thread::MultiActionThread::CalculateNextDelay(void)
        public: void sphSystem::thread::MultiActionThread::addAction(class sophisTools::time::Time24 const &, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, bool)
        public: void sphSystem::thread::MultiActionThread::awakeWithAction(class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>)
        protected: void sphSystem::thread::MultiActionThread::doWork(void)
        public: class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction> const sphSystem::thread::MultiActionThread::getAction(class sophisTools::time::Time24 const &)
        public: void sphSystem::thread::MultiActionThread::removeAction(class sophisTools::time::Time24 const &)
        // Static functions:
        public: static class std::shared_ptr<class sphSystem::thread::MultiActionThread> sphSystem::thread::MultiActionThread::create(class std::map<class sophisTools::time::Time24, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, struct sphSystem::thread::less_Time24, class std::allocator<struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>>, char const *, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, bool)
        // Variables:
        private: static char const *sphSystem::thread::MultiActionThread::__CLASSNAME__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::MultiActionThread::~MultiActionThread(void)
        public: virtual void sphSystem::thread::MultiActionThread::awake(void)
        protected: virtual void sphSystem::thread::MultiActionThread::performJob(void)
#endif

        // VFTable. Offset=0, Size=11, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::thread::MultiActionThread::~MultiActionThread(void); // 0
        // Overrides:
        public: virtual void sphSystem::thread::MultiActionThread::awake(void) override; // 2
        protected: virtual void sphSystem::thread::MultiActionThread::performJob(void) override; // 10
        // VFTable with 0 offset end

      public:
      };

      class PollingThread
      {
      public:
        // Nested containers:
        class/*or struct*/ CannotLockCleanMutextException : public exception
        {
          // VFTable. Offset=0, Size=2, Start=2
          // Corresponding base: std::exception
          // Owner: SophisSystem.dll
          // VFTable with 0 offset end

        public:
        };


        // Functions:
        public: sphSystem::thread::PollingThread::PollingThread(char const *, long)
        public: void sphSystem::thread::PollingThread::awake(bool)
        public: class boost::thread::id sphSystem::thread::PollingThread::getId(void) const
        protected: class boost::recursive_mutex & sphSystem::thread::PollingThread::getMutex(void)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::thread::PollingThread::getName(void) const
        public: bool sphSystem::thread::PollingThread::isAlive(void) const
        public: void sphSystem::thread::PollingThread::join(long)
        public: void sphSystem::thread::PollingThread::join(void)
        public: void sphSystem::thread::PollingThread::resume(void)
        public: void sphSystem::thread::PollingThread::setName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        protected: void sphSystem::thread::PollingThread::setSleepDelay(long)
        public: void sphSystem::thread::PollingThread::start(void)
        public: void sphSystem::thread::PollingThread::suspend(void)
        // Static functions:
        private: static void sphSystem::thread::PollingThread::Run(void *)
        public: static void sphSystem::thread::PollingThread::dispose(void)
        public: static void sphSystem::thread::PollingThread::init(int, char **)
        // Variables:
        private: static char const *sphSystem::thread::PollingThread::__CLASSNAME__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::PollingThread::~PollingThread(void)
        public: virtual void sphSystem::thread::PollingThread::awake(void)
        public: virtual void sphSystem::thread::PollingThread::cancel(void)
        public: virtual void sphSystem::thread::PollingThread::changeSleepDelay(long)
        public: virtual void sphSystem::thread::PollingThread::clean(void)
        public: virtual long sphSystem::thread::PollingThread::getSleepDelay(void)
        protected: virtual bool sphSystem::thread::PollingThread::isExitRequested(void) const
        public: virtual bool sphSystem::thread::PollingThread::isReallyDead(void)
        protected: virtual void sphSystem::thread::PollingThread::requestExit(void)
        public: virtual void sphSystem::thread::PollingThread::run(void)
#endif

        // VFTable. Offset=0, Size=11, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::PollingThread::~PollingThread(void); // 0
        public: virtual void sphSystem::thread::PollingThread::cancel(void); // 1
        public: virtual void sphSystem::thread::PollingThread::awake(void); // 2
        public: virtual void sphSystem::thread::PollingThread::run(void); // 3
        public: virtual bool sphSystem::thread::PollingThread::isReallyDead(void); // 4
        public: virtual void sphSystem::thread::PollingThread::changeSleepDelay(long); // 5
        public: virtual long sphSystem::thread::PollingThread::getSleepDelay(void); // 6
        public: virtual void sphSystem::thread::PollingThread::clean(void); // 7
        protected: virtual bool sphSystem::thread::PollingThread::isExitRequested(void) const; // 8
        protected: virtual void sphSystem::thread::PollingThread::requestExit(void); // 9
        public: virtual void sphSystem::server::ProgramExitWatcherThread::performJob(void) = 0; // 10 (server::server::ProgramExitWatcherThread)
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ PrioritizedJobList
      {
        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class/*or struct*/ ProcessingException
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void) = 0; // 0
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class ReadSynchronized
      {
        // Functions:
        public: sphSystem::thread::ReadSynchronized::ReadSynchronized(class sphSystem::thread::ReadWriteMonitor &)
        public: sphSystem::thread::ReadSynchronized::~ReadSynchronized(void)
        public: class sphSystem::thread::ReadSynchronized & sphSystem::thread::ReadSynchronized::operator=(class sphSystem::thread::ReadSynchronized const &)
      public:
      };

      class ReadWriteMonitor
      {
        // Functions:
        public: sphSystem::thread::ReadWriteMonitor::ReadWriteMonitor(class sphSystem::thread::ReadWriteMonitor const &)
        public: sphSystem::thread::ReadWriteMonitor::ReadWriteMonitor(char const *, long)
        public: class sphSystem::thread::ReadWriteMonitor & sphSystem::thread::ReadWriteMonitor::operator=(class sphSystem::thread::ReadWriteMonitor const &)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::ReadWriteMonitor::~ReadWriteMonitor(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::ReadWriteMonitor::~ReadWriteMonitor(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class Runnable
      {
        // Functions:
        public: sphSystem::thread::Runnable::Runnable(void)
        public: class boost::recursive_mutex & sphSystem::thread::Runnable::getMutex(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::Runnable::~Runnable(void)
        public: virtual void sphSystem::thread::Runnable::_add_ref(void)
        public: virtual void sphSystem::thread::Runnable::_remove_ref(void)
        public: virtual long sphSystem::thread::Runnable::getRef(void) const
#endif

        // VFTable. Offset=0, Size=7, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::Runnable::_add_ref(void); // 0
        public: virtual void sphSystem::thread::Runnable::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::Runnable::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void) = 0; // 4
        public: virtual void unknown_vf_0_5(void) = 0; // 5
        public: virtual void unknown_vf_0_6(void) = 0; // 6
        // VFTable with 0 offset end

        // VFTable. Offset=56, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::Runnable::~Runnable(void); // 0
        public: virtual void unknown_vf_56_1(void); // 1
        public: virtual void unknown_vf_56_2(void); // 2
        public: virtual void unknown_vf_56_3(void); // 3
#endif
        // VFTable with 56 offset end

      public:
      };

      class/*or struct*/ RunnableAdapter
      {
        // Functions:
        public: sphSystem::thread::RunnableAdapter::RunnableAdapter(class sophisTools::base::RefCountHandle<class sphSystem::thread::Runnable>)
        public: void sphSystem::thread::RunnableAdapter::`vbase dtor'(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::RunnableAdapter::~RunnableAdapter(void)
        public: virtual void sphSystem::thread::RunnableAdapter::_add_ref(void)
        public: virtual void sphSystem::thread::RunnableAdapter::_remove_ref(void)
        public: virtual long sphSystem::thread::RunnableAdapter::getRef(void) const
        public: virtual bool sphSystem::thread::RunnableAdapter::isRunning(void)
        public: virtual void sphSystem::thread::RunnableAdapter::run(void)
        public: virtual void sphSystem::thread::RunnableAdapter::stop(bool)
#endif

        // VFTable. Offset=0, Size=7, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::RunnableAdapter::_add_ref(void); // 0
        public: virtual void sphSystem::thread::RunnableAdapter::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::RunnableAdapter::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::thread::RunnableAdapter::run(void); // 4
        public: virtual void sphSystem::thread::RunnableAdapter::stop(bool); // 5
        public: virtual bool sphSystem::thread::RunnableAdapter::isRunning(void); // 6
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::RunnableAdapter::~RunnableAdapter(void); // 0
        public: virtual void unknown_vf_40_1(void); // 1
        public: virtual void unknown_vf_40_2(void); // 2
        public: virtual void unknown_vf_40_3(void); // 3
#endif
        // VFTable with 40 offset end

      public:
      };

      class RunnableBase
      {
        // Functions:
        public: sphSystem::thread::RunnableBase::RunnableBase(class sphSystem::thread::RunnableBase const &)
        public: sphSystem::thread::RunnableBase::RunnableBase(void)
        public: class sphSystem::thread::RunnableBase & sphSystem::thread::RunnableBase::operator=(class sphSystem::thread::RunnableBase const &)
        public: void sphSystem::thread::RunnableBase::run(void)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::RunnableBase::~RunnableBase(void)
#endif

        // VFTable. Offset=0, Size=2, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::RunnableBase::~RunnableBase(void); // 0
        public: virtual void unknown_vf_0_1(void) = 0; // 1
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ RunnableControlThread : public PollingThread
      {
        // Functions:
        public: sphSystem::thread::RunnableControlThread::RunnableControlThread(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, char const *, class boost::recursive_mutex &, class boost::condition_variable_any &)
        protected: class boost::recursive_mutex & sphSystem::thread::RunnableControlThread::getFinishMutex(void)
        // Variables:
        private: static char const *sphSystem::thread::RunnableControlThread::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::RunnableControlThread::~RunnableControlThread(void)
        public: virtual void sphSystem::thread::RunnableControlThread::cancel(void)
        public: virtual void sphSystem::thread::RunnableControlThread::clean(void)
        public: virtual void sphSystem::thread::RunnableControlThread::performJob(void)
#endif

        // VFTable. Offset=0, Size=11, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::thread::RunnableControlThread::~RunnableControlThread(void); // 0
        // Overrides:
        public: virtual void sphSystem::thread::RunnableControlThread::cancel(void) override; // 1
        public: virtual void sphSystem::thread::RunnableControlThread::clean(void) override; // 7
        public: virtual void sphSystem::thread::RunnableControlThread::performJob(void) override; // 10
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ RunnableThread : public PollingThread
      {
        // Functions:
        public: sphSystem::thread::RunnableThread::RunnableThread(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, char const *, class boost::recursive_mutex &, class boost::condition_variable_any &)
        public: sphSystem::thread::RunnableThread::RunnableThread(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, char const *, class boost::recursive_mutex &, class boost::condition_variable_any &, __int64)
        public: void sphSystem::thread::RunnableThread::stopRunnable(bool)
        // Variables:
        private: static char const *sphSystem::thread::RunnableThread::__CLASSNAME__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::RunnableThread::~RunnableThread(void)
        public: virtual void sphSystem::thread::RunnableThread::cancel(void)
        public: virtual void sphSystem::thread::RunnableThread::clean(void)
        public: virtual void sphSystem::thread::RunnableThread::performJob(void)
        public: virtual void sphSystem::thread::RunnableThread::runLoopTerminated(void)
#endif

        // VFTable. Offset=0, Size=12, Start=11
        // Corresponding base: thread::thread::PollingThread
        // Owner: SophisSystem.dll
        // public: virtual sphSystem::thread::RunnableThread::~RunnableThread(void); // 0
        // Overrides:
        public: virtual void sphSystem::thread::RunnableThread::cancel(void) override; // 1
        public: virtual void sphSystem::thread::RunnableThread::clean(void) override; // 7
        public: virtual void sphSystem::thread::RunnableThread::performJob(void) override; // 10
        // Added virtual functions:
        public: virtual void sphSystem::thread::RunnableThread::runLoopTerminated(void); // 11
        // VFTable with 0 offset end

      public:
      };

      class RunnableWorkerThread : public RunnableThread
      {
        // VFTable. Offset=0, Size=12, Start=12
        // Corresponding base: thread::thread::RunnableThread
        // Owner: SophisSystem.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ SafeBasicRunnable
      {
        // Functions:
        public: sphSystem::thread::SafeBasicRunnable::SafeBasicRunnable(void)
        public: class boost::recursive_mutex & sphSystem::thread::SafeBasicRunnable::getMutex(void)
        public: void sphSystem::thread::SafeBasicRunnable::join(void)
        // Variables:
        private: static char const *sphSystem::thread::SafeBasicRunnable::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::SafeBasicRunnable::~SafeBasicRunnable(void)
        public: virtual void sphSystem::thread::SafeBasicRunnable::run(void)
        public: virtual void sphSystem::thread::SafeBasicRunnable::stop(bool)
#endif

        // VFTable. Offset=0, Size=10, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::SafeBasicRunnable::~SafeBasicRunnable(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::thread::SafeBasicRunnable::run(void); // 4
        public: virtual void sphSystem::thread::SafeBasicRunnable::stop(bool); // 5
        public: virtual void unknown_vf_0_6(void); // 6
        public: virtual void unknown_vf_0_7(void) = 0; // 7
        public: virtual void unknown_vf_0_8(void); // 8
        public: virtual void unknown_vf_0_9(void); // 9
        // VFTable with 0 offset end

        // VFTable. Offset=48, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::SafeBasicRunnable::~SafeBasicRunnable(void); // 0
        public: virtual void unknown_vf_48_1(void); // 1
        public: virtual void unknown_vf_48_2(void); // 2
        public: virtual void unknown_vf_48_3(void); // 3
#endif
        // VFTable with 48 offset end

      public:
      };

      class ScheduledAction
      {
        // Functions:
        public: sphSystem::thread::ScheduledAction::ScheduledAction(char const *)
        public: char const * sphSystem::thread::ScheduledAction::getName(void)
        // Variables:
        private: static char const *sphSystem::thread::ScheduledAction::__CLASSNAME__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::ScheduledAction::~ScheduledAction(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::ScheduledAction::~ScheduledAction(void) = 0; // 0
        // VFTable with 0 offset end

        // VFTable. Offset=88, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::ScheduledAction::~ScheduledAction(void); // 0
        public: virtual void unknown_vf_88_1(void); // 1
        public: virtual void unknown_vf_88_2(void); // 2
        public: virtual void unknown_vf_88_3(void); // 3
#endif
        // VFTable with 88 offset end

      public:
      };

      class/*or struct*/ ThreadHelper
      {
        // Static functions:
        protected: static void sphSystem::thread::ThreadHelper::doStop(class sphSystem::thread::PollingThread *)
      public:
      };

      class ThreadPool
      {
        // Functions:
        protected: sphSystem::thread::ThreadPool::ThreadPool(class sophisTools::base::RefCountHandle<class sphSystem::thread::WorkerManager>)
        public: void sphSystem::thread::ThreadPool::`vbase dtor'(void)
        public: void sphSystem::thread::ThreadPool::clearListeners(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sphSystem::thread::ThreadPool> sphSystem::thread::ThreadPool::create(unsigned __int64)
        // Variables:
        private: static char const *sphSystem::thread::ThreadPool::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::ThreadPool::~ThreadPool(void)
        public: virtual void sphSystem::thread::ThreadPool::_add_ref(void)
        public: virtual void sphSystem::thread::ThreadPool::_remove_ref(void)
        public: virtual void sphSystem::thread::ThreadPool::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: virtual unsigned __int64 sphSystem::thread::ThreadPool::getLoad(void)
        public: virtual long sphSystem::thread::ThreadPool::getRef(void) const
        public: virtual bool sphSystem::thread::ThreadPool::isRunning(void)
        public: virtual bool sphSystem::thread::ThreadPool::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: virtual void sphSystem::thread::ThreadPool::run(void)
        public: virtual void sphSystem::thread::ThreadPool::stop(bool)
        public: virtual void sphSystem::thread::ThreadPool::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long)
        public: virtual bool sphSystem::thread::ThreadPool::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>)
#endif

        // VFTable. Offset=0, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::ThreadPool::_add_ref(void); // 0
        public: virtual void sphSystem::thread::ThreadPool::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::ThreadPool::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::thread::ThreadPool::run(void); // 4
        public: virtual void sphSystem::thread::ThreadPool::stop(bool); // 5
        public: virtual bool sphSystem::thread::ThreadPool::isRunning(void); // 6
        public: virtual bool sphSystem::thread::ThreadPool::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>); // 7
        public: virtual void sphSystem::thread::ThreadPool::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long); // 8
        public: virtual bool sphSystem::thread::ThreadPool::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 9
        public: virtual unsigned __int64 sphSystem::thread::ThreadPool::getLoad(void); // 10
        public: virtual void sphSystem::thread::ThreadPool::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>); // 11
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::ThreadPool::~ThreadPool(void); // 0
        public: virtual void unknown_vf_40_1(void); // 1
        public: virtual void unknown_vf_40_2(void); // 2
        public: virtual void unknown_vf_40_3(void); // 3
#endif
        // VFTable with 40 offset end

      public:
      };

      class/*or struct*/ ThreadedWorker
      {
        // Functions:
        protected: sphSystem::thread::ThreadedWorker::ThreadedWorker(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>)
        public: void sphSystem::thread::ThreadedWorker::`vbase dtor'(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::ThreadedWorker::create(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>)
        // Variables:
        private: static char const *sphSystem::thread::ThreadedWorker::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::ThreadedWorker::~ThreadedWorker(void)
        public: virtual void sphSystem::thread::ThreadedWorker::_add_ref(void)
        public: virtual void sphSystem::thread::ThreadedWorker::_remove_ref(void)
        public: virtual void sphSystem::thread::ThreadedWorker::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: virtual unsigned __int64 sphSystem::thread::ThreadedWorker::getLoad(void)
        public: virtual long sphSystem::thread::ThreadedWorker::getRef(void) const
        public: virtual bool sphSystem::thread::ThreadedWorker::isRunning(void)
        public: virtual bool sphSystem::thread::ThreadedWorker::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: virtual void sphSystem::thread::ThreadedWorker::run(void)
        public: virtual void sphSystem::thread::ThreadedWorker::stop(bool)
        public: virtual void sphSystem::thread::ThreadedWorker::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long)
        public: virtual bool sphSystem::thread::ThreadedWorker::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>)
#endif

        // VFTable. Offset=0, Size=12, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void sphSystem::thread::ThreadedWorker::_add_ref(void); // 0
        public: virtual void sphSystem::thread::ThreadedWorker::_remove_ref(void); // 1
        public: virtual long sphSystem::thread::ThreadedWorker::getRef(void) const; // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void sphSystem::thread::ThreadedWorker::run(void); // 4
        public: virtual void sphSystem::thread::ThreadedWorker::stop(bool); // 5
        public: virtual bool sphSystem::thread::ThreadedWorker::isRunning(void); // 6
        public: virtual bool sphSystem::thread::ThreadedWorker::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>); // 7
        public: virtual void sphSystem::thread::ThreadedWorker::submit(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long); // 8
        public: virtual bool sphSystem::thread::ThreadedWorker::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 9
        public: virtual unsigned __int64 sphSystem::thread::ThreadedWorker::getLoad(void); // 10
        public: virtual void sphSystem::thread::ThreadedWorker::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>); // 11
        // VFTable with 0 offset end

        // VFTable. Offset=136, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::ThreadedWorker::~ThreadedWorker(void); // 0
        public: virtual void unknown_vf_136_1(void); // 1
        public: virtual void unknown_vf_136_2(void); // 2
        public: virtual void unknown_vf_136_3(void); // 3
#endif
        // VFTable with 136 offset end

      public:
      };

      class WorkerManager
      {
        // Functions:
        protected: sphSystem::thread::WorkerManager::WorkerManager(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerAllocator>, class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: void sphSystem::thread::WorkerManager::`vbase dtor'(void)
        public: void sphSystem::thread::WorkerManager::clearListeners(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> sphSystem::thread::WorkerManager::create(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerAllocator>, class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        // Variables:
        private: static char const *sphSystem::thread::WorkerManager::__CLASS__
#if 0 // All found virtual functions names:
        public: virtual sphSystem::thread::WorkerManager::~WorkerManager(void)
        public: virtual void sphSystem::thread::WorkerManager::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>)
        public: virtual void sphSystem::thread::WorkerManager::clean(void)
        public: virtual void sphSystem::thread::WorkerManager::doRun(void)
        protected: virtual void sphSystem::thread::WorkerManager::process(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long)
        public: virtual bool sphSystem::thread::WorkerManager::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>)
        public: virtual void sphSystem::thread::WorkerManager::requestExit(void)
        public: virtual bool sphSystem::thread::WorkerManager::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>)
#endif

        // VFTable. Offset=0, Size=14, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual sphSystem::thread::WorkerManager::~WorkerManager(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        public: virtual void unknown_vf_0_5(void); // 5
        public: virtual void unknown_vf_0_6(void); // 6
        public: virtual bool sphSystem::thread::WorkerManager::visit(class sophisTools::base::RefCountHandle<class sophis::tools::util::WorkerVisitor>); // 7
        public: virtual void unknown_vf_0_8(void); // 8
        public: virtual bool sphSystem::thread::WorkerManager::remove(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>); // 9
        public: virtual void unknown_vf_0_10(void); // 10
        public: virtual void sphSystem::thread::WorkerManager::addListener(class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>); // 11
        protected: virtual void sphSystem::thread::WorkerManager::process(class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, unsigned long); // 12
        public: virtual void unknown_vf_0_13(void); // 13
        // VFTable with 0 offset end

        // VFTable. Offset=8, Size=10, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::WorkerManager::~WorkerManager(void); // 0
        public: virtual void unknown_vf_8_1(void); // 1
        public: virtual void unknown_vf_8_2(void); // 2
        public: virtual void unknown_vf_8_3(void); // 3
        public: virtual void unknown_vf_8_4(void); // 4
        public: virtual void unknown_vf_8_5(void); // 5
        public: virtual void unknown_vf_8_6(void); // 6
        public: virtual void sphSystem::thread::WorkerManager::doRun(void); // 7
        public: virtual void sphSystem::thread::WorkerManager::clean(void); // 8
        public: virtual void sphSystem::thread::WorkerManager::requestExit(void); // 9
#endif
        // VFTable with 8 offset end

        // VFTable. Offset=184, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::thread::WorkerManager::~WorkerManager(void); // 0
        public: virtual void unknown_vf_184_1(void); // 1
        public: virtual void unknown_vf_184_2(void); // 2
        public: virtual void unknown_vf_184_3(void); // 3
#endif
        // VFTable with 184 offset end

      public:
      };

      class/*or struct*/ WorkerVisitorJobRemover
      {
        // VFTable. Offset=0, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class/*or struct*/ WorkerVisitorStopper
      {
        // VFTable. Offset=0, Size=5, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        // VFTable with 0 offset end

        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      class WriteSynchronized
      {
        // Functions:
        public: sphSystem::thread::WriteSynchronized::WriteSynchronized(class sphSystem::thread::ReadWriteMonitor &)
        public: sphSystem::thread::WriteSynchronized::~WriteSynchronized(void)
        public: class sphSystem::thread::WriteSynchronized & sphSystem::thread::WriteSynchronized::operator=(class sphSystem::thread::WriteSynchronized const &)
      public:
      };

      struct less_Time24
      {
      public:
      };


    };

    namespace/*or class/struct?*/ util
    {
      // Nested containers:
      class/*or struct*/ CounterMap
      {
        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisSystem.dll
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

      template<typename T1      >
      class/*or struct*/ SafeNotificationProvider
      {
      public:
      };
#if 0 // Instances:
// <struct sophis::tools::util::Worker::JobTerminatedEvent>
#if 0
      template<>
      class/*or struct*/ SafeNotificationProvider<struct sophis::tools::util::Worker::JobTerminatedEvent>
      {
        // VFTable. Offset=0, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        // VFTable with 0 offset end

        // VFTable. Offset=64, Size=4, Start=0
        // Owner: SophisSystem.dll
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
#endif
#endif


      class UIDGenerator
      {
        // Functions:
        protected: sphSystem::util::UIDGenerator::UIDGenerator(void)
        public: void sphSystem::util::UIDGenerator::`vbase dtor'(void)
        public: void sphSystem::util::UIDGenerator::disposeFromContext(void)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sphSystem::util::UIDGenerator::generateUID(char const *)
#if 0 // All found virtual functions names:
        public: virtual sphSystem::util::UIDGenerator::~UIDGenerator(void)
#endif

        // VFTable. Offset=32, Size=4, Start=0
        // Owner: SophisSystem.dll
        // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
        public: virtual sphSystem::util::UIDGenerator::~UIDGenerator(void); // 0
        public: virtual void unknown_vf_32_1(void); // 1
        public: virtual void unknown_vf_32_2(void); // 2
        public: virtual void unknown_vf_32_3(void); // 3
#endif
        // VFTable with 32 offset end

      public:
      };

      class UIDGeneratorSingleton
      {
        // Functions:
        public: class sphSystem::util::UIDGeneratorSingleton & sphSystem::util::UIDGeneratorSingleton::operator=(class sphSystem::util::UIDGeneratorSingleton &&)
        public: class sphSystem::util::UIDGeneratorSingleton & sphSystem::util::UIDGeneratorSingleton::operator=(class sphSystem::util::UIDGeneratorSingleton const &)
        // Static functions:
        public: static void sphSystem::util::UIDGeneratorSingleton::dispose(void)
        public: static void sphSystem::util::UIDGeneratorSingleton::disposeCurrentGenerator(void)
        public: static class sophisTools::base::RefCountHandle<class sphSystem::util::UIDGenerator> sphSystem::util::UIDGeneratorSingleton::getGenerator(bool)
        public: static void sphSystem::util::UIDGeneratorSingleton::init(void)
        // Variables:
        private: static class sophisTools::base::RefCountHandle<class sphSystem::util::UIDGenerator> sphSystem::util::UIDGeneratorSingleton::fGlobal
      public:
      };


    };


  };

  class/*or struct*/ std
  {
  public:
    // Nested containers:
    template<typename T1    >
    class _List_iterator
    {
    public:
    };
#if 0 // Instances:
// <class std::_List_val<struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>>
#if 0
    template<>
    class _List_iterator<class std::_List_val<struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    struct _List_simple_types
    {
    public:
    };
#if 0 // Instances:
// <class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>
#if 0
    template<>
    struct _List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _List_val
    {
    public:
    };
#if 0 // Instances:
// <struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>
#if 0
    template<>
    class _List_val<struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ _Locinfo
    {
      // Functions:
      public: struct _Cvtvec _Getcvt(void) const
      public: unsigned short const * _W_Getdays(void) const
      public: unsigned short const * _W_Getmonths(void) const
    public:
    };

    template<typename T1    >
    class/*or struct*/ _Ref_count
    {
    public:
    };
#if 0 // Instances:
// <class `anonymous namespace'::StatisticsProcessor>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class `anonymous namespace'::StatisticsProcessor> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::comm::ChannelReceiveThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::comm::ChannelReceiveThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::comm::ChannelSendThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::comm::ChannelSendThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::comm::SimpleChannelReceiveThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::comm::SimpleChannelReceiveThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::comm::SimpleChannelSendThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::comm::SimpleChannelSendThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::logger::AutoShiftWorkerThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::logger::AutoShiftWorkerThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::server::AutoShutDownThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::server::AutoShutDownThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::server::ProgramExitWatcherThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::server::ProgramExitWatcherThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::thread::MultiActionThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::thread::MultiActionThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class sphSystem::thread::RunnableWorkerThread>
#if 0
    template<>
    class/*or struct*/ _Ref_count<class sphSystem::thread::RunnableWorkerThread> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
#endif


    class/*or struct*/ _Ref_count_base
    {
    public:
    };

    template<typename T1    >
    struct _Simple_types
    {
    public:
    };
#if 0 // Instances:
// <class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>
#if 0
    template<>
    struct _Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T1, typename T2, typename T3, typename T5    >
    class _Tmap_traits
    {
    public:
    };
#if 0 // Instances:
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
#if 0
    template<>
    class _Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>, 0>
#if 0
    template<>
    class _Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>, 0>
    {
    public:
    };
#endif
// <unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>, 1>
#if 0
    template<>
    class _Tmap_traits<unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>, 1>
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
// <class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>, 0>>
    {
    public:
    };
#endif
// <class std::_Tmap_traits<unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>, 1>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>, 1>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _Tree_const_iterator
    {
    public:
    };
#if 0 // Instances:
// <class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>
#if 0
    template<>
    class _Tree_const_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _Tree_iterator
    {
    public:
    };
#if 0 // Instances:
// <class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>
#if 0
    template<>
    class _Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    struct _Tree_simple_types
    {
    public:
    };
#if 0 // Instances:
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
#if 0
    template<>
    struct _Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _Tree_val
    {
    public:
    };
#if 0 // Instances:
// <struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
#if 0
    template<>
    class _Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _Vector_iterator
    {
    public:
    };
#if 0 // Instances:
// <class std::_Vector_val<struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>>
#if 0
    template<>
    class _Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class _Vector_val
    {
    public:
    };
#if 0 // Instances:
// <struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>
#if 0
    template<>
    class _Vector_val<struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>
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
// <class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>>
#if 0
    template<>
    class allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>
#if 0
    template<>
    class allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>
#if 0
    template<>
    class allocator<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>
#if 0
    template<>
    class allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>
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
// <struct sophisTools::logger::filterConstraint>
#if 0
    template<>
    class allocator<struct sophisTools::logger::filterConstraint>
    {
    public:
    };
#endif
// <struct sophisTools::net::SelectReactor::HandlerInfo>
#if 0
    template<>
    class allocator<struct sophisTools::net::SelectReactor::HandlerInfo>
    {
    public:
    };
#endif
// <struct sphSystem::plugin::ListElement>
#if 0
    template<>
    class allocator<struct sphSystem::plugin::ListElement>
    {
    public:
    };
#endif
// <struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>
#if 0
    template<>
    class allocator<struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>
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
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>
    {
    public:
    };
#endif
// <struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>
#if 0
    template<>
    class allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>
    {
    public:
    };
#endif
// <unsigned char>
#if 0
    template<>
    class allocator<unsigned char>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ bad_alloc : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_array_new_length : public bad_alloc
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::bad_alloc
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_cast : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisSystem.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_weak_ptr : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisSystem.dll
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
      public: void std::basic_ios<char, struct std::char_traits<char>>::setstate(int, bool)
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
      // Owner: SophisSystem.dll
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
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(class std::ios_base & (__cdecl *)(class std::ios_base &))
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(__int64)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned __int64)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(bool)
      public: void std::basic_ostream<char, struct std::char_traits<char>>::`vbase dtor'(void)
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
      // Owner: SophisSystem.dll
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
      public: int std::basic_streambuf<char, struct std::char_traits<char>>::sbumpc(void)
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
    class basic_stringbuf
    {
    public:
    };
#if 0 // Instances:
// <char, struct std::char_traits<char>, class std::allocator<char>>
#if 0
    template<>
    class basic_stringbuf<char, struct std::char_traits<char>, class std::allocator<char>> : public basic_streambuf<char, struct std::char_traits<char>>
    {
      // VFTable. Offset=0, Size=15, Start=15
      // Corresponding base: basic_streambuf::basic_streambuf::basic_streambuf<char, struct std::char_traits<char>>
      // Owner: SophisSystem.dll
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
      // Owner: SophisSystem.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      // VFTable with 0 offset end

    public:
    };

    class ios_base
    {
      // Functions:
      public: void exceptions(int)
    public:
    };

    template<typename T1    >
    struct less
    {
    public:
    };
#if 0 // Instances:
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
#if 0
    template<>
    struct less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>
    {
    public:
    };
#endif
// <unsigned long>
#if 0
    template<>
    struct less<unsigned long>
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
// <class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>>>
#if 0
    template<>
    class/*or struct*/ list<class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::NotificationListener<struct sophis::tools::util::Worker::JobTerminatedEvent>>>>
    {
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>
#if 0
    template<>
    class/*or struct*/ list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>
    {
      // Functions:
      public: class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>> std::list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>::begin(void)
      public: class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>> std::list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>::end(void)
      public: void std::list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>::pop_front(void)
      public: void std::list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>::push_back(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> &&)
      public: void std::list<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>, class std::allocator<class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker>>>::push_back(class sophisTools::base::RefCountHandle<class sophis::tools::util::Worker> const &)
    public:
    };
#endif
// <class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>>
#if 0
    template<>
    class list<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::comm::QuoteInfo>>>
    {
    public:
    };
#endif
// <struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>>
#if 0
    template<>
    class list<struct sophisTools::logger::filterConstraint, class std::allocator<struct sophisTools::logger::filterConstraint>>
    {
    public:
    };
#endif
// <struct sophisTools::net::SelectReactor::HandlerInfo, class std::allocator<struct sophisTools::net::SelectReactor::HandlerInfo>>
#if 0
    template<>
    class list<struct sophisTools::net::SelectReactor::HandlerInfo, class std::allocator<struct sophisTools::net::SelectReactor::HandlerInfo>>
    {
    public:
    };
#endif
// <struct sphSystem::plugin::ListElement, class std::allocator<struct sphSystem::plugin::ListElement>>
#if 0
    template<>
    class/*or struct*/ list<struct sphSystem::plugin::ListElement, class std::allocator<struct sphSystem::plugin::ListElement>>
    {
    public:
    };
#endif
#endif


    class locale
    {
    public:
    };

    template<typename T0, typename T1, typename T2, typename T4    >
    class map
    {
    public:
    };
#if 0 // Instances:
// <class sophisTools::time::Time24, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, struct sphSystem::thread::less_Time24, class std::allocator<struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>>
#if 0
    template<>
    class map<class sophisTools::time::Time24, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>, struct sphSystem::thread::less_Time24, class std::allocator<struct std::pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>>>
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
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>>
#if 0
    template<>
    class/*or struct*/ map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>> : public _Tree<class std::_Tmap_traits<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned __int64, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>>, 0>>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T1, typename T2, typename T4    >
    class/*or struct*/ multimap
    {
    public:
    };
#if 0 // Instances:
// <unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>>
#if 0
    template<>
    class/*or struct*/ multimap<unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>> : public _Tree<class std::_Tmap_traits<unsigned long, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>, struct std::less<unsigned long>, class std::allocator<struct std::pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>>, 1>>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    struct pair
    {
    public:
    };
#if 0 // Instances:
// <class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>
#if 0
    template<>
    struct pair<class sophisTools::time::Time24 const, class sophisTools::base::RefCountHandle<class sphSystem::thread::ScheduledAction>>
    {
    public:
    };
#endif
// <class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>, bool>
#if 0
    template<>
    struct pair<class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>>>, bool>
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
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, unsigned __int64>
    {
    public:
    };
#endif
// <unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>
#if 0
    template<>
    struct pair<unsigned long const, class sophisTools::base::RefCountHandle<class sophisTools::base::Runnable>>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ runtime_error : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisSystem.dll
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
    class set<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>
    {
    public:
    };
#endif
#endif


    template<typename T1    >
    class shared_ptr
    {
    public:
    };
#if 0 // Instances:
// <class sphSystem::thread::MultiActionThread>
#if 0
    template<>
    class shared_ptr<class sphSystem::thread::MultiActionThread>
    {
    public:
    };
#endif
// <class sphSystem::thread::PollingThread>
#if 0
    template<>
    class shared_ptr<class sphSystem::thread::PollingThread>
    {
    public:
    };
#endif
// <class sphSystem::thread::RunnableBase>
#if 0
    template<>
    class shared_ptr<class sphSystem::thread::RunnableBase>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    class vector
    {
    public:
    };
#if 0 // Instances:
// <class sophisTools::base::RefCountHandle<class sophisTools::io::Library>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>
#if 0
    template<>
    class/*or struct*/ vector<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>
    {
      // Functions:
      public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>> std::vector<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>::begin(void)
      public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>> std::vector<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>, class std::allocator<class sophisTools::base::RefCountHandle<class sophisTools::io::Library>>>::end(void)
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
// <unsigned char, class std::allocator<unsigned char>>
#if 0
    template<>
    class vector<unsigned char, class std::allocator<unsigned char>>
    {
    public:
    };
#endif
#endif



    // Functions:
    void _Throw_C_error(int)
    void _Xbad_alloc(void)
    void _Xlength_error(char const *)
    void _Xout_of_range(char const *)
    bool uncaught_exception(void)
  public:
  };

  class/*or struct*/ type_info
  {
    // VFTable. Offset=0, Size=1, Start=0
    // Owner: SophisSystem.dll
    // Added virtual functions:
    public: virtual void unknown_vf_0_0(void); // 0
    // VFTable with 0 offset end

  public:
  };


  // Functions:
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, class sphSystemconfigArgMap const &)
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, class sophisToolsbaseExceptionBase const &)
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, class sphSystemconfigInitParameters const &)
  void __ExceptionPtrCopy(void *, void const *)
  void __ExceptionPtrDestroy(void *)
public:
};
