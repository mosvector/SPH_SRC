class/*or struct*/ 
{
public:
  // Enumerations:
  enum EQuotationsCoherencyMode : int {
  };
  enum eBackOfficeType : int {
  };

  // Nested containers:
  class CLockDownDateManager
  {
    // Static functions:
    public: static class CLockDownDateManager * GetInstance(void)
  public:
  };

  namespace/*or class/struct?*/ CSRAPIConfiguration
  {
    // Nested containers:
    class/*or struct*/ DataIntegrity
    {
      // Static functions:
      public: static bool EnableDataIntegrity(void)
    public:
    };


  };

  class CSRColleUtilisateur_v1
  {
  public:
  };

  class/*or struct*/ CSRCurrencyCreatorImpl : public ICSRCurrencyCreator
  {
    // Functions:
    public: CSRCurrencyCreatorImpl(void)
#if 0 // All found virtual functions names:
    public: virtual ~CSRCurrencyCreatorImpl(void)
    public: virtual class sophis::static_data::CSRCurrency const * CreateFromDescription(class sophis::tools::dataModel::DataSet const &)
    private: virtual struct sophis::DAL::CurrencyDescription const GetCurrencyDescription(class sophis::tools::dataModel::DataSet const &)
    public: virtual long const UpdateBankHolidaysFromDescription(class sophis::tools::dataModel::DataSet const &)
#endif

    // VFTable. Offset=0, Size=4, Start=0
    // Corresponding base: static_data::static_data::ICSRCurrencyCreator
    // Owner: SophisXmlTools.dll
    // Added virtual functions:
    public: virtual ~CSRCurrencyCreatorImpl(void); // 0
    public: virtual class sophis::static_data::CSRCurrency const * CreateFromDescription(class sophis::tools::dataModel::DataSet const &); // 1
    public: virtual long const UpdateBankHolidaysFromDescription(class sophis::tools::dataModel::DataSet const &); // 2
    private: virtual struct sophis::DAL::CurrencyDescription const GetCurrencyDescription(class sophis::tools::dataModel::DataSet const &); // 3
    // VFTable with 0 offset end

  public:
  };

  class/*or struct*/ CSRPlaceCreatorImpl
  {
    // Static functions:
    public: static struct sophis::DAL::PlaceDescription * GetPlaceDescriptionFromDataSet(class sophis::tools::dataModel::DataSet const &)
    public: static void SendPlaceCreateEvent(struct sophis::DAL::PlaceDescription *)
    public: static struct sophis::DAL::PlaceDescription * SynchronizePlaceInstance(struct sophis::DAL::PlaceDescription *, class sophis::tools::CSREventVector &, bool)
    public: static void UpdatePlacesWithHolidays(struct sophis::DAL::PlaceDescription *, class sophis::tools::CSREventVector &)
  public:
  };

  class/*or struct*/ CSRPreference
  {
    // Static functions:
    public: static void GetNthTable(int, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
    public: static bool IsSimulationMode(void)
  public:
  };

  class CSRSiteManager
  {
    // Functions:
    public: double GetCurrentSiteCutoffInDBTimeZone(void)
    // Static functions:
    public: static class CSRSiteManager & GetInstance(void)
  public:
  };

  class CSRic
  {
    // Functions:
    public: void GetDescription(class sophis::tools::dataModel::DataSet &) const
    public: int Save(void *)
    public: void UpdateFromDescription(class sophis::tools::dataModel::DataSet const &)
    // Static functions:
    public: static class CSRic * GetCSRic(long)
  public:
  };

  class CSSimulation
  {
    // Functions:
    public: bool isActive(void)
  public:
  };

  class/*or struct*/ CSXMLDocument
  {
    // Functions:
    public: CSXMLDocument(void)
    public: bool CopyFromProduit(struct sophis::DAL::OptionInstrumentData **)
    public: long FindIdentifiers(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const *)
    public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const * GetBuffer(void) const
#if 0 // All found virtual functions names:
    public: virtual ~CSXMLDocument(void)
#endif

  public:
  };

  class CSxInstrumentHistoryHelper
  {
    // Functions:
    public: CSxInstrumentHistoryHelper(class CSxInstrumentHistoryHelper const &)
    public: CSxInstrumentHistoryHelper(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
    public: class CSxInstrumentHistoryHelper & operator=(class CSxInstrumentHistoryHelper const &)
    private: void _saveHistoricalPrices(class std::map<long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>> const &)
    private: void _saveHistoricalPricesForOneDate(long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &)
    private: void _saveSnapshotPrices(class std::map<struct QuoteKey_t, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>> const &)
    private: void _saveSnapshotPricesForOneDate(struct QuoteKey_t const &, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &, class sophis::tools::CSREventVector &)
    public: bool hasHistoryFor(double, char const *) const
    public: bool hasSnapshotHistoryFor(double, char const *) const
    public: void resetInstrument(long)
    public: bool savePricesForDates(class std::map<long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>> const &, class std::map<struct QuoteKey_t, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>> const &, bool, class sophis::tools::CSREventVector &)
    public: bool savePricesForOneDate(struct QuoteKey_t const &, bool, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &, class sophis::tools::CSREventVector &)
    // Static functions:
    public: static double GetFixingForField(long, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
    protected: static bool MustSendSAISMessage(void)
    public: static void SetQuotationsCoherencyMode(enum EQuotationsCoherencyMode)
    // Variables:
    private: static char const *__CLASS__
    private: static enum EQuotationsCoherencyMode fQuotationsCoherencyMode
#if 0 // All found virtual functions names:
    public: virtual ~CSxInstrumentHistoryHelper(void)
    protected: virtual bool DataToBeSaved(long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &)
    public: virtual void Notify(class sophis::tools::CSREventVector &) const
    protected: virtual void UpdateCache(long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &)
#endif

    // VFTable. Offset=0, Size=4, Start=0
    // Owner: SophisXmlTools.dll
    // Added virtual functions:
    public: virtual ~CSxInstrumentHistoryHelper(void); // 0
    public: virtual void Notify(class sophis::tools::CSREventVector &) const; // 1
    protected: virtual bool DataToBeSaved(long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &); // 2
    protected: virtual void UpdateCache(long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &); // 3
    // VFTable with 0 offset end

  public:
  };

  class/*or struct*/ InstrumentIO
  {
    // Static functions:
    public: static class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct SnapshotColumnDB_t, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>>> const & getSnapshotColumnsFromName(void)
    public: static bool saveHistoricalPrices(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, long, class std::map<long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>> const &)
    public: static bool saveHistoricalPricesForOneDay(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, long, long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>> const &)
    public: static unsigned __int64 saveSnapshotPricesForOneDay(long, long, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>> const &, long)
    public: static unsigned __int64 saveSnapshotPricesHistoric(long, class std::map<struct QuoteKey_t, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>>> const &)
  public:
  };

  namespace/*or class/struct?*/ Log
  {
    // Enumerations:
    enum Severity : int {
    };

  };

  namespace/*or class/struct?*/ NSREnums
  {
    // Enumerations:
    enum eParameterModificationType : int {
    };

  };

  struct OCILobLocator
  {
  public:
  };

  struct PriceDB_t
  {
  public:
  };

  struct QuoteKey_t
  {
    // Functions:
    public: bool operator<(struct QuoteKey_t const &) const
  public:
  };

  struct SSCourbeTauxSup
  {
  public:
  };

  struct SnapshotColumnDB_t
  {
  public:
  };

  struct TConfigClient
  {
  public:
  };

  struct TableauDefProd
  {
  public:
  };

#if 0
  template<>
  namespace/*or class/struct?*/ `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'
  {
    // Nested containers:
    struct fidListSave
    {
    public:
    };


  };
#endif

  namespace/*or class/struct?*/ `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'
  {
    // Nested containers:
    struct ReferringDeal
    {
    public:
    };


  };

  namespace/*or class/struct?*/ boost
  {
    // Nested containers:
    namespace/*or class/struct?*/ container
    {
      // Nested containers:
      class/*or struct*/ exception : public exception
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::exception
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };

      template<typename T0, typename T1, typename T2, typename T4      >
      class flat_map
      {
      public:
      };
#if 0 // Instances:
// <long, long, struct std::less<long>, void>
#if 0
      template<>
      class flat_map<long, long, struct std::less<long>, void>
      {
      public:
      };
#endif
#endif


      class/*or struct*/ out_of_range : public exception
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: container::container::exception
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };


    };

    namespace/*or class/struct?*/ numeric
    {
      // Nested containers:
      class/*or struct*/ bad_numeric_cast : public bad_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: std::bad_cast
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };

      class/*or struct*/ positive_overflow : public bad_numeric_cast
      {
        // VFTable. Offset=0, Size=2, Start=2
        // Corresponding base: numeric::numeric::bad_numeric_cast
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };


    };


  };

  namespace/*or class/struct?*/ sophis
  {
    // Nested containers:
    namespace/*or class/struct?*/ DAL
    {
      // Nested containers:
      struct BaseInstrumentData
      {
        // Functions:
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & sophis::DAL::BaseInstrumentData::GetName(void) const
        public: long sophis::DAL::BaseInstrumentData::GetSicovam(void) const
      public:
      };

      class CSRCurrencyDescriptionReferential
      {
        // Functions:
        public: struct sophis::DAL::CurrencyDescription * sophis::DAL::CSRCurrencyDescriptionReferential::GetCurrencyByCode(long)
        // Static functions:
        public: static class sophis::DAL::CSRCurrencyDescriptionReferential & sophis::DAL::CSRCurrencyDescriptionReferential::GetInstance(void)
      public:
      };

      class CSRPlaceDescriptionReferential
      {
        // Functions:
        public: bool sophis::DAL::CSRPlaceDescriptionReferential::Delete(long)
        // Static functions:
        public: static class sophis::DAL::CSRPlaceDescriptionReferential & sophis::DAL::CSRPlaceDescriptionReferential::GetInstance(void)
      public:
      };

      struct CurrencyDescription
      {
        // Functions:
        public: void sophis::DAL::CurrencyDescription::BuildPlacesMenu(void)
      public:
      };

      struct InstrumentData
      {
      public:
      };

      class InstrumentReferential
      {
        // Static functions:
        public: static struct sophis::DAL::BaseInstrumentData * sophis::DAL::InstrumentReferential::FindInstrument(long)
        public: static class sophis::DAL::InstrumentReferential & sophis::DAL::InstrumentReferential::GetInstance(void)
      public:
      };

      struct OptionInstrumentData
      {
      public:
      };

      struct PlaceDescription
      {
        // Functions:
        public: sophis::DAL::PlaceDescription::~PlaceDescription(void)
      public:
      };

      class/*or struct*/ PlaceDescriptionDependencyImpl
      {
        // Static functions:
        public: static long sophis::DAL::PlaceDescriptionDependencyImpl::GetPlaceCode(long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        public: static long sophis::DAL::PlaceDescriptionDependencyImpl::GetSequenceCode(void)
      public:
      };

      struct SSCreditRiskMgrParameters
      {
      public:
      };

      struct SSRepoMargin
      {
      public:
      };

      struct YieldCurveInfos
      {
        // Functions:
        public: struct SSCourbeTauxSup * sophis::DAL::YieldCurveInfos::GetSSCourbeTauxSup(void)
      public:
      };

      class YieldCurveReferential
      {
        // Functions:
        public: unsigned __int64 sophis::DAL::YieldCurveReferential::GetCountOfYCInfos(void)
        // Static functions:
        public: static class sophis::DAL::YieldCurveReferential & sophis::DAL::YieldCurveReferential::GetInstance(void)
        public: static struct sophis::DAL::YieldCurveInfos * sophis::DAL::YieldCurveReferential::GetNthYCInfos(int)
      public:
      };


    };

    namespace/*or class/struct?*/ accounting
    {
      // Nested containers:
      class/*or struct*/ CSRAccountSetupIOManager
      {
        // Functions:
        public: sophis::accounting::CSRAccountSetupIOManager::CSRAccountSetupIOManager(void)
        public: class sophis::accounting::ImportResult sophis::accounting::CSRAccountSetupIOManager::ProcessXMLWithoutCommit(class sophis::tools::dataModel::DataSet const &) const
#if 0 // All found virtual functions names:
        public: virtual sophis::accounting::CSRAccountSetupIOManager::~CSRAccountSetupIOManager(void)
#endif

      public:
      };

      class ImportResult
      {
        // Functions:
        public: sophis::accounting::ImportResult::ImportResult(void)
        public: sophis::accounting::ImportResult::~ImportResult(void)
        public: class sophis::accounting::ImportResult & sophis::accounting::ImportResult::operator=(class sophis::accounting::ImportResult const &)
        public: bool sophis::accounting::ImportResult::HasError(void) const
        public: void sophis::accounting::ImportResult::SaveLogs(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
      public:
      };


    };

    namespace/*or class/struct?*/ backoffice_kernel
    {
      // Nested containers:
      class KernelPrefTemp
      {
        // Functions:
        public: long sophis::backoffice_kernel::KernelPrefTemp::GetKernelEventForFrontOfficeCreation(void)
        // Static functions:
        public: static class sophis::backoffice_kernel::KernelPrefTemp & sophis::backoffice_kernel::KernelPrefTemp::GetInstance(void)
      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class/*or struct*/ CommonType
        {
#if 0 // All found virtual functions names:
          public: virtual char const * sophis::backoffice_kernel::dataModel::CommonType::ns(void) const
#endif

        public:
        };

        class/*or struct*/ PartyReference
        {
          // Functions:
          public: sophis::backoffice_kernel::dataModel::PartyReference::PartyReference(void)
          public: void sophis::backoffice_kernel::dataModel::PartyReference::`vbase dtor'(void)
          public: long sophis::backoffice_kernel::dataModel::PartyReference::resolveId(void) const
#if 0 // All found virtual functions names:
          public: virtual class sophis::tools::dataModel::PersistentState * sophis::backoffice_kernel::dataModel::PartyReference::clone(void) const
          public: virtual void sophis::backoffice_kernel::dataModel::PartyReference::restoreObject(class sophis::tools::dataModel::Storage const &)
          public: virtual void sophis::backoffice_kernel::dataModel::PartyReference::storeObject(class sophis::tools::dataModel::Storage &) const
          public: virtual char const * sophis::backoffice_kernel::dataModel::PartyReference::typeName(void) const
#endif

        public:
        };


      };


    };

    class/*or struct*/ collateral
    {
    public:
      // Nested containers:
      class CSRLBAgreement
      {
      public:
      };


      // Functions:
      void BookBasketSwap(class sophis::finance::CSRBasketSwap const *, class CSRLBAgreement const *, long, long, class sophis::tools::dataModel::DataSet const &, class sophis::tools::CSREventVector &)
      class sophis::finance::CSRBasketSwap * CreateBasketSwap(class CSRLBAgreement const *, long, long, double)
      class CSRLBAgreement * GetAgreement(long)
      class sophis::finance::CSRBasketSwap * GetBasketSwap(long, long)
      void UpdateBasketSwapAdjustmentSpreadsAndDividendRebates(class sophis::finance::CSRBasketSwap *, class sophis::tools::dataModel::DataSet const &, class CSRLBAgreement const *)
    public:
    };

    namespace/*or class/struct?*/ dailyData
    {
      // Nested containers:
      class ISRDailyDataXML
      {
      public:
        // Nested containers:
        struct SSDailyDataXMLParameters
        {
          // Functions:
          public: sophis::dailyData::ISRDailyDataXML::SSDailyDataXMLParameters::SSDailyDataXMLParameters(void)
          public: sophis::dailyData::ISRDailyDataXML::SSDailyDataXMLParameters::~SSDailyDataXMLParameters(void)
        public:
        };


        // Static functions:
        public: static class sophis::dailyData::ISRDailyDataXML * sophis::dailyData::ISRDailyDataXML::Create(struct sophis::dailyData::ISRDailyDataXML::SSDailyDataXMLParameters const &)
        public: static class sophis::dailyData::ISRDailyDataXML * sophis::dailyData::ISRDailyDataXML::Create(void)
      public:
      };


    };

    namespace/*or class/struct?*/ dataIntegrity
    {
      // Enumerations:
      enum eProcessStage : int {
      };

      // Nested containers:
      class CSRDataIntegrityMarketData
      {
      public:
      };

      class CSRDataIntegrityMarketDataFactory
      {
        // Functions:
        public: class sophis::dataIntegrity::CSRDataIntegrityMarketData * sophis::dataIntegrity::CSRDataIntegrityMarketDataFactory::GetDataIntegrityMarketData(long, class sophis::market_data::CSRHistoric &, class std::vector<long, class std::allocator<long>> const &)
        // Static functions:
        public: static class sophis::dataIntegrity::CSRDataIntegrityMarketDataFactory * sophis::dataIntegrity::CSRDataIntegrityMarketDataFactory::GetInstance(void)
      public:
      };

      class CSRDataIntegrityRuleManager
      {
        // Functions:
        public: void sophis::dataIntegrity::CSRDataIntegrityRuleManager::Check(class sophis::dataIntegrity::CSRDataIntegrityMarketData &, enum NSREnums::eParameterModificationType, enum sophis::dataIntegrity::eProcessStage)
        // Static functions:
        public: static class sophis::dataIntegrity::CSRDataIntegrityRuleManager & sophis::dataIntegrity::CSRDataIntegrityRuleManager::GetInstance(void)
      public:
      };


    };

    namespace/*or class/struct?*/ event
    {
      // Nested containers:
      class/*or struct*/ CSCurrencyBankHolidaysUpdate
      {
        // Functions:
        public: sophis::event::CSCurrencyBankHolidaysUpdate::CSCurrencyBankHolidaysUpdate(long const &)
#if 0 // All found virtual functions names:
        public: virtual sophis::event::CSCurrencyBankHolidaysUpdate::~CSCurrencyBankHolidaysUpdate(void)
#endif

      public:
      };

      class CSHistoricPriceData
      {
        // Functions:
        public: sophis::event::CSHistoricPriceData::CSHistoricPriceData(void)
        public: sophis::event::CSHistoricPriceData::~CSHistoricPriceData(void)
        public: void sophis::event::CSHistoricPriceData::ResizeExtraValues(unsigned __int64)
        public: void sophis::event::CSHistoricPriceData::SetAsk(double const &)
        public: void sophis::event::CSHistoricPriceData::SetBeta(double const &)
        public: void sophis::event::CSHistoricPriceData::SetBid(double const &)
        public: void sophis::event::CSHistoricPriceData::SetDate(long const &)
        public: void sophis::event::CSHistoricPriceData::SetExtraValuesAt(unsigned __int64, double const &)
        public: void sophis::event::CSHistoricPriceData::SetHigh(double const &)
        public: void sophis::event::CSHistoricPriceData::SetLast(double const &)
        public: void sophis::event::CSHistoricPriceData::SetLow(double const &)
        public: void sophis::event::CSHistoricPriceData::SetOpen(double const &)
        public: void sophis::event::CSHistoricPriceData::SetSico(long const &)
        public: void sophis::event::CSHistoricPriceData::SetTable(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
      public:
      };

      class/*or struct*/ CSProvisionCreationGroup
      {
#if 0 // All found virtual functions names:
        public: virtual sophis::event::CSProvisionCreationGroup::~CSProvisionCreationGroup(void)
#endif

      public:
      };

      class ISEventManager
      {
      public:
      };


      // Variables:
      class ISEventManager &gEvtMgr
    };

    namespace/*or class/struct?*/ finance
    {
      // Nested containers:
      class CSRABSBond
      {
        // Functions:
        public: class sophis::finance::CSRABSCashFlows * sophis::finance::CSRABSBond::GetABSCashFlows(void) const
        public: class sophis::finance::CSRABSSpecific * sophis::finance::CSRABSBond::GetABSSpecific(void) const
      public:
      };

      class CSRABSCashFlows
      {
        // Functions:
        public: void sophis::finance::CSRABSCashFlows::DescribeABSScenario(class sophis::tools::dataModel::DataSet &, char const *, char const *, class sophis::finance::CSRABSBond const *, long)
        public: void sophis::finance::CSRABSCashFlows::DescribeABSScenarioList(class sophis::tools::dataModel::DataSet &, char const *, char const *, class sophis::finance::CSRABSBond const *)
      public:
      };

      class CSRABSSpecific
      {
        // Functions:
        public: long sophis::finance::CSRABSSpecific::GetCashFlowScenario(void) const
      public:
      };

      class CSRBasketSwap
      {
      public:
      };


    };

    class/*or struct*/ fpmlEngine
    {
      // Functions:
      void InstallAPIEntityHandlers(void)
    public:
    };

    namespace/*or class/struct?*/ inflation
    {
      // Nested containers:
      class CSRSeasonality
      {
        // Static functions:
        public: static class sophis::inflation::CSRSeasonality & sophis::inflation::CSRSeasonality::GetInstance(void)
      public:
      };

      class CSRSeasonalityData
      {
        // Functions:
        public: void sophis::inflation::CSRSeasonalityData::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::inflation::CSRSeasonalityData::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, double) const
        public: void sophis::inflation::CSRSeasonalityData::SetIndexCode(long)
        public: void sophis::inflation::CSRSeasonalityData::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
      public:
      };


    };

    class/*or struct*/ instrument
    {
    public:
      // Enumerations:
      enum eAskQuotationType : int {
      };
      enum eInstrumentType : int {
      };
      enum eOptimisationType : int {
      };
      enum eUnderlyingComputationType : int {
      };

      // Nested containers:
      class CSRForexSpot
      {
        // Static functions:
        public: static class sophis::instrument::CSRForexSpot * sophis::instrument::CSRForexSpot::new_CSRForexSpot(long, long)
      public:
      };

      class CSRInflationIndex
      {
        // Static functions:
        public: static class sophis::instrument::CSRInflationIndex const * sophis::instrument::CSRInflationIndex::GetCSRInflationIndex(long)
      public:
      };

      class CSRInstrument
      {
        // Functions:
        public: class sophis::instrument::CSRInstrument * sophis::instrument::CSRInstrument::Clone_API(void) const
        public: void sophis::instrument::CSRInstrument::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: double sophis::instrument::CSRInstrument::GetFixing(long, class sophis::static_data::CSRHistoricalData const &, long, bool) const
        public: short sophis::instrument::CSRInstrument::GetRicFid(void) const
        public: void sophis::instrument::CSRInstrument::MultiSave(class sophis::tools::CSREventVector &, enum NSREnums::eParameterModificationType)
        public: struct sophis::instrument::SSHistory * sophis::instrument::CSRInstrument::NEW_HistoryList(long, long, int *, class sophis::static_data::CSRHistoricalData const &) const
        public: void sophis::instrument::CSRInstrument::SetModified(bool)
        public: void sophis::instrument::CSRInstrument::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        public: void sophis::instrument::CSRInstrument::reserveCode(long)
        // Static functions:
        public: static class sophis::instrument::CSRInstrument * sophis::instrument::CSRInstrument::CreateFromDescription(class sophis::tools::dataModel::DataSet const &)
        public: static class sophis::instrument::CSRInstrument const * sophis::instrument::CSRInstrument::GetInstance(long)
#if 0 // All found virtual functions names:
        public: virtual struct sophis::DAL::InstrumentData const * sophis::instrument::CSRInstrument::GetDTitre(void) const
#endif

      public:
      };

      class CSRInstrumentChecker
      {
        // Static functions:
        public: static class sophis::instrument::CSRInstrumentChecker const * sophis::instrument::CSRInstrumentChecker::GetInstance(void)
      public:
      };

      class/*or struct*/ CSRInstrumentType
      {
        // Static functions:
        public: static int sophis::instrument::CSRInstrumentType::GetType(class sophis::instrument::CSRInstrument const &)
      public:
      };

      class CSRLeg
      {
      public:
      };

      class CSROption
      {
        // Functions:
        public: struct sophis::DAL::OptionInstrumentData ** sophis::instrument::CSROption::GetProduit(unsigned char) const
        public: void sophis::instrument::CSROption::SetModelByName(char const *)
        public: void sophis::instrument::CSROption::SetModelDialog(char const *, bool)
        public: bool const sophis::instrument::CSROption::SetOptimisationType(enum sophis::instrument::eOptimisationType)
        public: bool const sophis::instrument::CSROption::SetUnderlyingComputationType(enum sophis::instrument::eUnderlyingComputationType)
        public: void sophis::instrument::CSROption::SetValidation(bool)
        // Static functions:
        public: static class sophis::instrument::CSROption * sophis::instrument::CSROption::CreateInstance(char const *)
      public:
      };

      class/*or struct*/ CSRSwap
      {
#if 0 // All found virtual functions names:
        public: virtual class sophis::instrument::CSRLeg const * sophis::instrument::CSRSwap::GetLeg(int) const
#endif

      public:
      };

      struct SSHistory
      {
      public:
      };


      // Functions:
      void DescribeIdentifiers(class sophis::tools::dataModel::DataSet &, long, char const *, bool, char const *)
      long FindIdentifiers(class sophis::tools::dataModel::DataSet const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> *, bool, class std::list<struct std::pair<char const *, char const *>, class std::allocator<struct std::pair<char const *, char const *>>> *)
      long FindIdentifiers(class sophis::tools::dataModel::DataSet const &, bool, class std::list<struct std::pair<char const *, char const *>, class std::allocator<struct std::pair<char const *, char const *>>> *)
      class std::set<long, struct std::less<long>, class std::allocator<long>> FindMultipleIdentifiers(class sophis::tools::dataModel::DataSet const &, bool)
      bool UpdateABSBondCashFlow(class sophis::finance::CSRABSBond *, class sophis::tools::dataModel::DataSet const &)
      void UpdateIdentifiers(class sophis::tools::dataModel::DataSet const &, class CSRInstrument &)
      void UpdateInstrumentRatings(class CSRInstrument *, class sophis::tools::dataModel::DataSet const &)
      long UpdateUnderlyer(class sophis::tools::dataModel::Data const &)
    public:
    };

    namespace/*or class/struct?*/ license
    {
      // Enumerations:
      enum EFeature : int {
      };
      enum ELMStatus : int {
      };

      // Nested containers:
      class LMInterface
      {
        // Functions:
        public: enum sophis::license::ELMStatus sophis::license::LMInterface::CheckoutLicense(enum sophis::license::EFeature)
        // Static functions:
        public: static class sophis::license::LMInterface * sophis::license::LMInterface::GetInstance(void)
      public:
      };


    };

    namespace/*or class/struct?*/ listed_market
    {
      // Nested containers:
      class CSMarcheListe
      {
      public:
      };

      class CSRListedMarket
      {
        // Functions:
        protected: sophis::listed_market::CSRListedMarket::CSRListedMarket(long)
        public: class sophis::listed_market::CSRListedMarket * sophis::listed_market::CSRListedMarket::Clone(void) const
        public: void sophis::listed_market::CSRListedMarket::DescribeSeries(class sophis::tools::dataModel::DataSet &, class std::vector<struct sophis::listed_market::SeriesKey, class std::allocator<struct sophis::listed_market::SeriesKey>> const *) const
        public: void sophis::listed_market::CSRListedMarket::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::listed_market::CSRListedMarket::Save(int)
        // Static functions:
        public: static void sophis::listed_market::CSRListedMarket::DescribeIdentifiers(class sophis::tools::dataModel::DataSet &, long)
        public: static long sophis::listed_market::CSRListedMarket::FindIdentifiers(class sophis::tools::dataModel::DataSet const &, bool)
        public: static class sophis::listed_market::CSRListedMarket const * sophis::listed_market::CSRListedMarket::GetCSRListedMarket(long)
#if 0 // All found virtual functions names:
        public: virtual sophis::listed_market::CSRListedMarket::~CSRListedMarket(void)
        public: virtual char const * sophis::listed_market::CSRListedMarket::GetXMLRootName(void) const
        public: virtual void sophis::listed_market::CSRListedMarket::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &)
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual sophis::listed_market::CSRListedMarket::~CSRListedMarket(void); // 0
        public: virtual void sophis::listed_market::CSRListedMarket::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &); // 1
        public: virtual char const * sophis::listed_market::CSRListedMarket::GetXMLRootName(void) const; // 2
        // VFTable with 0 offset end

      public:
      };

      struct SeriesKey
      {
      public:
      };

      class/*or struct*/ TMO_definition
      {
        // Functions:
        public: sophis::listed_market::TMO_definition::TMO_definition(void)
        public: sophis::listed_market::TMO_definition::~TMO_definition(void)
        public: void sophis::listed_market::TMO_definition::Initialise(class sophis::listed_market::CSMarcheListe *)
      public:
      };


    };

    namespace/*or class/struct?*/ market_data
    {
      // Nested containers:
      class CSHistoColumn
      {
        // Variables:
        public: static class sophis::market_data::CSHistoColumn sophis::market_data::CSHistoColumn::global
      public:
      };

      class CSRCorporateActionMgr
      {
        // Functions:
        public: sophis::market_data::CSRCorporateActionMgr::CSRCorporateActionMgr(void)
        public: void sophis::market_data::CSRCorporateActionMgr::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRCorporateActionMgr::MultiSaveWithUpdates(class sophis::tools::CSREventVector &)
        public: void sophis::market_data::CSRCorporateActionMgr::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        public: void sophis::market_data::CSRCorporateActionMgr::UpdateFromSicovam(long)
#if 0 // All found virtual functions names:
        public: virtual sophis::market_data::CSRCorporateActionMgr::~CSRCorporateActionMgr(void)
#endif

        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual sophis::market_data::CSRCorporateActionMgr::~CSRCorporateActionMgr(void); // 0
        // VFTable with 0 offset end

      public:
      };

      class CSRCorrelation
      {
        // Functions:
        public: void sophis::market_data::CSRCorrelation::DescribeIdentifiers(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRCorrelation::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRCorrelation::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &)
        public: void sophis::market_data::CSRCorrelation::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, double)
        public: void sophis::market_data::CSRCorrelation::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        // Static functions:
        public: static class sophis::market_data::CSRCorrelation * sophis::market_data::CSRCorrelation::CreateInstance(long, long)
        public: static class sophis::market_data::CSRCorrelation * sophis::market_data::CSRCorrelation::CreateInstance(long, long, double)
        public: static class sophis::market_data::CSRCorrelation const * sophis::market_data::CSRCorrelation::GetCorrelation(long, long)
      public:
      };

      class CSRCreditRiskMgr
      {
        // Functions:
        public: sophis::market_data::CSRCreditRiskMgr::CSRCreditRiskMgr(struct sophis::DAL::SSCreditRiskMgrParameters const &)
        public: sophis::market_data::CSRCreditRiskMgr::~CSRCreditRiskMgr(void)
        public: class sophis::market_data::CSRCreditRiskMgr * sophis::market_data::CSRCreditRiskMgr::Clone(void) const
        public: void sophis::market_data::CSRCreditRiskMgr::GetDescription_API(class sophis::tools::dataModel::DataSet &)
        public: int sophis::market_data::CSRCreditRiskMgr::Load(void)
        public: int sophis::market_data::CSRCreditRiskMgr::LoadHisto(long, long)
        public: int sophis::market_data::CSRCreditRiskMgr::LoadModel(void)
        public: void sophis::market_data::CSRCreditRiskMgr::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &)
        public: void sophis::market_data::CSRCreditRiskMgr::MultiSaveHisto(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, long, long)
        public: void sophis::market_data::CSRCreditRiskMgr::MultiSaveHisto(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, double)
        public: void sophis::market_data::CSRCreditRiskMgr::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
      public:
      };

      class CSRDividend : public vector<struct sophis::market_data::SSDividend, class std::allocator<struct sophis::market_data::SSDividend>>
      {
        // Functions:
        public: sophis::market_data::CSRDividend::CSRDividend(struct TableauDefProd **, long, struct sophis::DAL::InstrumentData const *)
        public: sophis::market_data::CSRDividend::CSRDividend(void)
        public: void sophis::market_data::CSRDividend::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRDividend::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, long)
        public: void sophis::market_data::CSRDividend::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, long, double)
        public: void sophis::market_data::CSRDividend::SetInstrumentId(long)
        public: void sophis::market_data::CSRDividend::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        // Static functions:
        public: static class sophis::market_data::CSRDividend * sophis::market_data::CSRDividend::New_CSRDividend(long, long)
        public: static class sophis::market_data::CSRDividend * sophis::market_data::CSRDividend::New_CSRDividend(long, double)
#if 0 // All found virtual functions names:
        public: virtual sophis::market_data::CSRDividend::~CSRDividend(void)
        protected: virtual char const * sophis::market_data::CSRDividend::GetXMLRootName(void) const
        protected: virtual void sophis::market_data::CSRDividend::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &)
        public: virtual void sophis::market_data::CSRDividend::UpdateFromDescription_Light(class sophis::tools::dataModel::DataSet const &)
#endif

        // VFTable. Offset=0, Size=4, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual sophis::market_data::CSRDividend::~CSRDividend(void); // 0
        public: virtual void sophis::market_data::CSRDividend::UpdateFromDescription_Light(class sophis::tools::dataModel::DataSet const &); // 1
        protected: virtual char const * sophis::market_data::CSRDividend::GetXMLRootName(void) const; // 2
        protected: virtual void sophis::market_data::CSRDividend::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &); // 3
        // VFTable with 0 offset end

      public:
      };

      class CSRHistoric
      {
        // Functions:
        public: sophis::market_data::CSRHistoric::CSRHistoric(void)
        public: double * sophis::market_data::CSRHistoric::col_sup(void)
        // Static functions:
        public: static void * sophis::market_data::CSRHistoric::operator new(unsigned __int64)
      public:
      };

      class CSRMarketData
      {
        // Functions:
        public: long sophis::market_data::CSRMarketData::GetInflationFamilyCode(long) const
      public:
      };

      class CSRRepoMargin : public vector<struct sophis::DAL::SSRepoMargin, class std::allocator<struct sophis::DAL::SSRepoMargin>>
      {
        // Functions:
        public: sophis::market_data::CSRRepoMargin::CSRRepoMargin(struct TableauDefProd **, long)
        public: sophis::market_data::CSRRepoMargin::CSRRepoMargin(void)
        public: void sophis::market_data::CSRRepoMargin::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRRepoMargin::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &)
        public: void sophis::market_data::CSRRepoMargin::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, double)
        public: void sophis::market_data::CSRRepoMargin::SetInstrumentId(long)
        public: void sophis::market_data::CSRRepoMargin::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        // Static functions:
        public: static class sophis::market_data::CSRRepoMargin * sophis::market_data::CSRRepoMargin::New_CSRRepoMargin(long, long)
        public: static class sophis::market_data::CSRRepoMargin * sophis::market_data::CSRRepoMargin::New_CSRRepoMargin(long, double)
#if 0 // All found virtual functions names:
        public: virtual sophis::market_data::CSRRepoMargin::~CSRRepoMargin(void)
        protected: virtual char const * sophis::market_data::CSRRepoMargin::GetXMLRootName(void) const
        protected: virtual void sophis::market_data::CSRRepoMargin::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &)
#endif

        // VFTable. Offset=0, Size=3, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual sophis::market_data::CSRRepoMargin::~CSRRepoMargin(void); // 0
        protected: virtual char const * sophis::market_data::CSRRepoMargin::GetXMLRootName(void) const; // 1
        protected: virtual void sophis::market_data::CSRRepoMargin::UpdateFromDescription(class sophis::tools::dataModel::DataSet const &); // 2
        // VFTable with 0 offset end

      public:
      };

      class CSRVolatility
      {
        // Functions:
        public: class sophis::market_data::CSRVolatility * sophis::market_data::CSRVolatility::CloneWithNewModel(char const *) const
        public: void sophis::market_data::CSRVolatility::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRVolatility::GetModel(char *) const
        public: void sophis::market_data::CSRVolatility::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, long)
        public: void sophis::market_data::CSRVolatility::MultiSave(enum NSREnums::eParameterModificationType, class sophis::tools::CSREventVector &, long, double)
        public: void sophis::market_data::CSRVolatility::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        // Static functions:
        public: static class sophis::market_data::CSRVolatility const * sophis::market_data::CSRVolatility::GetCSRVolatility(long)
        public: static class sophis::market_data::CSRVolatility * sophis::market_data::CSRVolatility::new_CSRVolatility(long, long, long, class sophis::market_data::SSVolatilityReplicationCursor *)
        public: static class sophis::market_data::CSRVolatility * sophis::market_data::CSRVolatility::new_CSRVolatility(long, double, class sophis::market_data::SSVolatilityReplicationCursor *)
        public: static class sophis::market_data::CSRVolatility * sophis::market_data::CSRVolatility::new_CSRVolatility(long, class sophis::market_data::SSVolatilityReplicationCursor *)
      public:
      };

      class CSRYieldCurve
      {
        // Functions:
        public: class sophis::market_data::CSRYieldCurve * sophis::market_data::CSRYieldCurve::Clone_API(void) const
        public: void sophis::market_data::CSRYieldCurve::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: void sophis::market_data::CSRYieldCurve::MultiSave(class sophis::tools::CSREventVector &)
        public: void sophis::market_data::CSRYieldCurve::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
        // Static functions:
        public: static class sophis::market_data::CSRYieldCurve * sophis::market_data::CSRYieldCurve::CreateInstance(struct sophis::market_data::SSYieldCurve const &)
        public: static void sophis::market_data::CSRYieldCurve::DescribeIdentifiers(long, class sophis::tools::dataModel::DataSet &, bool)
        public: static long sophis::market_data::CSRYieldCurve::FindIdentifiers(class sophis::tools::dataModel::DataSet const &, bool)
        public: static class sophis::market_data::CSRYieldCurve const * sophis::market_data::CSRYieldCurve::GetCSRYieldCurve(long)
      public:
      };

      class ISRBaselineManager
      {
        // Static functions:
        public: static class sophis::market_data::ISRBaselineManager * sophis::market_data::ISRBaselineManager::getInstance(void)
      public:
      };

      template<typename T1      >
      class/*or struct*/ RefCountHandleDeleteEvent
      {
      public:
      };
#if 0 // Instances:
// <class sophis::market_data::dataModel::YieldCurveHistoric>
#if 0
      template<>
      class/*or struct*/ RefCountHandleDeleteEvent<class sophis::market_data::dataModel::YieldCurveHistoric> : public CSRAbstractEvent
      {
        // VFTable. Offset=0, Size=2, Start=0
        // Corresponding base: tools::tools::CSRAbstractEvent
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      struct SSDividend
      {
      public:
      };

      class SSVolatilityReplicationCursor
      {
      public:
      };

      struct SSYieldCurve
      {
        // Functions:
        public: sophis::market_data::SSYieldCurve::SSYieldCurve(void)
        public: void sophis::market_data::SSYieldCurve::UpdateFromDescription_API(class sophis::tools::dataModel::DataSet const &)
#if 0 // All found virtual functions names:
        public: virtual sophis::market_data::SSYieldCurve::~SSYieldCurve(void)
#endif

      public:
      };

      namespace/*or class/struct?*/ converters
      {
        // Nested containers:
        class/*or struct*/ CSRMisysToInternalXMLConverter
        {
          // Static functions:
          public: static class sophis::tools::dataModel::Data * sophis::market_data::converters::CSRMisysToInternalXMLConverter::Convert(class sophis::tools::dataModel::Data const &)
          public: static class sophis::tools::dataModel::Data * sophis::market_data::converters::CSRMisysToInternalXMLConverter::ConvertBack(class sophis::tools::dataModel::Data const &)
        public:
        };


      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class/*or struct*/ CurveHistoric
        {
          // Functions:
          public: void sophis::market_data::dataModel::CurveHistoric::getDescription(class sophis::tools::dataModel::DataSet &) const
          public: void sophis::market_data::dataModel::CurveHistoric::multiSave(class sophis::tools::CSREventVector &, enum NSREnums::eParameterModificationType)
          public: void sophis::market_data::dataModel::CurveHistoric::updateFromDescription(class sophis::tools::dataModel::DataSet const &)
#if 0 // All found virtual functions names:
          private: virtual void sophis::market_data::dataModel::CurveHistoric::Send(void)
#endif

        public:
        };

        class/*or struct*/ TermCurve
        {
          // Functions:
          public: sophis::market_data::dataModel::TermCurve::TermCurve(struct sophis::market_data::SSYieldCurve const &, class sophisTools::base::RefCountHandle<struct sophis::valuation::dataModel::InstrumentSet>)
          public: void sophis::market_data::dataModel::TermCurve::`vbase dtor'(void)
        public:
        };

        class YieldCurveHistoric
        {
          // Functions:
          public: sophis::market_data::dataModel::YieldCurveHistoric::YieldCurveHistoric(long)
          public: void sophis::market_data::dataModel::YieldCurveHistoric::`vbase dtor'(void)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::market_data::dataModel::YieldCurveHistoric> sophis::market_data::dataModel::YieldCurveHistoric::find(long)
#if 0 // All found virtual functions names:
          private: virtual class sophis::tools::dataModel::DataSet & sophis::market_data::dataModel::YieldCurveHistoric::DescribeIdentifiers(long, class sophis::tools::dataModel::DataSet &) const
          private: virtual class sophis::dataIntegrity::CSRDataIntegrityMarketData * sophis::market_data::dataModel::YieldCurveHistoric::GetDataIntegrityMarketData(class sophis::dataIntegrity::CSRDataIntegrityMarketDataFactory *) const
          private: virtual void sophis::market_data::dataModel::YieldCurveHistoric::getCSRCurve(long)
          private: virtual struct sophis::market_data::SSYieldCurve const * sophis::market_data::dataModel::YieldCurveHistoric::getSSYieldCurve(void) const
          private: virtual struct sophis::market_data::SSYieldCurve const * sophis::market_data::dataModel::YieldCurveHistoric::getSSYieldCurveForRead(long) const
          private: virtual void sophis::market_data::dataModel::YieldCurveHistoric::multiSaveData(long, struct sophis::market_data::SSYieldCurve *, double, class sophis::tools::CSREventVector &)
#endif

          // VFTable. Offset=0, Size=8, Start=0
          // Owner: SophisXmlTools.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          public: virtual void unknown_vf_0_1(void); // 1
          private: virtual class sophis::tools::dataModel::DataSet & sophis::market_data::dataModel::YieldCurveHistoric::DescribeIdentifiers(long, class sophis::tools::dataModel::DataSet &) const; // 2
          private: virtual struct sophis::market_data::SSYieldCurve const * sophis::market_data::dataModel::YieldCurveHistoric::getSSYieldCurveForRead(long) const; // 3
          private: virtual void sophis::market_data::dataModel::YieldCurveHistoric::getCSRCurve(long); // 4
          private: virtual struct sophis::market_data::SSYieldCurve const * sophis::market_data::dataModel::YieldCurveHistoric::getSSYieldCurve(void) const; // 5
          private: virtual void sophis::market_data::dataModel::YieldCurveHistoric::multiSaveData(long, struct sophis::market_data::SSYieldCurve *, double, class sophis::tools::CSREventVector &); // 6
          private: virtual class sophis::dataIntegrity::CSRDataIntegrityMarketData * sophis::market_data::dataModel::YieldCurveHistoric::GetDataIntegrityMarketData(class sophis::dataIntegrity::CSRDataIntegrityMarketDataFactory *) const; // 7
          // VFTable with 0 offset end

          // VFTable. Offset=64, Size=4, Start=0
          // Owner: SophisXmlTools.dll
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


      };

      class/*or struct*/ tag_col
      {
        // Functions:
        public: sophis::market_data::tag_col::tag_col(void)
      public:
      };


      // Variables:
      class CSRMarketData *gApplicationContext
    };

    namespace/*or class/struct?*/ misc
    {
      // Nested containers:
      class/*or struct*/ BasicLocalResource
      {
        // Functions:
        protected: void sophis::misc::BasicLocalResource::name(char const *)
#if 0 // All found virtual functions names:
        public: virtual void sophis::misc::BasicLocalResource::_add_ref(void)
        public: virtual void sophis::misc::BasicLocalResource::_remove_ref(void)
        public: virtual long sophis::misc::BasicLocalResource::getRef(void) const
        public: virtual char const * sophis::misc::BasicLocalResource::name(void) const
#endif

      public:
      };

      class/*or struct*/ CSRTranscodificationData
      {
        // Functions:
        public: sophis::misc::CSRTranscodificationData::CSRTranscodificationData(long)
        public: sophis::misc::CSRTranscodificationData::~CSRTranscodificationData(void)
        public: long sophis::misc::CSRTranscodificationData::GetInternalId(long, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>) const
      public:
      };

      class/*or struct*/ CSRTranscodificationSources
      {
        // Functions:
        public: sophis::misc::CSRTranscodificationSources::CSRTranscodificationSources(void)
        public: long sophis::misc::CSRTranscodificationSources::GetSourceId(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>) const
      public:
      };

      class/*or struct*/ CSRTranscodificationType
      {
        // Functions:
        public: sophis::misc::CSRTranscodificationType::CSRTranscodificationType(void)
        public: long sophis::misc::CSRTranscodificationType::GetTypeId(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>) const
      public:
      };

      class/*or struct*/ LocalResource : public RefCount
      {
      public:
      };

      class LocalSession
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophis::misc::LocalSession> sophis::misc::LocalSession::getLocalSession(void)
      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class DuplicateEntity : public FpmlEngineException
        {
          // Functions:
          protected: sophis::misc::dataModel::DuplicateEntity::DuplicateEntity(class sophis::misc::dataModel::DuplicateEntity const &)
          protected: sophis::misc::dataModel::DuplicateEntity::DuplicateEntity(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::misc::dataModel::DuplicateEntity::~DuplicateEntity(void)
#endif

        public:
        };

        class FpmlEngineException : public ExceptionBase
        {
          // Functions:
          protected: sophis::misc::dataModel::FpmlEngineException::FpmlEngineException(class sophis::misc::dataModel::FpmlEngineException const &)
#if 0 // All found virtual functions names:
          protected: virtual sophis::misc::dataModel::FpmlEngineException::~FpmlEngineException(void)
#endif

        public:
        };

        class FpmlEntityChecker
        {
        public:
          // Enumerations:
          enum FpmlEntityCheckerType : int {
          };

          // Functions:
          public: sophis::misc::dataModel::FpmlEntityChecker::FpmlEntityChecker(void)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityChecker> sophis::misc::dataModel::FpmlEntityChecker::createInstance(enum sophis::misc::dataModel::FpmlEntityChecker::FpmlEntityCheckerType)
#if 0 // All found virtual functions names:
          public: virtual sophis::misc::dataModel::FpmlEntityChecker::~FpmlEntityChecker(void)
#endif

        public:
        };

        class FpmlEntityHandler
        {
          // Functions:
          public: sophis::misc::dataModel::FpmlEntityHandler::FpmlEntityHandler(void)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::dataModel::FpmlEntityHandler::createInstance(char const *, char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::dataModel::FpmlEntityHandler::createInstance(char const *)
          public: static void sophis::misc::dataModel::FpmlEntityHandler::installPrototype(char const *, char const *, class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler>)
          public: static void sophis::misc::dataModel::FpmlEntityHandler::installPrototype(char const *, class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler>)
#if 0 // All found virtual functions names:
          public: virtual sophis::misc::dataModel::FpmlEntityHandler::~FpmlEntityHandler(void)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &, void *)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::create(class sophis::tools::dataModel::Data const &, void *)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::find(__int64)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::find(__int64, void *)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &, void *)
          public: virtual void sophis::misc::dataModel::FpmlEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &, void *)
#endif

        public:
        };

        class NoSuchEntity : public FpmlEngineException
        {
          // Functions:
          protected: sophis::misc::dataModel::NoSuchEntity::NoSuchEntity(class sophis::misc::dataModel::NoSuchEntity const &)
          protected: sophis::misc::dataModel::NoSuchEntity::NoSuchEntity(char const *)
          protected: sophis::misc::dataModel::NoSuchEntity::NoSuchEntity(char const *, long)
#if 0 // All found virtual functions names:
          public: virtual sophis::misc::dataModel::NoSuchEntity::~NoSuchEntity(void)
#endif

        public:
        };

        class/*or struct*/ UnknownReference : public DataModelException
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataModelException
          // Owner: SophisXmlTools.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class WrongCheckEntity : public FpmlEngineException
        {
          // Functions:
          protected: sophis::misc::dataModel::WrongCheckEntity::WrongCheckEntity(class sophis::misc::dataModel::WrongCheckEntity const &)
          protected: sophis::misc::dataModel::WrongCheckEntity::WrongCheckEntity(char const *, char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::misc::dataModel::WrongCheckEntity::~WrongCheckEntity(void)
#endif

        public:
        };


      };

      namespace/*or class/struct?*/ fpml
      {
        // Nested containers:
        class FpmlUtil
        {
          // Functions:
          public: class sophis::misc::fpml::FpmlUtil & sophis::misc::fpml::FpmlUtil::operator=(class sophis::misc::fpml::FpmlUtil &&)
          public: class sophis::misc::fpml::FpmlUtil & sophis::misc::fpml::FpmlUtil::operator=(class sophis::misc::fpml::FpmlUtil const &)
          // Static functions:
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildEntityReference(class sophis::tools::dataModel::DataSet &, __int64, char const *)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildFolioReference(class sophis::tools::dataModel::DataSet &, unsigned long)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildInstrumentReference(class sophis::tools::dataModel::DataSet &, long)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildOrderReference(class sophis::tools::dataModel::DataSet &, unsigned long)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildPartyReference(class sophis::tools::dataModel::DataSet &, unsigned long)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildSrReference(class sophis::tools::dataModel::DataSet &, char const *, char const *)
          public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::FpmlUtil::buildTradeReference(class sophis::tools::dataModel::DataSet &, __int64)
          public: static void sophis::misc::fpml::FpmlUtil::disablePortfolioColumnCache(void)
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::fpml::FpmlUtil::getFpmlEntityHandler(class sophis::tools::dataModel::Data const &)
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::fpml::FpmlUtil::getFpmlEntityHandler(char const *, char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::fpml::FpmlUtil::getFpmlEntityHandler(char const *)
          public: static class sophisTools::base::RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler> sophis::misc::fpml::FpmlUtil::getFpmlEntityHandlerForDerivativeMessage(void)
          public: static bool sophis::misc::fpml::FpmlUtil::getSnapshotDateAndId(class sophis::tools::dataModel::DataSet const &, long &, long &, bool &)
          public: static bool sophis::misc::fpml::FpmlUtil::getSnapshotDateTime(class sophis::tools::dataModel::DataSet const &, double &)
          // Variables:
          private: static char const *sophis::misc::fpml::FpmlUtil::__CLASS__
          public: static bool sophis::misc::fpml::FpmlUtil::fCreateOnlyIfValid
          public: static bool sophis::misc::fpml::FpmlUtil::fNotifyHistoric
          public: static bool sophis::misc::fpml::FpmlUtil::fValidateInstruments
        public:
        };

        namespace/*or class/struct?*/ alerts
        {
          // Nested containers:
          struct AlertStruct
          {
            // Functions:
            public: sophis::misc::fpml::alerts::AlertStruct::AlertStruct(struct sophis::misc::fpml::alerts::AlertStruct &&)
            public: sophis::misc::fpml::alerts::AlertStruct::AlertStruct(struct sophis::misc::fpml::alerts::AlertStruct const &)
            public: sophis::misc::fpml::alerts::AlertStruct::AlertStruct(void)
            public: sophis::misc::fpml::alerts::AlertStruct::~AlertStruct(void)
            public: struct sophis::misc::fpml::alerts::AlertStruct & sophis::misc::fpml::alerts::AlertStruct::operator=(struct sophis::misc::fpml::alerts::AlertStruct &&)
            public: struct sophis::misc::fpml::alerts::AlertStruct & sophis::misc::fpml::alerts::AlertStruct::operator=(struct sophis::misc::fpml::alerts::AlertStruct const &)
          public:
          };

          class AlertToolkit
          {
            // Functions:
            public: sophis::misc::fpml::alerts::AlertToolkit::AlertToolkit(class sophis::misc::fpml::alerts::AlertToolkit &&)
            public: sophis::misc::fpml::alerts::AlertToolkit::AlertToolkit(class sophis::misc::fpml::alerts::AlertToolkit const &)
            public: sophis::misc::fpml::alerts::AlertToolkit::AlertToolkit(void)
            public: class sophis::misc::fpml::alerts::AlertToolkit & sophis::misc::fpml::alerts::AlertToolkit::operator=(class sophis::misc::fpml::alerts::AlertToolkit &&)
            public: class sophis::misc::fpml::alerts::AlertToolkit & sophis::misc::fpml::alerts::AlertToolkit::operator=(class sophis::misc::fpml::alerts::AlertToolkit const &)
            // Static functions:
            public: static class sophis::tools::CSRPrototype<class sophis::misc::fpml::alerts::AlertToolkit, char const *, struct sophis::tools::less_char_star, class std::allocator<struct std::pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>>> & sophis::misc::fpml::alerts::AlertToolkit::GetPrototype(void)
            public: static class sophis::misc::fpml::alerts::AlertToolkit * sophis::misc::fpml::alerts::AlertToolkit::get_AlertToolkit(char const *)
            // Variables:
            private: static char const *sophis::misc::fpml::alerts::AlertToolkit::__CLASS__
            // VFTable. Offset=0, Size=2, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void) = 0; // 0
            public: virtual void unknown_vf_0_1(void) = 0; // 1
            // VFTable with 0 offset end

          public:
          };


        };

        namespace/*or class/struct?*/ entity
        {
          // Nested containers:
          class/*or struct*/ AttributesRemover
          {
            // VFTable. Offset=0, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            // VFTable with 0 offset end

            // VFTable. Offset=32, Size=4, Start=0
            // Owner: SophisXmlTools.dll
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

          class BOSetupEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::BOSetupEntityHandler::BOSetupEntityHandler(class sophis::misc::fpml::entity::BOSetupEntityHandler const &)
            public: sophis::misc::fpml::entity::BOSetupEntityHandler::BOSetupEntityHandler(void)
            public: void sophis::misc::fpml::entity::BOSetupEntityHandler::`vbase dtor'(void)
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::BOSetupEntityHandler::~BOSetupEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::BOSetupEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::BOSetupEntityHandler::~BOSetupEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void unknown_vf_0_7(void); // 7
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long); // 7
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long, void *); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void unknown_vf_0_9(void); // 9
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(class sophis::tools::dataModel::Data const &); // 9
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long); // 9
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long, void *); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(class sophis::tools::dataModel::Data const &); // 11
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long); // 11
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void unknown_vf_0_13(void); // 13
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void unknown_vf_0_15(void); // 15
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 15
            // public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::BOSetupEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::BOSetupEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::BOSetupEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=184, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::BOSetupEntityHandler::~BOSetupEntityHandler(void); // 0
            public: virtual void unknown_vf_184_1(void); // 1
            public: virtual void unknown_vf_184_2(void); // 2
            public: virtual void unknown_vf_184_3(void); // 3
#endif
            // VFTable with 184 offset end

          public:
          };

          struct BSwapSearch
          {
            // Functions:
            public: sophis::misc::fpml::entity::BSwapSearch::BSwapSearch(void)
            public: struct sophis::misc::fpml::entity::BSwapSearch & sophis::misc::fpml::entity::BSwapSearch::operator=(struct sophis::misc::fpml::entity::BSwapSearch &&)
            public: struct sophis::misc::fpml::entity::BSwapSearch & sophis::misc::fpml::entity::BSwapSearch::operator=(struct sophis::misc::fpml::entity::BSwapSearch const &)
          public:
          };

          class CashFlowsEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CashFlowsEntityHandler::CashFlowsEntityHandler(class sophis::misc::fpml::entity::CashFlowsEntityHandler const &)
            public: sophis::misc::fpml::entity::CashFlowsEntityHandler::CashFlowsEntityHandler(void)
            public: void sophis::misc::fpml::entity::CashFlowsEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::CashFlowsEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::CashFlowsEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CashFlowsEntityHandler::~CashFlowsEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CashFlowsEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CashFlowsEntityHandler::~CashFlowsEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CashFlowsEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::CashFlowsEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CashFlowsEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CashFlowsEntityHandler::~CashFlowsEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class CorporateActionEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CorporateActionEntityHandler::CorporateActionEntityHandler(class sophis::misc::fpml::entity::CorporateActionEntityHandler const &)
            public: sophis::misc::fpml::entity::CorporateActionEntityHandler::CorporateActionEntityHandler(void)
            public: void sophis::misc::fpml::entity::CorporateActionEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::CorporateActionEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::CorporateActionEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CorporateActionEntityHandler::~CorporateActionEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CorporateActionEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CorporateActionEntityHandler::~CorporateActionEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorporateActionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::CorporateActionEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CorporateActionEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CorporateActionEntityHandler::~CorporateActionEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class CorrelationEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CorrelationEntityHandler::CorrelationEntityHandler(class sophis::misc::fpml::entity::CorrelationEntityHandler const &)
            public: sophis::misc::fpml::entity::CorrelationEntityHandler::CorrelationEntityHandler(void)
            public: void sophis::misc::fpml::entity::CorrelationEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::CorrelationEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CorrelationEntityHandler::~CorrelationEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CorrelationEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CorrelationEntityHandler::~CorrelationEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CorrelationEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::CorrelationEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CorrelationEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=120, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CorrelationEntityHandler::~CorrelationEntityHandler(void); // 0
            public: virtual void unknown_vf_120_1(void); // 1
            public: virtual void unknown_vf_120_2(void); // 2
            public: virtual void unknown_vf_120_3(void); // 3
#endif
            // VFTable with 120 offset end

          public:
          };

          class CreditDataEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CreditDataEntityHandler::CreditDataEntityHandler(class sophis::misc::fpml::entity::CreditDataEntityHandler const &)
            public: sophis::misc::fpml::entity::CreditDataEntityHandler::CreditDataEntityHandler(void)
            public: void sophis::misc::fpml::entity::CreditDataEntityHandler::`vbase dtor'(void)
            public: void sophis::misc::fpml::entity::CreditDataEntityHandler::commit(class sophis::tools::CSREventVector &, long)
            public: long sophis::misc::fpml::entity::CreditDataEntityHandler::key(void)
            // Variables:
            public: static char const *sophis::misc::fpml::entity::CreditDataEntityHandler::NS
            private: static char const *sophis::misc::fpml::entity::CreditDataEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CreditDataEntityHandler::~CreditDataEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CreditDataEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CreditDataEntityHandler::~CreditDataEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void unknown_vf_0_15(void); // 15
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::create(class sophis::tools::dataModel::Data const &); // 15
            // public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void unknown_vf_0_17(void); // 17
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            // public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::CreditDataEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CreditDataEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=120, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CreditDataEntityHandler::~CreditDataEntityHandler(void); // 0
            public: virtual void unknown_vf_120_1(void); // 1
            public: virtual void unknown_vf_120_2(void); // 2
            public: virtual void unknown_vf_120_3(void); // 3
#endif
            // VFTable with 120 offset end

          public:
          };

          class CreditDataHistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::CreditDataHistoricEntityHandler(class sophis::misc::fpml::entity::CreditDataHistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::CreditDataHistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::~CreditDataHistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::~CreditDataHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CreditDataHistoricEntityHandler::~CreditDataHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class CurrencyEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::CurrencyEntityHandler::CurrencyEntityHandler(class sophis::misc::fpml::entity::CurrencyEntityHandler const &)
            public: sophis::misc::fpml::entity::CurrencyEntityHandler::CurrencyEntityHandler(void)
            public: void sophis::misc::fpml::entity::CurrencyEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::CurrencyEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::CurrencyEntityHandler::~CurrencyEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CurrencyEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::CurrencyEntityHandler::~CurrencyEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void unknown_vf_0_5(void); // 5
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::endSession(void); // 5
            // public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::CurrencyEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void unknown_vf_0_23(void); // 23
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::endSession(void); // 23
            // public: virtual void sophis::misc::fpml::entity::CurrencyEntityHandler::rollback(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::CurrencyEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::CurrencyEntityHandler::~CurrencyEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class DailyDataEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::DailyDataEntityHandler::DailyDataEntityHandler(class sophis::misc::fpml::entity::DailyDataEntityHandler const &)
            public: sophis::misc::fpml::entity::DailyDataEntityHandler::DailyDataEntityHandler(void)
            public: void sophis::misc::fpml::entity::DailyDataEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::DailyDataEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::DailyDataEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::DailyDataEntityHandler::~DailyDataEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DailyDataEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::DailyDataEntityHandler::~DailyDataEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void unknown_vf_0_9(void); // 9
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long); // 9
            // public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long, void *); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long); // 11
            // public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DailyDataEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::DailyDataEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DailyDataEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::DailyDataEntityHandler::~DailyDataEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class/*or struct*/ DataKeeperDataSet : public DataSet
          {
            // VFTable. Offset=0, Size=22, Start=22
            // Corresponding base: dataModel::dataModel::dataModel::DataSet
            // Owner: SophisXmlTools.dll
            // VFTable with 0 offset end

          public:
          };

          template<typename T1          >
          class/*or struct*/ DeleteEvent
          {
          public:
          };
#if 0 // Instances:
// <class sophis::inflation::CSRSeasonalityData>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::inflation::CSRSeasonalityData> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::instrument::CSRInstrument>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::instrument::CSRInstrument> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRCorporateActionMgr>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRCorporateActionMgr> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRCorrelation>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRCorrelation> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRCreditRiskMgr>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRCreditRiskMgr> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRDividend>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRDividend> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRRepoMargin>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRRepoMargin> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRVolatility>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRVolatility> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
// <class sophis::market_data::CSRYieldCurve>
#if 0
          template<>
          class/*or struct*/ DeleteEvent<class sophis::market_data::CSRYieldCurve> : public CSRAbstractEvent
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Corresponding base: tools::tools::CSRAbstractEvent
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };
#endif
#endif


          class DividendEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::DividendEntityHandler::DividendEntityHandler(class sophis::misc::fpml::entity::DividendEntityHandler const &)
            public: sophis::misc::fpml::entity::DividendEntityHandler::DividendEntityHandler(long)
            public: sophis::misc::fpml::entity::DividendEntityHandler::DividendEntityHandler(void)
            public: void sophis::misc::fpml::entity::DividendEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::DividendEntityHandler::key(void)
            // Variables:
            public: static char const *sophis::misc::fpml::entity::DividendEntityHandler::NS
            private: static char const *sophis::misc::fpml::entity::DividendEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::DividendEntityHandler::~DividendEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &, long)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DividendEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::commit(class sophis::tools::CSREventVector &, long)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::create(class sophis::tools::dataModel::Data const &, long)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &, long)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=28, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::DividendEntityHandler::~DividendEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::endSession(void); // 23
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &, long); // 24
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::create(class sophis::tools::dataModel::Data const &, long); // 25
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &, long); // 26
            public: virtual void sophis::misc::fpml::entity::DividendEntityHandler::commit(class sophis::tools::CSREventVector &, long); // 27
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DividendEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=120, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::DividendEntityHandler::~DividendEntityHandler(void); // 0
            public: virtual void unknown_vf_120_1(void); // 1
            public: virtual void unknown_vf_120_2(void); // 2
            public: virtual void unknown_vf_120_3(void); // 3
#endif
            // VFTable with 120 offset end

          public:
          };

          class DividendHistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::DividendHistoricEntityHandler::DividendHistoricEntityHandler(class sophis::misc::fpml::entity::DividendHistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::DividendHistoricEntityHandler::DividendHistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::DividendHistoricEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::DividendHistoricEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::DividendHistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::DividendHistoricEntityHandler::~DividendHistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DividendHistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::DividendHistoricEntityHandler::~DividendHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::DividendHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::DividendHistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::DividendHistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::DividendHistoricEntityHandler::~DividendHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class/*or struct*/ DuplicateCashFlows : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateCorrelation : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateFactorModel : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateInstrument : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicatePosition : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateRatings : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateSectors : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateTimeDensity : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateVolatility : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ DuplicateYieldCurve : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class FactorModelsEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::FactorModelsEntityHandler::FactorModelsEntityHandler(class sophis::misc::fpml::entity::FactorModelsEntityHandler const &)
            public: sophis::misc::fpml::entity::FactorModelsEntityHandler::FactorModelsEntityHandler(void)
            public: void sophis::misc::fpml::entity::FactorModelsEntityHandler::`vbase dtor'(void)
            private: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::misc::fpml::entity::FactorModelsEntityHandler::xmlToString(class sophis::tools::dataModel::Data const &)
            // Static functions:
            public: static void sophis::misc::fpml::entity::FactorModelsEntityHandler::init(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::FactorModelsEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::FactorModelsEntityHandler::~FactorModelsEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::FactorModelsEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::FactorModelsEntityHandler::~FactorModelsEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::FactorModelsEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::FactorModelsEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::FactorModelsEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::FactorModelsEntityHandler::~FactorModelsEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class/*or struct*/ FactorModelsWrapper
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class HistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::HistoricEntityHandler::HistoricEntityHandler(class sophis::misc::fpml::entity::HistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::HistoricEntityHandler::HistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::HistoricEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::HistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::HistoricEntityHandler::~HistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::HistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::HistoricEntityHandler::~HistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::HistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::HistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::HistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::HistoricEntityHandler::~HistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class InflationSeasonalityEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::InflationSeasonalityEntityHandler(class sophis::misc::fpml::entity::InflationSeasonalityEntityHandler const &)
            public: sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::InflationSeasonalityEntityHandler(void)
            public: void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::~InflationSeasonalityEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::~InflationSeasonalityEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void unknown_vf_0_19(void); // 19
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            // public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::endSession(void); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual void unknown_vf_0_21(void); // 21
            // Candidates:
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual void unknown_vf_0_22(void); // 22
            // Candidates:
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 22
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void unknown_vf_0_23(void); // 23
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 23
            // public: virtual void sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::InflationSeasonalityEntityHandler::~InflationSeasonalityEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class InstrumentEntityChecker
          {
            // Functions:
            public: sophis::misc::fpml::entity::InstrumentEntityChecker::InstrumentEntityChecker(class sophis::misc::fpml::entity::InstrumentEntityChecker const &)
            public: sophis::misc::fpml::entity::InstrumentEntityChecker::InstrumentEntityChecker(void)
            public: void sophis::misc::fpml::entity::InstrumentEntityChecker::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::InstrumentEntityChecker::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::InstrumentEntityChecker::~InstrumentEntityChecker(void)
            public: virtual bool sophis::misc::fpml::entity::InstrumentEntityChecker::check(class sophis::tools::dataModel::DataSet const &, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const
            public: virtual class sophis::misc::dataModel::FpmlEntityChecker * sophis::misc::fpml::entity::InstrumentEntityChecker::clone(void) const
            public: virtual char const * sophis::misc::fpml::entity::InstrumentEntityChecker::name(void) const
#endif

            // VFTable. Offset=0, Size=3, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual class sophis::misc::dataModel::FpmlEntityChecker * sophis::misc::fpml::entity::InstrumentEntityChecker::clone(void) const; // 0
            public: virtual bool sophis::misc::fpml::entity::InstrumentEntityChecker::check(class sophis::tools::dataModel::DataSet const &, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const; // 1
            public: virtual char const * sophis::misc::fpml::entity::InstrumentEntityChecker::name(void) const; // 2
            // VFTable with 0 offset end

            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::InstrumentEntityChecker::~InstrumentEntityChecker(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class InstrumentEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::InstrumentEntityHandler::InstrumentEntityHandler(class sophis::misc::fpml::entity::InstrumentEntityHandler const &)
            public: sophis::misc::fpml::entity::InstrumentEntityHandler::InstrumentEntityHandler(void)
            public: void sophis::misc::fpml::entity::InstrumentEntityHandler::`vbase dtor'(void)
            public: void sophis::misc::fpml::entity::InstrumentEntityHandler::cloneAndUpdate(long, class sophis::tools::dataModel::Data const &)
            public: long sophis::misc::fpml::entity::InstrumentEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::InstrumentEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::InstrumentEntityHandler::~InstrumentEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::InstrumentEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::InstrumentEntityHandler::~InstrumentEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::InstrumentEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::InstrumentEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=240, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::InstrumentEntityHandler::~InstrumentEntityHandler(void); // 0
            public: virtual void unknown_vf_240_1(void); // 1
            public: virtual void unknown_vf_240_2(void); // 2
            public: virtual void unknown_vf_240_3(void); // 3
#endif
            // VFTable with 240 offset end

          public:
          };

          class InstrumentUtil
          {
          public:
            // Nested containers:
            struct CDSData
            {
            public:
            };


            // Functions:
            public: class sophis::misc::fpml::entity::InstrumentUtil & sophis::misc::fpml::entity::InstrumentUtil::operator=(class sophis::misc::fpml::entity::InstrumentUtil &&)
            public: class sophis::misc::fpml::entity::InstrumentUtil & sophis::misc::fpml::entity::InstrumentUtil::operator=(class sophis::misc::fpml::entity::InstrumentUtil const &)
            // Static functions:
            public: static class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::InstrumentUtil::addDescriptionOfCb(class sophis::tools::dataModel::DataSet &, class sophis::instrument::CSROption const *)
            private: static bool sophis::misc::fpml::entity::InstrumentUtil::cdsInstrumentMatch(long, struct sophis::misc::fpml::entity::InstrumentUtil::CDSData, bool)
            public: static bool sophis::misc::fpml::entity::InstrumentUtil::checkCb(class sophis::instrument::CSROption const *, class sophis::tools::dataModel::DataSet const &, class std::basic_ostream<char, struct std::char_traits<char>> &)
            public: static class sophisTools::base::RefCountHandle<class sophis::misc::fpml::entity::InstrumentEntityHandler> sophis::misc::fpml::entity::InstrumentUtil::createInstrument(char const *, char const *, long, long &)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::createInstrument(class sophis::tools::dataModel::DataSet const &)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::createNonExistingCB(class sophis::tools::dataModel::DataSet const &)
            public: static long sophis::misc::fpml::entity::InstrumentUtil::findCB(class sophis::tools::dataModel::DataSet const &)
            private: static bool sophis::misc::fpml::entity::InstrumentUtil::getCDSData(class sophis::tools::dataModel::Data const &, struct sophis::misc::fpml::entity::InstrumentUtil::CDSData &)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::getInstrumentAPIForWrite(long)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::updateExistingCb(long, class sophis::tools::dataModel::DataSet const &)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::updateInstrument(class sophis::instrument::CSRInstrument *, class sophis::tools::dataModel::DataSet const &)
            public: static void sophis::misc::fpml::entity::InstrumentUtil::updateLegacyOption(class sophis::instrument::CSRInstrument *, class sophis::tools::dataModel::DataSet const &)
            public: static class sophis::instrument::CSRInstrument * sophis::misc::fpml::entity::InstrumentUtil::updateModel(class sophis::instrument::CSRInstrument *, char const *)
            public: static class sophisTools::base::RefCountHandle<class sophis::misc::fpml::entity::InstrumentEntityHandler> sophis::misc::fpml::entity::InstrumentUtil::updateOrCreateInstrument(char const *, char const *, bool, long, long &)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::InstrumentUtil::__CLASS__
          public:
          };

          class ListedMarketEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::ListedMarketEntityHandler::ListedMarketEntityHandler(class sophis::misc::fpml::entity::ListedMarketEntityHandler const &)
            public: sophis::misc::fpml::entity::ListedMarketEntityHandler::ListedMarketEntityHandler(void)
            public: void sophis::misc::fpml::entity::ListedMarketEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::ListedMarketEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::ListedMarketEntityHandler::~ListedMarketEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::ListedMarketEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::ListedMarketEntityHandler::~ListedMarketEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ListedMarketEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::ListedMarketEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::ListedMarketEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=128, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::ListedMarketEntityHandler::~ListedMarketEntityHandler(void); // 0
            public: virtual void unknown_vf_128_1(void); // 1
            public: virtual void unknown_vf_128_2(void); // 2
            public: virtual void unknown_vf_128_3(void); // 3
#endif
            // VFTable with 128 offset end

          public:
          };

          class MisysCorporateActionEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::MisysCorporateActionEntityHandler(class sophis::misc::fpml::entity::MisysCorporateActionEntityHandler const &)
            public: sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::MisysCorporateActionEntityHandler(void)
            public: void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::~MisysCorporateActionEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::~MisysCorporateActionEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::MisysCorporateActionEntityHandler::~MisysCorporateActionEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class/*or struct*/ NoCashFlows : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchCorporateAction : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchCorrelation : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchCreditData : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchDailyData : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchDividend : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchFactorModel : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchInflationSeasonality : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchInstrument : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchInstrumentForRic : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchListedMarket : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchPosition : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchRepoMargin : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchTimeDensity : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchVolatility : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchYieldCurve : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class PlaceEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::PlaceEntityHandler::PlaceEntityHandler(class sophis::misc::fpml::entity::PlaceEntityHandler const &)
            public: sophis::misc::fpml::entity::PlaceEntityHandler::PlaceEntityHandler(void)
            public: void sophis::misc::fpml::entity::PlaceEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::PlaceEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::PlaceEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::PlaceEntityHandler::~PlaceEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::PlaceEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64, void *)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::PlaceEntityHandler::~PlaceEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void unknown_vf_0_7(void); // 7
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long, void *); // 7
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64); // 7
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64, void *); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(class sophis::tools::dataModel::Data const &); // 8
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long, void *); // 8
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64); // 8
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64, void *); // 8
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(class sophis::tools::dataModel::Data const &); // 10
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long, void *); // 10
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64); // 10
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64, void *); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(class sophis::tools::dataModel::Data const &); // 11
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(long, void *); // 11
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64); // 11
            // public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::find(__int64, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PlaceEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::PlaceEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::PlaceEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::PlaceEntityHandler::~PlaceEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class PositionEntityChecker
          {
            // Functions:
            public: sophis::misc::fpml::entity::PositionEntityChecker::PositionEntityChecker(class sophis::misc::fpml::entity::PositionEntityChecker const &)
            public: sophis::misc::fpml::entity::PositionEntityChecker::PositionEntityChecker(void)
            public: void sophis::misc::fpml::entity::PositionEntityChecker::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::PositionEntityChecker::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::PositionEntityChecker::~PositionEntityChecker(void)
            public: virtual bool sophis::misc::fpml::entity::PositionEntityChecker::check(class sophis::tools::dataModel::DataSet const &, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const
            public: virtual class sophis::misc::dataModel::FpmlEntityChecker * sophis::misc::fpml::entity::PositionEntityChecker::clone(void) const
            public: virtual char const * sophis::misc::fpml::entity::PositionEntityChecker::name(void) const
#endif

            // VFTable. Offset=0, Size=3, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual class sophis::misc::dataModel::FpmlEntityChecker * sophis::misc::fpml::entity::PositionEntityChecker::clone(void) const; // 0
            public: virtual bool sophis::misc::fpml::entity::PositionEntityChecker::check(class sophis::tools::dataModel::DataSet const &, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &) const; // 1
            public: virtual char const * sophis::misc::fpml::entity::PositionEntityChecker::name(void) const; // 2
            // VFTable with 0 offset end

            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::PositionEntityChecker::~PositionEntityChecker(void); // 0
            public: virtual void unknown_vf_40_1(void); // 1
            public: virtual void unknown_vf_40_2(void); // 2
            public: virtual void unknown_vf_40_3(void); // 3
#endif
            // VFTable with 40 offset end

          public:
          };

          class PositionEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::PositionEntityHandler::PositionEntityHandler(class sophis::misc::fpml::entity::PositionEntityHandler const &)
            public: sophis::misc::fpml::entity::PositionEntityHandler::PositionEntityHandler(void)
            public: void sophis::misc::fpml::entity::PositionEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::PositionEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::PositionEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::PositionEntityHandler::~PositionEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::PositionEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::PositionEntityHandler::~PositionEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::PositionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::PositionEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::PositionEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=128, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::PositionEntityHandler::~PositionEntityHandler(void); // 0
            public: virtual void unknown_vf_128_1(void); // 1
            public: virtual void unknown_vf_128_2(void); // 2
            public: virtual void unknown_vf_128_3(void); // 3
#endif
            // VFTable with 128 offset end

          public:
          };

          class/*or struct*/ PositionRefreshUtil
          {
          public:
            // Enumerations:
            enum eImportType : int {
            };

            // Static functions:
            public: static class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> sophis::misc::fpml::entity::PositionRefreshUtil::GetTags(class sophis::tools::dataModel::DataSet const &)
            public: static void sophis::misc::fpml::entity::PositionRefreshUtil::actionPostImport(class sophis::tools::CSREventVector &)
            public: static void sophis::misc::fpml::entity::PositionRefreshUtil::actionPreImport(class sophis::tools::CSREventVector &)
            public: static void sophis::misc::fpml::entity::PositionRefreshUtil::checkSessionInformations(class sophis::tools::dataModel::Data const &)
            public: static class sophis::portfolio::CSRPositionRefresh * sophis::misc::fpml::entity::PositionRefreshUtil::createPosition(class sophis::tools::dataModel::DataSet const &)
            public: static class sophis::portfolio::CSRPositionRefresh * sophis::misc::fpml::entity::PositionRefreshUtil::createPositionObject(class sophis::tools::dataModel::DataSet const &)
            public: static class sophis::portfolio::CSRPositionRefresh const * sophis::misc::fpml::entity::PositionRefreshUtil::findPositionRefresh(class sophis::tools::dataModel::Data const &)
            public: static enum sophis::misc::fpml::entity::PositionRefreshUtil::eImportType sophis::misc::fpml::entity::PositionRefreshUtil::getImportType(void)
            public: static enum sophis::portfolio::eSessionStatus sophis::misc::fpml::entity::PositionRefreshUtil::getSessionStatus(void)
            public: static long sophis::misc::fpml::entity::PositionRefreshUtil::getValuationDate(void)
            public: static void sophis::misc::fpml::entity::PositionRefreshUtil::reinit(void)
            public: static void sophis::misc::fpml::entity::PositionRefreshUtil::setRefreshPosition(class sophis::portfolio::CSRPositionRefresh *)
            public: static class sophis::portfolio::CSRPositionRefresh * sophis::misc::fpml::entity::PositionRefreshUtil::updatePosition(class sophis::portfolio::CSRPositionRefresh const *, class sophis::tools::dataModel::DataSet const &)
            // Variables:
            public: static bool sophis::misc::fpml::entity::PositionRefreshUtil::sendEventLocal
          public:
          };

          class ProvisionEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::ProvisionEntityHandler::ProvisionEntityHandler(class sophis::misc::fpml::entity::ProvisionEntityHandler const &)
            public: sophis::misc::fpml::entity::ProvisionEntityHandler::ProvisionEntityHandler(void)
            public: void sophis::misc::fpml::entity::ProvisionEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *const sophis::misc::fpml::entity::ProvisionEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::ProvisionEntityHandler::~ProvisionEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::ProvisionEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::ProvisionEntityHandler::~ProvisionEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void unknown_vf_0_5(void); // 5
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::endSession(void); // 5
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void unknown_vf_0_7(void); // 7
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long); // 7
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long, void *); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void unknown_vf_0_9(void); // 9
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 9
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long); // 9
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long, void *); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(class sophis::tools::dataModel::Data const &); // 11
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long); // 11
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::ProvisionEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void unknown_vf_0_23(void); // 23
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::endSession(void); // 23
            // public: virtual void sophis::misc::fpml::entity::ProvisionEntityHandler::rollback(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::ProvisionEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=152, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::ProvisionEntityHandler::~ProvisionEntityHandler(void); // 0
            public: virtual void unknown_vf_152_1(void); // 1
            public: virtual void unknown_vf_152_2(void); // 2
            public: virtual void unknown_vf_152_3(void); // 3
#endif
            // VFTable with 152 offset end

          public:
          };

          class RatingEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::RatingEntityHandler::RatingEntityHandler(class sophis::misc::fpml::entity::RatingEntityHandler const &)
            public: sophis::misc::fpml::entity::RatingEntityHandler::RatingEntityHandler(void)
            public: void sophis::misc::fpml::entity::RatingEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::RatingEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::RatingEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::RatingEntityHandler::~RatingEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RatingEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::RatingEntityHandler::~RatingEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RatingEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::RatingEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RatingEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::RatingEntityHandler::~RatingEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class RepoMarginEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::RepoMarginEntityHandler::RepoMarginEntityHandler(class sophis::misc::fpml::entity::RepoMarginEntityHandler const &)
            public: sophis::misc::fpml::entity::RepoMarginEntityHandler::RepoMarginEntityHandler(void)
            public: void sophis::misc::fpml::entity::RepoMarginEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::RepoMarginEntityHandler::key(void)
            // Variables:
            public: static char const *sophis::misc::fpml::entity::RepoMarginEntityHandler::NS
            private: static char const *sophis::misc::fpml::entity::RepoMarginEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::RepoMarginEntityHandler::~RepoMarginEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &, long)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RepoMarginEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::commit(class sophis::tools::CSREventVector &, long)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::create(class sophis::tools::dataModel::Data const &, long)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &, long)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=28, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::RepoMarginEntityHandler::~RepoMarginEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::endSession(void); // 23
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &, long); // 24
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::create(class sophis::tools::dataModel::Data const &, long); // 25
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &, long); // 26
            public: virtual void sophis::misc::fpml::entity::RepoMarginEntityHandler::commit(class sophis::tools::CSREventVector &, long); // 27
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RepoMarginEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::RepoMarginEntityHandler::~RepoMarginEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class RepoMarginHistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::RepoMarginHistoricEntityHandler(class sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::RepoMarginHistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::~RepoMarginHistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::~RepoMarginHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::RepoMarginHistoricEntityHandler::~RepoMarginHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class RicEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::RicEntityHandler::RicEntityHandler(class sophis::misc::fpml::entity::RicEntityHandler const &)
            public: sophis::misc::fpml::entity::RicEntityHandler::RicEntityHandler(void)
            public: void sophis::misc::fpml::entity::RicEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::RicEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::RicEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::RicEntityHandler::~RicEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RicEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::RicEntityHandler::~RicEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::RicEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::RicEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::RicEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::RicEntityHandler::~RicEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class SectorEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::SectorEntityHandler::SectorEntityHandler(class sophis::misc::fpml::entity::SectorEntityHandler const &)
            public: sophis::misc::fpml::entity::SectorEntityHandler::SectorEntityHandler(void)
            public: void sophis::misc::fpml::entity::SectorEntityHandler::`vbase dtor'(void)
            private: class sophis::instrument::CSRInstrument const * sophis::misc::fpml::entity::SectorEntityHandler::getInstrumentIfExists(void)
            public: long sophis::misc::fpml::entity::SectorEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::SectorEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::SectorEntityHandler::~SectorEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::SectorEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::SectorEntityHandler::~SectorEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::SectorEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::SectorEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::SectorEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::SectorEntityHandler::~SectorEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class TaxlotEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::TaxlotEntityHandler::TaxlotEntityHandler(class sophis::misc::fpml::entity::TaxlotEntityHandler const &)
            public: sophis::misc::fpml::entity::TaxlotEntityHandler::TaxlotEntityHandler(void)
            public: void sophis::misc::fpml::entity::TaxlotEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::TaxlotEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::TaxlotEntityHandler::~TaxlotEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::TaxlotEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::TaxlotEntityHandler::~TaxlotEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void unknown_vf_0_7(void); // 7
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long); // 7
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long, void *); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void unknown_vf_0_9(void); // 9
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(class sophis::tools::dataModel::Data const &); // 9
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long); // 9
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long, void *); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(class sophis::tools::dataModel::Data const &); // 11
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long); // 11
            // public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TaxlotEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::TaxlotEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::TaxlotEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=1432, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::TaxlotEntityHandler::~TaxlotEntityHandler(void); // 0
            public: virtual void unknown_vf_1432_1(void); // 1
            public: virtual void unknown_vf_1432_2(void); // 2
            public: virtual void unknown_vf_1432_3(void); // 3
#endif
            // VFTable with 1432 offset end

          public:
          };

          class TimeDensityEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::TimeDensityEntityHandler::TimeDensityEntityHandler(class sophis::misc::fpml::entity::TimeDensityEntityHandler const &)
            public: sophis::misc::fpml::entity::TimeDensityEntityHandler::TimeDensityEntityHandler(void)
            public: void sophis::misc::fpml::entity::TimeDensityEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::TimeDensityEntityHandler::key(void)
            // Variables:
            public: static char const *sophis::misc::fpml::entity::TimeDensityEntityHandler::NS
            private: static char const *sophis::misc::fpml::entity::TimeDensityEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::TimeDensityEntityHandler::~TimeDensityEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::TimeDensityEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::TimeDensityEntityHandler::~TimeDensityEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void unknown_vf_0_9(void); // 9
            // Candidates:
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 9
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long); // 9
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long, void *); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void unknown_vf_0_11(void); // 11
            // Candidates:
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 11
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long); // 11
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void unknown_vf_0_19(void); // 19
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::endSession(void); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual void unknown_vf_0_22(void); // 22
            // Candidates:
            // public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::TimeDensityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long); // 22
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::find(long, void *); // 22
            public: virtual void unknown_vf_0_23(void); // 23
            // Candidates:
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 23
            // public: virtual void sophis::misc::fpml::entity::TimeDensityEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::TimeDensityEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=144, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::TimeDensityEntityHandler::~TimeDensityEntityHandler(void); // 0
            public: virtual void unknown_vf_144_1(void); // 1
            public: virtual void unknown_vf_144_2(void); // 2
            public: virtual void unknown_vf_144_3(void); // 3
#endif
            // VFTable with 144 offset end

          public:
          };

          class VolatilityEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::VolatilityEntityHandler::VolatilityEntityHandler(class sophis::misc::fpml::entity::VolatilityEntityHandler const &)
            public: sophis::misc::fpml::entity::VolatilityEntityHandler::VolatilityEntityHandler(void)
            public: void sophis::misc::fpml::entity::VolatilityEntityHandler::`vbase dtor'(void)
            public: void sophis::misc::fpml::entity::VolatilityEntityHandler::commit(class sophis::tools::CSREventVector &, long)
            public: long sophis::misc::fpml::entity::VolatilityEntityHandler::key(void)
            // Variables:
            public: static char const *sophis::misc::fpml::entity::VolatilityEntityHandler::NS
            private: static char const *sophis::misc::fpml::entity::VolatilityEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::VolatilityEntityHandler::~VolatilityEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::VolatilityEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::VolatilityEntityHandler::~VolatilityEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::VolatilityEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::VolatilityEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=120, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::VolatilityEntityHandler::~VolatilityEntityHandler(void); // 0
            public: virtual void unknown_vf_120_1(void); // 1
            public: virtual void unknown_vf_120_2(void); // 2
            public: virtual void unknown_vf_120_3(void); // 3
#endif
            // VFTable with 120 offset end

          public:
          };

          class VolatilityHistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::VolatilityHistoricEntityHandler(class sophis::misc::fpml::entity::VolatilityHistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::VolatilityHistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::~VolatilityHistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::~VolatilityHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=112, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::VolatilityHistoricEntityHandler::~VolatilityHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_112_1(void); // 1
            public: virtual void unknown_vf_112_2(void); // 2
            public: virtual void unknown_vf_112_3(void); // 3
#endif
            // VFTable with 112 offset end

          public:
          };

          class/*or struct*/ WrongCheckCashFlows : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckCorporateAction : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckCorrelation : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckCreditData : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckDividend : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckInstrument : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckRating : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckRepoMargin : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckSector : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckVolatility : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckYieldCurve : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ WrongCheckYieldCurveHistoric : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class YieldCurveEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::YieldCurveEntityHandler::YieldCurveEntityHandler(class sophis::misc::fpml::entity::YieldCurveEntityHandler const &)
            public: sophis::misc::fpml::entity::YieldCurveEntityHandler::YieldCurveEntityHandler(void)
            public: void sophis::misc::fpml::entity::YieldCurveEntityHandler::`vbase dtor'(void)
            public: long sophis::misc::fpml::entity::YieldCurveEntityHandler::key(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::YieldCurveEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::YieldCurveEntityHandler::~YieldCurveEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::YieldCurveEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::YieldCurveEntityHandler::~YieldCurveEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::YieldCurveEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::YieldCurveEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::YieldCurveEntityHandler::~YieldCurveEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };

          class YieldCurveHistoricEntityHandler
          {
            // Functions:
            public: sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::YieldCurveHistoricEntityHandler(class sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler const &)
            public: sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::YieldCurveHistoricEntityHandler(void)
            public: void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::`vbase dtor'(void)
            // Variables:
            private: static char const *sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::__CLASS__
#if 0 // All found virtual functions names:
            public: virtual sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::~YieldCurveHistoricEntityHandler(void)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &)
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::clone(void) const
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::commit(class sophis::tools::CSREventVector &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::endSession(void)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(long)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(long, void *)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::rollback(void)
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &)
#endif

            // VFTable. Offset=0, Size=24, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::~YieldCurveHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            public: virtual void unknown_vf_0_2(void); // 2
            public: virtual void unknown_vf_0_3(void); // 3
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::commit(class sophis::tools::CSREventVector &); // 4
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::rollback(void); // 5
            public: virtual void unknown_vf_0_6(void); // 6
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(class sophis::tools::dataModel::Data const &); // 7
            public: virtual void unknown_vf_0_8(void); // 8
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(long); // 9
            public: virtual void unknown_vf_0_10(void); // 10
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::find(long, void *); // 11
            public: virtual void unknown_vf_0_12(void); // 12
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::findOrCreate(class sophis::tools::dataModel::Data const &); // 13
            public: virtual void unknown_vf_0_14(void); // 14
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::updateOrCreate(class sophis::tools::dataModel::Data const &); // 15
            public: virtual void unknown_vf_0_16(void); // 16
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::create(class sophis::tools::dataModel::Data const &); // 17
            public: virtual void unknown_vf_0_18(void); // 18
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::checkOrCreate(class sophis::tools::dataModel::Data const &); // 19
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addReference(class sophis::tools::dataModel::DataSet &); // 20
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addDescription(class sophis::tools::dataModel::DataSet &); // 21
            public: virtual class sophis::tools::dataModel::Data & sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::addDescriptionInSingleDataSet(class sophis::tools::dataModel::DataSet &); // 22
            public: virtual void sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::endSession(void); // 23
            // VFTable with 0 offset end

            // VFTable. Offset=56, Size=1, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual class sophis::misc::dataModel::FpmlEntityHandler * sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::clone(void) const; // 0
#endif
            // VFTable with 56 offset end

            // VFTable. Offset=104, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual sophis::misc::fpml::entity::YieldCurveHistoricEntityHandler::~YieldCurveHistoricEntityHandler(void); // 0
            public: virtual void unknown_vf_104_1(void); // 1
            public: virtual void unknown_vf_104_2(void); // 2
            public: virtual void unknown_vf_104_3(void); // 3
#endif
            // VFTable with 104 offset end

          public:
          };


        };

        namespace/*or class/struct?*/ quotation
        {
          // Nested containers:
          class/*or struct*/ DuplicateQuotation : public DuplicateEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::DuplicateEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchInstrument : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ NoSuchQuotation : public NoSuchEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::NoSuchEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ Quotations
          {
            // VFTable. Offset=0, Size=2, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            public: virtual void unknown_vf_0_1(void); // 1
            // VFTable with 0 offset end

          public:
          };

          class/*or struct*/ QuotationsByInstrument
          {
            // VFTable. Offset=40, Size=4, Start=0
            // Owner: SophisXmlTools.dll
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

          class/*or struct*/ Quote
          {
            // VFTable. Offset=96, Size=4, Start=0
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
#if 0 // Warning: There are virtual functions probably from base class.
            public: virtual void unknown_vf_96_0(void); // 0
            public: virtual void unknown_vf_96_1(void); // 1
            public: virtual void unknown_vf_96_2(void); // 2
            public: virtual void unknown_vf_96_3(void); // 3
#endif
            // VFTable with 96 offset end

          public:
          };

          class QuotesByDate
          {
          public:
          };

          class/*or struct*/ WrongCheckQuotation : public WrongCheckEntity
          {
            // VFTable. Offset=0, Size=1, Start=0
            // Corresponding base: dataModel::dataModel::dataModel::WrongCheckEntity
            // Owner: SophisXmlTools.dll
            // Added virtual functions:
            public: virtual void unknown_vf_0_0(void); // 0
            // VFTable with 0 offset end

          public:
          };


        };


      };


    };

    class/*or struct*/ portfolio
    {
    public:
      // Enumerations:
      enum eProvisionType : int {
      };
      enum eSessionStatus : int {
      };
      enum eTransactionType : int {
      };

      // Nested containers:
      class CSRAccountingCategory
      {
        // Functions:
        public: long sophis::portfolio::CSRAccountingCategory::GetId(void) const
      public:
      };

      class CSRAccountingCategoryHandler
      {
        // Functions:
        public: class sophis::portfolio::CSRAccountingCategory const * sophis::portfolio::CSRAccountingCategoryHandler::GetAccountingCategoryByShortName(long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
        // Static functions:
        public: static class sophis::portfolio::CSRAccountingCategoryHandler * sophis::portfolio::CSRAccountingCategoryHandler::GetInstance(void)
      public:
      };

      class CSRAccountingMethodology
      {
        // Functions:
        public: int sophis::portfolio::CSRAccountingMethodology::GetProvisionBE(void) const
      public:
      };

      class CSRAccountingMethodologyHandler
      {
        // Functions:
        public: class sophis::portfolio::CSRAccountingMethodology const * sophis::portfolio::CSRAccountingMethodologyHandler::GetAccountingMethodology(long) const
        // Static functions:
        public: static class sophis::portfolio::CSRAccountingMethodologyHandler * sophis::portfolio::CSRAccountingMethodologyHandler::GetInstance(void)
      public:
      };

      class CSRAccountingPrinciple
      {
        // Functions:
        public: long sophis::portfolio::CSRAccountingPrinciple::DetermineAccountingMethodology(long, long, bool) const
        public: long sophis::portfolio::CSRAccountingPrinciple::GetId(void) const
      public:
      };

      class CSRAccountingPrincipleHandler
      {
        // Functions:
        public: class sophis::portfolio::CSRAccountingPrinciple const * sophis::portfolio::CSRAccountingPrincipleHandler::GetAccountingPrinciple(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const
        public: class sophis::portfolio::CSRAccountingPrinciple const * sophis::portfolio::CSRAccountingPrincipleHandler::GetAccountingPrinciple(long) const
        // Static functions:
        public: static class sophis::portfolio::CSRAccountingPrincipleHandler * sophis::portfolio::CSRAccountingPrincipleHandler::GetInstance(void)
      public:
      };

      class/*or struct*/ CSRPortfolioColumnCacheManager
      {
        // Static functions:
        public: static void sophis::portfolio::CSRPortfolioColumnCacheManager::Disable(void)
      public:
      };

      class CSRPortfolioSelection
      {
        // Functions:
        public: bool sophis::portfolio::CSRPortfolioSelection::solveFolio(struct sophis::portfolio::FolioSelectorInput const &, long &)
        // Static functions:
        public: static class sophis::portfolio::CSRPortfolioSelection & sophis::portfolio::CSRPortfolioSelection::getInstance(void)
      public:
      };

      class CSRPosition
      {
        // Static functions:
        public: static class sophis::portfolio::CSRPosition const * sophis::portfolio::CSRPosition::GetCSRPosition(long, long)
      public:
      };

      class CSRPositionRefresh
      {
        // Functions:
        public: void sophis::portfolio::CSRPositionRefresh::DescribeIdentifiers(class sophis::tools::dataModel::Data &) const
        public: long sophis::portfolio::CSRPositionRefresh::GetIdentifier(void) const
        public: void sophis::portfolio::CSRPositionRefresh::MultiSave(class sophis::tools::CSREventVector &)
        public: void sophis::portfolio::CSRPositionRefresh::SaveExtRef(class sophis::tools::CSREventVector &)
        public: void sophis::portfolio::CSRPositionRefresh::SaveTags(class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> &, class sophis::tools::CSREventVector *)
        // Static functions:
        public: static class sophis::portfolio::CSRPositionRefresh * sophis::portfolio::CSRPositionRefresh::GetCSRPositionRefresh(long, long)
        public: static class sophis::portfolio::CSRPositionRefresh * sophis::portfolio::CSRPositionRefresh::GetCSRPositionRefresh(long, long, short, long)
      public:
      };

      class CSRTaxLotHandler
      {
      public:
        // Nested containers:
        struct SProvisionMapping
        {
        public:
        };


        // Functions:
        public: void sophis::portfolio::CSRTaxLotHandler::SaveArchiveTaxLot(class std::list<class sophis::portfolio::CSRTaxLotList, class std::allocator<class sophis::portfolio::CSRTaxLotList>> const &, long, long)
        public: void sophis::portfolio::CSRTaxLotHandler::StoreProvisionToDB(class std::vector<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping, class std::allocator<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>> const &)
        // Static functions:
        public: static class sophis::portfolio::CSRTaxLotHandler * sophis::portfolio::CSRTaxLotHandler::GetCSRTaxLotHandler(void)
      public:
      };

      class/*or struct*/ CSRTaxLotImport
      {
      public:
        // Enumerations:
        enum eImportType : int {
        };

        // Functions:
        public: sophis::portfolio::CSRTaxLotImport::CSRTaxLotImport(void)
        public: sophis::portfolio::CSRTaxLotImport::~CSRTaxLotImport(void)
        public: void sophis::portfolio::CSRTaxLotImport::ActionPostImport(class sophis::tools::CSREventVector &)
        public: void sophis::portfolio::CSRTaxLotImport::ActionPreImport(class sophis::tools::CSREventVector &)
        public: void sophis::portfolio::CSRTaxLotImport::CheckSessionInformations(class sophis::tools::dataModel::Data const &)
        public: bool sophis::portfolio::CSRTaxLotImport::CreateAccountingPos(class sophis::tools::dataModel::DataSet const &)
        public: struct sophis::portfolio::positionDesc & sophis::portfolio::CSRTaxLotImport::GetPositionDescription(void)
        public: class std::list<class sophis::portfolio::CSRTaxLotList, class std::allocator<class sophis::portfolio::CSRTaxLotList>> const & sophis::portfolio::CSRTaxLotImport::GetTaxLotList(void) const
        public: void sophis::portfolio::CSRTaxLotImport::Reset(void)
        // Static functions:
        public: static enum sophis::portfolio::CSRTaxLotImport::eImportType sophis::portfolio::CSRTaxLotImport::GetImportType(void)
        public: static long sophis::portfolio::CSRTaxLotImport::GetSessionId(void)
        public: static enum sophis::portfolio::eSessionStatus sophis::portfolio::CSRTaxLotImport::GetSessionStatus(void)
        public: static long sophis::portfolio::CSRTaxLotImport::GetValuationDate(void)
      public:
      };

      class CSRTaxLotList
      {
      public:
      };

      class/*or struct*/ CSRTransaction
      {
        // Functions:
        public: sophis::portfolio::CSRTransaction::CSRTransaction(void)
        public: enum eBackOfficeType sophis::portfolio::CSRTransaction::GetFinalStatus(long) const
        public: void sophis::portfolio::CSRTransaction::SaveMultiInsertion(class sophis::tools::CSREventVector &, long, bool)
        public: void sophis::portfolio::CSRTransaction::SetAccountancyDate(long)
        public: void sophis::portfolio::CSRTransaction::SetBackOfficeType(enum eBackOfficeType)
        public: void sophis::portfolio::CSRTransaction::SetEntityOnly(long)
        public: bool sophis::portfolio::CSRTransaction::SetFolioCode(long)
        public: void sophis::portfolio::CSRTransaction::SetInstrumentCode(long)
        public: void sophis::portfolio::CSRTransaction::SetNetAmountOnly(double)
        public: void sophis::portfolio::CSRTransaction::SetOperator(long)
        public: void sophis::portfolio::CSRTransaction::SetQuantityOnly(double)
        public: void sophis::portfolio::CSRTransaction::SetSettlementDate(long)
        public: void sophis::portfolio::CSRTransaction::SetSpotOnly(double)
        public: void sophis::portfolio::CSRTransaction::SetTradeBusinessModels(class boost::container::flat_map<long, long, struct std::less<long>, void>)
        public: void sophis::portfolio::CSRTransaction::SetTransactionDate(long)
        public: void sophis::portfolio::CSRTransaction::SetTransactionTime(double)
        public: void sophis::portfolio::CSRTransaction::SetTransactionTypeOnly(enum sophis::portfolio::eTransactionType)
        public: __int64 sophis::portfolio::CSRTransaction::getReservedCode(void) const
        public: void sophis::portfolio::CSRTransaction::reserveCode(__int64)
        // Static functions:
        public: static __int64 sophis::portfolio::CSRTransaction::GetNewCode(void)
#if 0 // All found virtual functions names:
        public: virtual sophis::portfolio::CSRTransaction::~CSRTransaction(void)
#endif

      public:
      };

      struct FolioSelectorInput
      {
        // Functions:
        public: sophis::portfolio::FolioSelectorInput::FolioSelectorInput(void)
        public: sophis::portfolio::FolioSelectorInput::~FolioSelectorInput(void)
      public:
      };

      class ISRTaxLotPoolFactorHelper
      {
      public:
      };

      struct SSPriceAndAmount
      {
      public:
      };

      class/*or struct*/ SSProvisionCreationGroupEvent
      {
        // Functions:
        public: sophis::portfolio::SSProvisionCreationGroupEvent::SSProvisionCreationGroupEvent(class std::vector<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping, class std::allocator<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>> const &)
#if 0 // All found virtual functions names:
        public: virtual void sophis::portfolio::SSProvisionCreationGroupEvent::Send(void)
#endif

      public:
      };

      class/*or struct*/ TaxLotPoolFactorHelperFactory
      {
        // Static functions:
        public: static class std::shared_ptr<class sophis::portfolio::ISRTaxLotPoolFactorHelper> const sophis::portfolio::TaxLotPoolFactorHelperFactory::GetTaxLotPoolFactorHelper(long)
      public:
      };

      struct positionDesc
      {
      public:
      };


      // Functions:
      struct SSPriceAndAmount ComputePriceAndAmount(class ISRTaxLotPoolFactorHelper const &, double, double, double, double, double, double, enum eProvisionType, enum sophis::instrument::eAskQuotationType)
    public:
    };

    class/*or struct*/ sql
    {
    public:
      // Enumerations:
      enum Indicator : int {
      };

      // Nested containers:
      class CSRConnection
      {
      public:
      };

      class CSRIn
      {
        // Functions:
        public: sophis::sql::CSRIn::CSRIn(class sophis::sql::CSRIn &&)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRIn::~CSRIn(void)
#endif

      public:
      };

      class/*or struct*/ CSRInBase
      {
        // Functions:
        protected: sophis::sql::CSRInBase::CSRInBase(enum sophis::sql::CSROCIParam::Type, __int64, __int64, enum sophis::sql::Indicator *, __int64, bool)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRInBase::~CSRInBase(void)
#endif

      public:
      };

      class CSRInParenthesis
      {
      public:
      };

      class CSRInRef
      {
        // Functions:
        public: sophis::sql::CSRInRef::CSRInRef(class sophis::sql::CSRInRef const &)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRInRef::~CSRInRef(void)
#endif

      public:
      };

      class/*or struct*/ CSRIndicatorParam
      {
        // Functions:
        public: void sophis::sql::CSRIndicatorParam::SetIndicators(enum sophis::sql::Indicator *, __int64)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRIndicatorParam::~CSRIndicatorParam(void)
#endif

      public:
      };

      template<typename T1      >
      class/*or struct*/ CSRInserter
      {
      public:
      };
#if 0 // Instances:
// <__int64>
#if 0
      template<>
      class/*or struct*/ CSRInserter<__int64> : public CSRQueryBufferedBase<__int64>
      {
        // VFTable. Offset=0, Size=5, Start=5
        // Corresponding base: CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase<__int64>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      class/*or struct*/ CSRLob
      {
        // Static functions:
        public: static void sophis::sql::CSRLob::InsertBundleLob(class sophis::sql::CSRConnection &, class std::vector<struct OCILobLocator const *, class std::allocator<struct OCILobLocator const *>> &, class std::vector<void const *, class std::allocator<void const *>> &, class std::vector<unsigned __int64, class std::allocator<unsigned __int64>> &)
      public:
      };

      class CSRLocation
      {
        // Functions:
        public: sophis::sql::CSRLocation::CSRLocation(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, unsigned long, class sophis::sql::CSRQuery *)
        public: sophis::sql::CSRLocation::~CSRLocation(void)
      public:
      };

      class/*or struct*/ CSROCIParam
      {
      public:
        // Enumerations:
        enum Type : int {
        };

        // Functions:
        public: void sophis::sql::CSROCIParam::SetSkipSize(__int64)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSROCIParam::~CSROCIParam(void)
#endif

      public:
      };

      template<typename T0, typename T2      >
      class/*or struct*/ CSROffsetParam
      {
      public:
      };
#if 0 // Instances:
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long>
#if 0
      template<>
      class/*or struct*/ CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short>
#if 0
      template<>
      class/*or struct*/ CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64>
#if 0
      template<>
      class/*or struct*/ CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long>
#if 0
      template<>
      class/*or struct*/ CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      class CSROut
      {
        // Functions:
        public: sophis::sql::CSROut::CSROut(class sophis::sql::CSROut &&)
        public: sophis::sql::CSROut::CSROut(class sophis::sql::CSROut const &)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSROut::~CSROut(void)
#endif

      public:
      };

      class/*or struct*/ CSROutBase
      {
        // Functions:
        protected: sophis::sql::CSROutBase::CSROutBase(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, enum sophis::sql::CSROCIParam::Type, __int64, __int64, enum sophis::sql::Indicator *, __int64)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSROutBase::~CSROutBase(void)
#endif

      public:
      };

      template<typename T1      >
      class/*or struct*/ CSROutGenerator
      {
      public:
      };
#if 0 // Instances:
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
#if 0
      template<>
      class/*or struct*/ CSROutGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave> : public CSRParamGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
#if 0
      template<>
      class/*or struct*/ CSROutGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal> : public CSRParamGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
      {
        // VFTable. Offset=0, Size=1, Start=0
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      template<typename T0, typename T2      >
      class/*or struct*/ CSROutOffset
      {
      public:
      };
#if 0 // Instances:
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long>
#if 0
      template<>
      class/*or struct*/ CSROutOffset<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long> : public CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long>, public CSROutGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
      {
        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: CSROffsetParam::CSROffsetParam::CSROffsetParam::CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, long>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=1, Start=1
        // Corresponding base: CSROutGenerator::CSROutGenerator::CSROutGenerator::CSROutGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
        // Owner: SophisXmlTools.dll
        // VFTable with 32 offset end

      public:
      };
#endif
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short>
#if 0
      template<>
      class/*or struct*/ CSROutOffset<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short> : public CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short>, public CSROutGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
      {
        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: CSROffsetParam::CSROffsetParam::CSROffsetParam::CSROffsetParam<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, short>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=1, Start=1
        // Corresponding base: CSROutGenerator::CSROutGenerator::CSROutGenerator::CSROutGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
        // Owner: SophisXmlTools.dll
        // VFTable with 32 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64>
#if 0
      template<>
      class/*or struct*/ CSROutOffset<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64> : public CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64>, public CSROutGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
      {
        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: CSROffsetParam::CSROffsetParam::CSROffsetParam::CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, __int64>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=1, Start=1
        // Corresponding base: CSROutGenerator::CSROutGenerator::CSROutGenerator::CSROutGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
        // Owner: SophisXmlTools.dll
        // VFTable with 32 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long>
#if 0
      template<>
      class/*or struct*/ CSROutOffset<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long> : public CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long>, public CSROutGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
      {
        // VFTable. Offset=0, Size=1, Start=1
        // Corresponding base: CSROffsetParam::CSROffsetParam::CSROffsetParam::CSROffsetParam<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, long>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

        // VFTable. Offset=32, Size=1, Start=1
        // Corresponding base: CSROutGenerator::CSROutGenerator::CSROutGenerator::CSROutGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
        // Owner: SophisXmlTools.dll
        // VFTable with 32 offset end

      public:
      };
#endif
#endif


      template<typename T1      >
      class/*or struct*/ CSRParamGenerator
      {
      public:
      };
#if 0 // Instances:
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
#if 0
      template<>
      class/*or struct*/ CSRParamGenerator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
      {
      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
#if 0
      template<>
      class/*or struct*/ CSRParamGenerator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
      {
      public:
      };
#endif
#endif


      class CSRQuery
      {
        // Functions:
        public: sophis::sql::CSRQuery::CSRQuery(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::sql::CSRConnection &)
        private: void sophis::sql::CSRQuery::CleanCacheFor(struct std::integral_constant<bool, 0> const &, struct std::integral_constant<bool, 0> const &, struct std::integral_constant<bool, 0> const &, struct std::integral_constant<bool, 0> const &)
        private: void sophis::sql::CSRQuery::CleanCacheFor(struct std::integral_constant<bool, 0> const &, struct std::integral_constant<bool, 1> const &, struct std::integral_constant<bool, 0> const &, struct std::integral_constant<bool, 0> const &)
        private: void sophis::sql::CSRQuery::CleanCacheForInput(void)
        private: void sophis::sql::CSRQuery::CleanCacheForOutput(void)
        private: void sophis::sql::CSRQuery::CleanCacheForString(void)
        private: void sophis::sql::CSRQuery::CreateStatementIfNeeded(void)
        public: bool sophis::sql::CSRQuery::Ended(void) const
        public: bool sophis::sql::CSRQuery::Execute(unsigned long)
        public: unsigned long sophis::sql::CSRQuery::Fetch(unsigned long)
        public: bool sophis::sql::CSRQuery::Fetch(void)
        public: class sophis::sql::CSRConnection & sophis::sql::CSRQuery::GetConnection(void)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const & sophis::sql::CSRQuery::GetLogPrefix(void) const
        public: unsigned long sophis::sql::CSRQuery::GetNbFetched(void) const
        public: unsigned long sophis::sql::CSRQuery::GetNbProcessedRows(void) const
        protected: void sophis::sql::CSRQuery::Log(class sophis::sql::CSRLocation const &, enum sophis::sql::ISRLogger::eLevel, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int) const
        public: bool sophis::sql::CSRQuery::Reset(void)
        public: void sophis::sql::CSRQuery::SetName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        public: void sophis::sql::CSRQuery::SetOutStructSize(__int64)
        protected: bool sophis::sql::CSRQuery::WillLog(enum sophis::sql::ISRLogger::eLevel) const
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRQuery::~CSRQuery(void)
        protected: virtual bool sophis::sql::CSRQuery::InternalExecute(unsigned long)
        protected: virtual long sophis::sql::CSRQuery::InternalFetch(unsigned long)
        protected: virtual void sophis::sql::CSRQuery::UpdateAllFetched(unsigned long, unsigned long)
        protected: virtual unsigned long sophis::sql::CSRQuery::UpdateProcessedRows(void)
#endif

        // VFTable. Offset=0, Size=5, Start=0
        // Added virtual functions:
        public: virtual sophis::sql::CSRQuery::~CSRQuery(void); // 0
        protected: virtual unsigned long sophis::sql::CSRQuery::UpdateProcessedRows(void); // 1
        protected: virtual bool sophis::sql::CSRQuery::InternalExecute(unsigned long); // 2
        protected: virtual long sophis::sql::CSRQuery::InternalFetch(unsigned long); // 3
        protected: virtual void sophis::sql::CSRQuery::UpdateAllFetched(unsigned long, unsigned long); // 4
        // VFTable with 0 offset end

      public:
      };

      template<typename T1      >
      class/*or struct*/ CSRQueryBuffered
      {
      public:
      };
#if 0 // Instances:
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
#if 0
      template<>
      class/*or struct*/ CSRQueryBuffered<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave> : public CSRQueryBufferedBase<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
      {
        // VFTable. Offset=0, Size=5, Start=5
        // Corresponding base: CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
#if 0
      template<>
      class/*or struct*/ CSRQueryBuffered<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal> : public CSRQueryBufferedBase<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
      {
        // VFTable. Offset=0, Size=5, Start=5
        // Corresponding base: CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase::CSRQueryBufferedBase<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
        // Owner: SophisXmlTools.dll
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      template<typename T1      >
      class/*or struct*/ CSRQueryBufferedBase
      {
      public:
      };
#if 0 // Instances:
// <__int64>
#if 0
      template<>
      class/*or struct*/ CSRQueryBufferedBase<__int64> : public CSRQueryRestricted
      {
        // VFTable. Offset=0, Size=5, Start=0
        // Corresponding base: sql::sql::CSRQueryRestricted
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
#if 0
      template<>
      class/*or struct*/ CSRQueryBufferedBase<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave> : public CSRQueryRestricted
      {
        // VFTable. Offset=0, Size=5, Start=0
        // Corresponding base: sql::sql::CSRQueryRestricted
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        // VFTable with 0 offset end

      public:
      };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
#if 0
      template<>
      class/*or struct*/ CSRQueryBufferedBase<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal> : public CSRQueryRestricted
      {
        // VFTable. Offset=0, Size=5, Start=0
        // Corresponding base: sql::sql::CSRQueryRestricted
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        public: virtual void unknown_vf_0_2(void); // 2
        public: virtual void unknown_vf_0_3(void); // 3
        public: virtual void unknown_vf_0_4(void); // 4
        // VFTable with 0 offset end

      public:
      };
#endif
#endif


      class/*or struct*/ CSRQueryRestricted : public CSRQuery
      {
        // Functions:
        public: sophis::sql::CSRQueryRestricted::CSRQueryRestricted(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class sophis::sql::CSRConnection &)
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::CSRQueryRestricted::~CSRQueryRestricted(void)
#endif

      public:
      };

      class/*or struct*/ CSRSqlQuery
      {
        // Static functions:
        public: static void sophis::sql::CSRSqlQuery::QueryReturning1LongException(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, long *)
      public:
      };

      class CSRStatement
      {
        // Functions:
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(char const *)
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(class sophis::sql::CSRIn)
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(class sophis::sql::CSRInParenthesis)
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(class sophis::sql::CSRInRef)
        public: class sophis::sql::CSRStatement & sophis::sql::CSRStatement::operator<<(class sophis::sql::CSROut)
      public:
      };

      class CSRTempTableClause
      {
        // Functions:
        public: sophis::sql::CSRTempTableClause::~CSRTempTableClause(void)
        public: class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophis::sql::CSRTempTableClause::GetClause(void) const
      public:
      };

      template<typename T0, typename T2      >
      class/*or struct*/ CSRTypedTempTable
      {
      public:
      };
#if 0 // Instances:
// <__int64, 20>
#if 0
      template<>
      class/*or struct*/ CSRTypedTempTable<__int64, 20> : public ISRAbstractTempTable
      {
        // VFTable. Offset=0, Size=4, Start=0
        // Corresponding base: sql::sql::ISRAbstractTempTable
        // Owner: SophisXmlTools.dll
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


      class ISRAbstractTempTable
      {
        // Functions:
        public: sophis::sql::ISRAbstractTempTable::ISRAbstractTempTable(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class sophis::sql::CSRConnection &)
        public: void sophis::sql::ISRAbstractTempTable::CleanIfNeeded(void) const
#if 0 // All found virtual functions names:
        public: virtual sophis::sql::ISRAbstractTempTable::~ISRAbstractTempTable(void)
#endif

      public:
      };

      namespace/*or class/struct?*/ ISRLogger
      {
        // Enumerations:
        enum eLevel : int {
        };

      };


      // Functions:
      bool CommitDefaultConnection(void)
      class CSRConnection & GetDefaultConnection(void)
      class CSRTempTableClause InTempTable(class ISRAbstractTempTable const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
      bool RollbackDefaultConnection(void)
    public:
    };

    class/*or struct*/ static_data
    {
    public:
      // Nested containers:
      class CSRCurrency
      {
        // Functions:
        public: long sophis::static_data::CSRCurrency::GetDefaultFamilyYieldCurveCode(void) const
        public: void sophis::static_data::CSRCurrency::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        public: double sophis::static_data::CSRCurrency::GetForexHistory(long) const
        public: long sophis::static_data::CSRCurrency::GetMasterCurrency(void) const
        public: struct sophis::instrument::SSHistory * sophis::static_data::CSRCurrency::NEW_HistoryList(long, long, int *, class sophis::static_data::CSRHistoricalData const &) const
        // Static functions:
        public: static void sophis::static_data::CSRCurrency::CurrencyToString(long, char *)
        public: static class sophis::static_data::CSRCurrency const * sophis::static_data::CSRCurrency::GetCSRCurrency(long)
        public: static int sophis::static_data::CSRCurrency::GetCurrencyIndex(long)
        public: static long sophis::static_data::CSRCurrency::StringToCurrency(char const *)
        // Variables:
        public: static long sophis::static_data::CSRCurrency::gMasterCurrency
      public:
      };

      class CSRCurrencyExceptions
      {
        // Functions:
        public: sophis::static_data::CSRCurrencyExceptions::CSRCurrencyExceptions(class sophis::static_data::CSRCurrencyExceptions const &)
      public:
      };

      class CSRHistoricalData
      {
        // Static functions:
        public: static class sophis::static_data::CSRHistoricalData const & sophis::static_data::CSRHistoricalData::GetInstance(void)
      public:
      };

      class CSRPlace
      {
        // Functions:
        public: void sophis::static_data::CSRPlace::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        // Static functions:
        public: static class sophis::static_data::CSRPlace const * sophis::static_data::CSRPlace::GetCSRPlace(long)
        public: static class sophis::static_data::CSRPlace const * sophis::static_data::CSRPlace::GetCSRPlaceWithName(char const *)
      public:
      };

      class/*or struct*/ CSRSeniority
      {
        // Static functions:
        public: static long sophis::static_data::CSRSeniority::GetIdByName(char const *)
      public:
      };

      class CSRTimeDensity
      {
        // Functions:
        public: void sophis::static_data::CSRTimeDensity::GetDescription_API(class sophis::tools::dataModel::DataSet &) const
        // Static functions:
        public: static class sophis::static_data::CSRTimeDensity * sophis::static_data::CSRTimeDensity::CreateFromDescription(class sophis::tools::dataModel::DataSet const &)
        public: static void sophis::static_data::CSRTimeDensity::DescribeIdentifiers(class sophis::tools::dataModel::Data &, long, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>)
        public: static class sophis::static_data::CSRTimeDensity const * sophis::static_data::CSRTimeDensity::GetInstance(long)
        public: static class sophis::static_data::CSRTimeDensity const * sophis::static_data::CSRTimeDensity::GetInstance(char const *)
      public:
      };

      class/*or struct*/ CSRYieldCurveFamily
      {
        // Static functions:
        public: static long sophis::static_data::CSRYieldCurveFamily::GetYieldCurveFamilyCode(long, char const *)
      public:
      };

      class/*or struct*/ ICSRCurrencyCreator
      {
        // VFTable. Offset=0, Size=0, Start=0
        // VFTable with 0 offset end

      public:
      };

      class NoSuchCurrency
      {
        // Functions:
        public: sophis::static_data::NoSuchCurrency::NoSuchCurrency(class sophis::static_data::NoSuchCurrency const &)
        public: sophis::static_data::NoSuchCurrency::NoSuchCurrency(long)
#if 0 // All found virtual functions names:
        public: virtual sophis::static_data::NoSuchCurrency::~NoSuchCurrency(void)
#endif

      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class/*or struct*/ QuotedCurrencyPair
        {
          // Functions:
          public: sophis::static_data::dataModel::QuotedCurrencyPair::QuotedCurrencyPair(void)
          public: void sophis::static_data::dataModel::QuotedCurrencyPair::`vbase dtor'(void)
#if 0 // All found virtual functions names:
          public: virtual class sophis::tools::dataModel::PersistentState * sophis::static_data::dataModel::QuotedCurrencyPair::clone(void) const
          public: virtual char const * sophis::static_data::dataModel::QuotedCurrencyPair::ns(void) const
          public: virtual void sophis::static_data::dataModel::QuotedCurrencyPair::restoreObject(class sophis::tools::dataModel::Storage const &)
          public: virtual void sophis::static_data::dataModel::QuotedCurrencyPair::storeObject(class sophis::tools::dataModel::Storage &) const
          public: virtual char const * sophis::static_data::dataModel::QuotedCurrencyPair::typeName(void) const
#endif

        public:
        };


      };


      // Functions:
      void DescribeAgencies(class sophis::tools::dataModel::DataSet &, class sophis::instrument::CSRInstrument const *, char const *, bool, char const *)
      void DescribeBusinessSectors(class sophis::tools::dataModel::DataSet &, class sophis::instrument::CSRInstrument const *, char const *, bool, char const *)
      void DescribeCurrency(class sophis::tools::dataModel::DataSet &, long, char const *, bool, char const *)
      void UpdateBusinessSectors(class sophis::tools::dataModel::DataSet const &, class sophis::instrument::CSRInstrument *)
      long UpdateCurrency(class sophis::tools::dataModel::DataSet const &, bool, char const *)
      long UpdateMarket(class sophis::tools::dataModel::DataSet const &, long, char const *)
    public:
    };

    namespace/*or class/struct?*/ tools
    {
      // Nested containers:
      class CSRAbstractEvent
      {
        // Functions:
        public: sophis::tools::CSRAbstractEvent::CSRAbstractEvent(void)
#if 0 // All found virtual functions names:
        public: virtual sophis::tools::CSRAbstractEvent::~CSRAbstractEvent(void)
#endif

      public:
      };

      class CSREventVector
      {
        // Functions:
        public: sophis::tools::CSREventVector::CSREventVector(void)
        public: void sophis::tools::CSREventVector::ExecuteAll(void)
#if 0 // All found virtual functions names:
        public: virtual sophis::tools::CSREventVector::~CSREventVector(void)
#endif

      public:
      };

      template<typename T0, typename T1, typename T2, typename T4      >
      class CSRPrototype
      {
      public:
      };
#if 0 // Instances:
// <class sophis::misc::fpml::alerts::AlertToolkit, char const *, struct sophis::tools::less_char_star, class std::allocator<struct std::pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>>>
#if 0
      template<>
      class CSRPrototype<class sophis::misc::fpml::alerts::AlertToolkit, char const *, struct sophis::tools::less_char_star, class std::allocator<struct std::pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>>>
      {
      public:
      };
#endif
#endif


      class CSRTagMetadata
      {
        // Functions:
        public: sophis::tools::CSRTagMetadata::~CSRTagMetadata(void)
        // Variables:
        public: static class std::map<long, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>>> sophis::tools::CSRTagMetadata::___TAGS___
      public:
      };

      class/*or struct*/ CurrencyBankHolidaysUpdateEvent : public CSRAbstractEvent
      {
        // VFTable. Offset=0, Size=2, Start=0
        // Corresponding base: tools::tools::CSRAbstractEvent
        // Owner: SophisXmlTools.dll
        // Added virtual functions:
        public: virtual void unknown_vf_0_0(void); // 0
        public: virtual void unknown_vf_0_1(void); // 1
        // VFTable with 0 offset end

      public:
      };

      struct VoteException
      {
        // Functions:
        public: sophis::tools::VoteException::VoteException(struct sophis::tools::VoteException const &)
        public: sophis::tools::VoteException::VoteException(char const *, long, bool)
#if 0 // All found virtual functions names:
        public: virtual sophis::tools::VoteException::~VoteException(void)
#endif

      public:
      };

      class XML_Root
      {
        // Variables:
        public: static class sophis::tools::XML_Root *sophis::tools::XML_Root::global
      public:
      };

      namespace/*or class/struct?*/ dataModel
      {
        // Enumerations:
        enum ValueKind : int {
        };

        // Nested containers:
        class AttributeSet
        {
        public:
        };

        class/*or struct*/ BasicDataSet
        {
          // Functions:
          public: sophis::tools::dataModel::BasicDataSet::BasicDataSet(void)
          public: void sophis::tools::dataModel::BasicDataSet::`vbase dtor'(void)
        public:
        };

        class Data
        {
        public:
        };

        class DataContainer : public Value
        {
          // VFTable. Offset=0, Size=0, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::Value
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataDataSetAdapter : public DataSet
        {
          // VFTable. Offset=0, Size=22, Start=22
          // Corresponding base: dataModel::dataModel::dataModel::DataSet
          // Owner: SophisXmlTools.dll
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ DataDataSetAdapterIterator : public GenericDataIterator<class sophis::tools::dataModel::Data const>
        {
          // VFTable. Offset=0, Size=4, Start=4
          // Corresponding base: GenericDataIterator::GenericDataIterator::GenericDataIterator::GenericDataIterator::GenericDataIterator<class sophis::tools::dataModel::Data const>
          // Owner: SophisXmlTools.dll
          // VFTable with 0 offset end

        public:
        };

        class DataImportException
        {
          // Functions:
          public: sophis::tools::dataModel::DataImportException::DataImportException(class sophis::tools::dataModel::DataImportException const &)
          public: sophis::tools::dataModel::DataImportException::DataImportException(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataImportException::~DataImportException(void)
#endif

        public:
        };

        class DataModelException : public ExceptionBase
        {
          // Functions:
          protected: sophis::tools::dataModel::DataModelException::DataModelException(char const *, char const *)
          public: sophis::tools::dataModel::DataModelException::DataModelException(class sophis::tools::dataModel::DataModelException const &)
          public: sophis::tools::dataModel::DataModelException::DataModelException(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DataModelException::~DataModelException(void)
#endif

        public:
        };

        class DataSequence
        {
        public:
        };

        class/*or struct*/ DataSequenceDataSetAdapter : public DataSet
        {
          // VFTable. Offset=0, Size=22, Start=22
          // Corresponding base: dataModel::dataModel::dataModel::DataSet
          // Owner: SophisXmlTools.dll
          // VFTable with 0 offset end

        public:
        };

        class DataSet : public DataContainer
        {
          // Functions:
          public: sophis::tools::dataModel::DataSet::DataSet(void)
          public: class sophis::tools::dataModel::AttributeSet & sophis::tools::dataModel::DataSet::getAttributes(char const *)
          public: class sophis::tools::dataModel::AttributeSet const & sophis::tools::dataModel::DataSet::getAttributes(char const *) const
          public: class sophis::tools::dataModel::DataSequence & sophis::tools::dataModel::DataSet::getDataSequence(char const *, class sophis::tools::dataModel::Documentation const *)
          public: class sophis::tools::dataModel::DataSequence const & sophis::tools::dataModel::DataSet::getDataSequence(char const *) const
          public: class sophis::tools::dataModel::DataSet & sophis::tools::dataModel::DataSet::getDataSet(char const *, class sophis::tools::dataModel::Documentation const *)
          public: class sophis::tools::dataModel::DataSet const & sophis::tools::dataModel::DataSet::getDataSet(char const *) const
          public: class sophis::tools::dataModel::PlainValue & sophis::tools::dataModel::DataSet::getPlainValue(char const *, enum sophis::tools::dataModel::ValueKind)
          public: class sophis::tools::dataModel::PlainValue const & sophis::tools::dataModel::DataSet::getPlainValue(char const *, enum sophis::tools::dataModel::ValueKind) const
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
          public: static void sophis::tools::dataModel::DataSetUtil::add(class sophis::tools::dataModel::DataSet &, class sophis::tools::dataModel::Data const &)
          public: static void sophis::tools::dataModel::DataSetUtil::copy(class sophis::tools::dataModel::Data &, class sophis::tools::dataModel::Data const &, bool, bool)
          public: static bool sophis::tools::dataModel::DataSetUtil::fullCompare(class sophis::tools::dataModel::DataSet const &, class sophis::tools::dataModel::DataSet const &, class std::basic_ostream<char, struct std::char_traits<char>> &)
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
          public: virtual bool sophis::tools::dataModel::DataTraversal::traversePlainValue(class sophis::tools::dataModel::PlainValue const &, class sophisTools::base::RefCountHandle<class sophis::tools::dataModel::ParentStack>, char const *)
#endif

        public:
        };

        class Documentation
        {
          // Functions:
          public: sophis::tools::dataModel::Documentation::Documentation(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::Documentation::~Documentation(void)
#endif

        public:
        };

        class DuplicateData
        {
          // Functions:
          public: sophis::tools::dataModel::DuplicateData::DuplicateData(class sophis::tools::dataModel::DuplicateData const &)
          public: sophis::tools::dataModel::DuplicateData::DuplicateData(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::DuplicateData::~DuplicateData(void)
#endif

        public:
        };

        class EmptyValue
        {
          // Functions:
          public: sophis::tools::dataModel::EmptyValue::EmptyValue(class sophis::tools::dataModel::EmptyValue const &)
        public:
        };

        template<typename T1        >
        class/*or struct*/ GenericDataIterator
        {
        public:
        };
#if 0 // Instances:
// <class sophis::tools::dataModel::Data const>
#if 0
        template<>
        class/*or struct*/ GenericDataIterator<class sophis::tools::dataModel::Data const>
        {
          // VFTable. Offset=0, Size=4, Start=0
          // Owner: SophisXmlTools.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void) = 0; // 0
          public: virtual void unknown_vf_0_1(void) = 0; // 1
          public: virtual void unknown_vf_0_2(void) = 0; // 2
          public: virtual void unknown_vf_0_3(void); // 3
          // VFTable with 0 offset end

        public:
        };
#endif
#endif


        class/*or struct*/ InvalidDataValue : public DataModelException
        {
          // VFTable. Offset=0, Size=1, Start=0
          // Corresponding base: dataModel::dataModel::dataModel::DataModelException
          // Owner: SophisXmlTools.dll
          // Added virtual functions:
          public: virtual void unknown_vf_0_0(void); // 0
          // VFTable with 0 offset end

        public:
        };

        class InvalidValueKind
        {
          // Functions:
          public: sophis::tools::dataModel::InvalidValueKind::InvalidValueKind(class sophis::tools::dataModel::InvalidValueKind const &)
          public: sophis::tools::dataModel::InvalidValueKind::InvalidValueKind(enum sophis::tools::dataModel::ValueKind, enum sophis::tools::dataModel::ValueKind)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::InvalidValueKind::~InvalidValueKind(void)
#endif

        public:
        };

        class IteratorOutOfBounds
        {
          // Functions:
          public: sophis::tools::dataModel::IteratorOutOfBounds::IteratorOutOfBounds(class sophis::tools::dataModel::IteratorOutOfBounds const &)
          public: sophis::tools::dataModel::IteratorOutOfBounds::IteratorOutOfBounds(void)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::IteratorOutOfBounds::~IteratorOutOfBounds(void)
#endif

        public:
        };

        class NamedEmptyValue
        {
          // Functions:
          public: sophis::tools::dataModel::NamedEmptyValue::NamedEmptyValue(class sophis::tools::dataModel::NamedEmptyValue const &)
          public: sophis::tools::dataModel::NamedEmptyValue::NamedEmptyValue(char const *)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::NamedEmptyValue::~NamedEmptyValue(void)
#endif

        public:
        };

        class NamedInvalidValueKind
        {
          // Functions:
          public: sophis::tools::dataModel::NamedInvalidValueKind::NamedInvalidValueKind(class sophis::tools::dataModel::NamedInvalidValueKind const &)
          public: sophis::tools::dataModel::NamedInvalidValueKind::NamedInvalidValueKind(char const *, enum sophis::tools::dataModel::ValueKind, enum sophis::tools::dataModel::ValueKind)
#if 0 // All found virtual functions names:
          public: virtual sophis::tools::dataModel::NamedInvalidValueKind::~NamedInvalidValueKind(void)
#endif

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
        public:
        };

        class PersistentState
        {
        public:
        };

        class PlainValue
        {
        public:
        };

        class/*or struct*/ RootPersistentState
        {
#if 0 // All found virtual functions names:
          public: virtual bool sophis::tools::dataModel::RootPersistentState::isAChoice(void) const
          public: virtual class sophis::tools::dataModel::PersistentState * sophis::tools::dataModel::RootPersistentState::parent(void)
          public: virtual class sophis::tools::dataModel::PersistentState const * sophis::tools::dataModel::RootPersistentState::parent(void) const
          public: virtual char const * sophis::tools::dataModel::RootPersistentState::typeComment(void) const
#endif

        public:
        };

        class Storage
        {
          // Functions:
          public: sophis::tools::dataModel::Storage::Storage(class sophis::tools::dataModel::DataSet *, bool)
          public: sophis::tools::dataModel::Storage::Storage(class sophis::tools::dataModel::DataSet const *)
          public: void sophis::tools::dataModel::Storage::`vbase dtor'(void)
          public: bool sophis::tools::dataModel::Storage::has(char const *) const
          public: bool sophis::tools::dataModel::Storage::restore(char const *, long &, bool) const
          public: bool sophis::tools::dataModel::Storage::restore(char const *, class sophis::tools::dataModel::PersistentState &, bool) const
          public: void sophis::tools::dataModel::Storage::store(char const *, class sophis::tools::dataModel::PersistentState const &, bool, class sophis::tools::dataModel::Documentation *)
        public:
        };

        class Traversal
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
#if 0 // All found virtual functions names:
          public: virtual bool sophis::tools::dataModel::Traverser::traverse(class sophis::tools::dataModel::DataContainer const &, class sophis::tools::dataModel::Traversal &)
#endif

        public:
        };

        class/*or struct*/ Value
        {
          // VFTable. Offset=0, Size=0, Start=0
          // VFTable with 0 offset end

        public:
        };

        class/*or struct*/ ValueTypeUtil
        {
          // Static functions:
          public: static bool sophis::tools::dataModel::ValueTypeUtil::isPlain(enum sophis::tools::dataModel::ValueKind)
          public: static enum sophis::tools::dataModel::ValueKind sophis::tools::dataModel::ValueTypeUtil::properKind(long const &)
          public: static enum sophis::tools::dataModel::ValueKind sophis::tools::dataModel::ValueTypeUtil::properKind(__int64 const &)
        public:
        };


      };

      struct less_char_star
      {
      public:
      };


    };

    namespace/*or class/struct?*/ valuation
    {
      // Nested containers:
      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        struct InstrumentSet
        {
        public:
        };


      };


    };

    namespace/*or class/struct?*/ xml
    {
      // Nested containers:
      namespace/*or class/struct?*/ dataModel
      {
        // Nested containers:
        class BasicGrammarPoolImpl
        {
          // Functions:
          public: bool sophis::xml::dataModel::BasicGrammarPoolImpl::getSubstitutedNS(char const *, char const *, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          // Static functions:
          public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::BasicGrammarPoolImpl> sophis::xml::dataModel::BasicGrammarPoolImpl::getInstance(void)
        public:
        };

        class DataFactory
        {
        public:
          // Nested containers:
          class/*or struct*/ Manager
          {
            // Static functions:
            public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory> sophis::xml::dataModel::DataFactory::Manager::getDefaultInstance(void)
            public: static class sophisTools::base::RefCountHandle<class sophis::xml::dataModel::DataFactory> sophis::xml::dataModel::DataFactory::Manager::getInstance(char const *)
          public:
          };


        public:
        };

        class/*or struct*/ ExportFeature
        {
          // Functions:
          public: sophis::xml::dataModel::ExportFeature::ExportFeature(void)
          public: sophis::xml::dataModel::ExportFeature::~ExportFeature(void)
          public: void sophis::xml::dataModel::ExportFeature::checkResult(bool)
          public: void sophis::xml::dataModel::ExportFeature::withGrammar(bool)
        public:
        };

        class/*or struct*/ ImportFeature
        {
          // Functions:
          public: sophis::xml::dataModel::ImportFeature::ImportFeature(void)
          public: sophis::xml::dataModel::ImportFeature::~ImportFeature(void)
          public: void sophis::xml::dataModel::ImportFeature::withGrammar(bool)
        public:
        };

        class/*or struct*/ XMLDataExporter
        {
          // Functions:
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> &)
          public: sophis::xml::dataModel::XMLDataExporter::XMLDataExporter(class sophisTools::base::RefCountHandle<class sophisTools::io::OutputStream>)
          public: void sophis::xml::dataModel::XMLDataExporter::`vbase dtor'(void)
          public: void sophis::xml::dataModel::XMLDataExporter::checkResult(bool)
          public: void sophis::xml::dataModel::XMLDataExporter::renameSubstitutionGroups(bool)
          public: void sophis::xml::dataModel::XMLDataExporter::reservePrefix(char const *, char const *)
#if 0 // All found virtual functions names:
          public: virtual void sophis::xml::dataModel::XMLDataExporter::exportFrom(class sophis::tools::dataModel::DataSet const &)
#endif

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
      public: bool operator!=(class sophisTools::CSRDay const &) const
      public: long operator long(void) const
      // Static functions:
      public: static long GetSystemDate(void)
      public: static long GetSystemTime(void)
    public:
    };

    class FlyWeightString
    {
      // Functions:
      public: class sophisTools::FlyWeightString & operator=(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &)
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
        public: sophisTools::base::ExceptionBase::ExceptionBase(class sophisTools::base::ExceptionBase const &)
        public: char const * sophisTools::base::ExceptionBase::operator char const *(void) const
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

      class InvalidInvocationState
      {
        // Functions:
        public: sophisTools::base::InvalidInvocationState::InvalidInvocationState(class sophisTools::base::InvalidInvocationState const &)
        public: sophisTools::base::InvalidInvocationState::InvalidInvocationState(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::InvalidInvocationState::~InvalidInvocationState(void)
#endif

      public:
      };

      class NoLicenseException
      {
        // Functions:
        public: sophisTools::base::NoLicenseException::NoLicenseException(class sophisTools::base::NoLicenseException const &)
        public: sophisTools::base::NoLicenseException::NoLicenseException(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::base::NoLicenseException::~NoLicenseException(void)
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
// <class sophis::market_data::dataModel::YieldCurveHistoric>
#if 0
      template<>
      class RefCountHandle<class sophis::market_data::dataModel::YieldCurveHistoric>
      {
      public:
      };
#endif
// <class sophis::misc::LocalSession>
#if 0
      template<>
      class RefCountHandle<class sophis::misc::LocalSession>
      {
      public:
      };
#endif
// <class sophis::misc::dataModel::FpmlEntityChecker>
#if 0
      template<>
      class RefCountHandle<class sophis::misc::dataModel::FpmlEntityChecker>
      {
      public:
      };
#endif
// <class sophis::misc::dataModel::FpmlEntityHandler>
#if 0
      template<>
      class RefCountHandle<class sophis::misc::dataModel::FpmlEntityHandler>
      {
      public:
      };
#endif
// <class sophis::misc::fpml::entity::InstrumentEntityHandler>
#if 0
      template<>
      class RefCountHandle<class sophis::misc::fpml::entity::InstrumentEntityHandler>
      {
      public:
      };
#endif
// <class sophis::tools::dataModel::ParentStack>
#if 0
      template<>
      class RefCountHandle<class sophis::tools::dataModel::ParentStack>
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
// <class sophisTools::io::ByteArrayInputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::ByteArrayInputStream>
      {
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
// <class sophisTools::io::OutputStream>
#if 0
      template<>
      class RefCountHandle<class sophisTools::io::OutputStream>
      {
      public:
      };
#endif
// <struct sophis::valuation::dataModel::InstrumentSet>
#if 0
      template<>
      class RefCountHandle<struct sophis::valuation::dataModel::InstrumentSet>
      {
      public:
      };
#endif
#endif


      template<typename T0, typename T1, typename T3      >
      class/*or struct*/ RefCountedMap
      {
      public:
      };
#if 0 // Instances:
// <long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>>
#if 0
      template<>
      class/*or struct*/ RefCountedMap<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>>
      {
        // VFTable. Offset=40, Size=4, Start=0
        // Owner: SophisXmlTools.dll
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

    namespace/*or class/struct?*/ io
    {
      // Nested containers:
      class ByteArrayInputStream
      {
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayInputStream> sophisTools::io::ByteArrayInputStream::create(char *, unsigned __int64, bool)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayInputStream> sophisTools::io::ByteArrayInputStream::create(char *const, unsigned __int64)
      public:
      };

      class ByteArrayOutputStream
      {
        // Functions:
        public: char * sophisTools::io::ByteArrayOutputStream::orphanBuffer(void)
        // Static functions:
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayOutputStream> sophisTools::io::ByteArrayOutputStream::create(void)
        public: static class sophisTools::base::RefCountHandle<class sophisTools::io::ByteArrayOutputStream> sophisTools::io::ByteArrayOutputStream::create(bool)
      public:
      };

      class IOException
      {
        // Functions:
        public: sophisTools::io::IOException::IOException(class sophisTools::io::IOException const &)
      public:
      };

      class OutputStream
      {
      public:
      };

      class SerializationException
      {
        // Functions:
        public: sophisTools::io::SerializationException::SerializationException(class sophisTools::io::SerializationException const &)
        public: sophisTools::io::SerializationException::SerializationException(char const *)
#if 0 // All found virtual functions names:
        public: virtual sophisTools::io::SerializationException::~SerializationException(void)
#endif

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
        public: static class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> sophisTools::logger::SophisLoggerConfiguration::GetFilePath(void)
        public: static bool sophisTools::logger::SophisLoggerConfiguration::GetOldLogger(void)
      public:
      };


    };


    // Functions:
    class std::basic_ostream<char, struct std::char_traits<char>> & operator<<(class std::basic_ostream<char, struct std::char_traits<char>> &, class CSRDay const &)
  public:
  };

  class/*or struct*/ std
  {
  public:
    // Nested containers:
    template<typename T0, typename T1, typename T3    >
    class/*or struct*/ _Func_base
    {
    public:
    };
#if 0 // Instances:
// <void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long>
#if 0
    template<>
    class/*or struct*/ _Func_base<void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long>
    {
    public:
    };
#endif
// <void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long>
#if 0
    template<>
    class/*or struct*/ _Func_base<void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T1, typename T2, typename T4    >
    class/*or struct*/ _Func_impl_no_alloc
    {
    public:
    };
#if 0 // Instances:
// <class std::function<void __cdecl(struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *, unsigned long)>, void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long>
#if 0
    template<>
    class/*or struct*/ _Func_impl_no_alloc<class std::function<void __cdecl(struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *, unsigned long)>, void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long> : public _Func_base<void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long>
    {
      // VFTable. Offset=0, Size=6, Start=0
      // Corresponding base: _Func_base::_Func_base::_Func_base<void, struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *&&, unsigned long>
      // Owner: SophisXmlTools.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      public: virtual void unknown_vf_0_4(void); // 4
      public: virtual void unknown_vf_0_5(void); // 5
      // VFTable with 0 offset end

    public:
    };
#endif
// <class std::function<void __cdecl(struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *, unsigned long)>, void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long>
#if 0
    template<>
    class/*or struct*/ _Func_impl_no_alloc<class std::function<void __cdecl(struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *, unsigned long)>, void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long> : public _Func_base<void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long>
    {
      // VFTable. Offset=0, Size=6, Start=0
      // Corresponding base: _Func_base::_Func_base::_Func_base<void, struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *&&, unsigned long>
      // Owner: SophisXmlTools.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      public: virtual void unknown_vf_0_4(void); // 4
      public: virtual void unknown_vf_0_5(void); // 5
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
    class/*or struct*/ _Ref_count_obj2
    {
    public:
    };
#if 0 // Instances:
// <class std::vector<__int64, class std::allocator<__int64>>>
#if 0
    template<>
    class/*or struct*/ _Ref_count_obj2<class std::vector<__int64, class std::allocator<__int64>>> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisXmlTools.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class std::vector<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, class std::allocator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>>>
#if 0
    template<>
    class/*or struct*/ _Ref_count_obj2<class std::vector<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, class std::allocator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>>> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisXmlTools.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      public: virtual void unknown_vf_0_2(void); // 2
      public: virtual void unknown_vf_0_3(void); // 3
      // VFTable with 0 offset end

    public:
    };
#endif
// <class std::vector<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, class std::allocator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>>>
#if 0
    template<>
    class/*or struct*/ _Ref_count_obj2<class std::vector<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, class std::allocator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>>> : public _Ref_count_base
    {
      // VFTable. Offset=0, Size=4, Start=0
      // Corresponding base: std::_Ref_count_base
      // Owner: SophisXmlTools.dll
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


    template<typename T0, typename T1, typename T2, typename T3, typename T5    >
    class _Tmap_traits
    {
    public:
    };
#if 0 // Instances:
// <long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>, 0>
#if 0
    template<>
    class _Tmap_traits<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>, 0>
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
// <class std::_Tmap_traits<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>, 0>>
#if 0
    template<>
    class/*or struct*/ _Tree<class std::_Tmap_traits<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>, 0>>
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
// <__int64>
#if 0
    template<>
    class allocator<__int64>
    {
    public:
    };
#endif
// <char>
#if 0
    template<>
    class allocator<char>
    {
    public:
    };
#endif
// <class sophis::event::CSHistoricPriceData *>
#if 0
    template<>
    class allocator<class sophis::event::CSHistoricPriceData *>
    {
    public:
    };
#endif
// <class sophis::portfolio::CSRTaxLotList>
#if 0
    template<>
    class allocator<class sophis::portfolio::CSRTaxLotList>
    {
    public:
    };
#endif
// <class sophis::tools::CSRAbstractEvent *>
#if 0
    template<>
    class allocator<class sophis::tools::CSRAbstractEvent *>
    {
    public:
    };
#endif
// <class sophis::tools::CSRTagMetadata>
#if 0
    template<>
    class allocator<class sophis::tools::CSRTagMetadata>
    {
    public:
    };
#endif
// <long>
#if 0
    template<>
    class allocator<long>
    {
    public:
    };
#endif
// <struct OCILobLocator const *>
#if 0
    template<>
    class allocator<struct OCILobLocator const *>
    {
    public:
    };
#endif
// <struct PriceDB_t>
#if 0
    template<>
    class allocator<struct PriceDB_t>
    {
    public:
    };
#endif
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
#if 0
    template<>
    class allocator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>
    {
    public:
    };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
#if 0
    template<>
    class allocator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>
    {
    public:
    };
#endif
// <struct sophis::DAL::SSRepoMargin>
#if 0
    template<>
    class allocator<struct sophis::DAL::SSRepoMargin>
    {
    public:
    };
#endif
// <struct sophis::listed_market::SeriesKey>
#if 0
    template<>
    class allocator<struct sophis::listed_market::SeriesKey>
    {
    public:
    };
#endif
// <struct sophis::market_data::SSDividend>
#if 0
    template<>
    class allocator<struct sophis::market_data::SSDividend>
    {
    public:
    };
#endif
// <struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>
#if 0
    template<>
    class allocator<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>
    {
    public:
    };
#endif
// <struct std::pair<char const *, char const *>>
#if 0
    template<>
    class allocator<struct std::pair<char const *, char const *>>
    {
    public:
    };
#endif
// <struct std::pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>>
#if 0
    template<>
    class allocator<struct std::pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>
    {
    public:
    };
#endif
// <struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>>
#if 0
    template<>
    class allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>>
    {
    public:
    };
#endif
// <struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>
#if 0
    template<>
    class allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>
    {
    public:
    };
#endif
// <struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>
#if 0
    template<>
    class allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>
    {
    public:
    };
#endif
// <struct std::pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>>
#if 0
    template<>
    class allocator<struct std::pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>>
    {
    public:
    };
#endif
// <struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>
#if 0
    template<>
    class allocator<struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>
    {
    public:
    };
#endif
// <struct std::pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>>
#if 0
    template<>
    class allocator<struct std::pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>>
    {
    public:
    };
#endif
// <unsigned __int64>
#if 0
    template<>
    class allocator<unsigned __int64>
    {
    public:
    };
#endif
// <void const *>
#if 0
    template<>
    class allocator<void const *>
    {
    public:
    };
#endif
#endif


    class/*or struct*/ bad_alloc : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXmlTools.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_array_new_length : public bad_alloc
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::bad_alloc
      // Owner: SophisXmlTools.dll
      // VFTable with 0 offset end

    public:
    };

    class/*or struct*/ bad_cast : public exception
    {
      // VFTable. Offset=0, Size=2, Start=2
      // Corresponding base: std::exception
      // Owner: SophisXmlTools.dll
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
      public: char std::basic_ios<char, struct std::char_traits<char>>::widen(char) const
#if 0 // All found virtual functions names:
      public: virtual std::basic_ios<char, struct std::char_traits<char>>::~basic_ios<char, struct std::char_traits<char>>(void)
#endif

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
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(int)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(long)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned long)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(double)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(class std::basic_ostream<char, struct std::char_traits<char>> & (__cdecl *)(class std::basic_ostream<char, struct std::char_traits<char>> &))
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(__int64)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::operator<<(unsigned __int64)
      public: void std::basic_ostream<char, struct std::char_traits<char>>::_Osfx(void)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::flush(void)
      public: class std::basic_ostream<char, struct std::char_traits<char>> & std::basic_ostream<char, struct std::char_traits<char>>::put(char)
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
      // Owner: SophisXmlTools.dll
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
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::gptr(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::pbase(void) const
      protected: char * std::basic_streambuf<char, struct std::char_traits<char>>::pptr(void) const
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
      // Owner: SophisXmlTools.dll
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
      // Owner: SophisXmlTools.dll
      // Added virtual functions:
      public: virtual void unknown_vf_0_0(void); // 0
      public: virtual void unknown_vf_0_1(void); // 1
      // VFTable with 0 offset end

    public:
    };

    template<typename T1    >
    class function
    {
    public:
    };
#if 0 // Instances:
// <void __cdecl(struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *, unsigned long)>
#if 0
    template<>
    class function<void __cdecl(struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave *, unsigned long)>
    {
    public:
    };
#endif
// <void __cdecl(struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *, unsigned long)>
#if 0
    template<>
    class function<void __cdecl(struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal *, unsigned long)>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T2    >
    struct integral_constant
    {
    public:
    };
#if 0 // Instances:
// <bool, 0>
#if 0
    template<>
    struct integral_constant<bool, 0>
    {
    public:
    };
#endif
// <bool, 1>
#if 0
    template<>
    struct integral_constant<bool, 1>
    {
    public:
    };
#endif
#endif


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
// <long>
#if 0
    template<>
    struct less<long>
    {
    public:
    };
#endif
// <struct QuoteKey_t>
#if 0
    template<>
    struct less<struct QuoteKey_t>
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
// <class sophis::event::CSHistoricPriceData *, class std::allocator<class sophis::event::CSHistoricPriceData *>>
#if 0
    template<>
    class list<class sophis::event::CSHistoricPriceData *, class std::allocator<class sophis::event::CSHistoricPriceData *>>
    {
    public:
    };
#endif
// <class sophis::portfolio::CSRTaxLotList, class std::allocator<class sophis::portfolio::CSRTaxLotList>>
#if 0
    template<>
    class list<class sophis::portfolio::CSRTaxLotList, class std::allocator<class sophis::portfolio::CSRTaxLotList>>
    {
    public:
    };
#endif
// <struct std::pair<char const *, char const *>, class std::allocator<struct std::pair<char const *, char const *>>>
#if 0
    template<>
    class list<struct std::pair<char const *, char const *>, class std::allocator<struct std::pair<char const *, char const *>>>
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
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>
#if 0
    template<>
    class map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct SnapshotColumnDB_t, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>>>
#if 0
    template<>
    class map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, struct SnapshotColumnDB_t, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>>>
    {
    public:
    };
#endif
// <long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>>
#if 0
    template<>
    class/*or struct*/ map<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>> : public _Tree<class std::_Tmap_traits<long, class sophis::misc::fpml::quotation::QuotesByDate, struct std::less<long>, class std::allocator<struct std::pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>>, 0>>
    {
    public:
    };
#endif
// <long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>>
#if 0
    template<>
    class map<long, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>>
    {
    public:
    };
#endif
// <long, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>>>
#if 0
    template<>
    class map<long, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *, struct std::less<long>, class std::allocator<struct std::pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>>>
    {
    public:
    };
#endif
// <struct QuoteKey_t, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>>
#if 0
    template<>
    class map<struct QuoteKey_t, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>>>
    {
    public:
    };
#endif
// <struct QuoteKey_t, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>>>
#if 0
    template<>
    class map<struct QuoteKey_t, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>, struct std::less<struct QuoteKey_t>, class std::allocator<struct std::pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>>>
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
// <char const *, char const *>
#if 0
    template<>
    struct pair<char const *, char const *>
    {
    public:
    };
#endif
// <char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>
#if 0
    template<>
    struct pair<char const *const, class sophis::misc::fpml::alerts::AlertToolkit *>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>
    {
    public:
    };
#endif
// <class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>
#if 0
    template<>
    struct pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, struct SnapshotColumnDB_t>
    {
    public:
    };
#endif
// <long const, class sophis::misc::fpml::quotation::QuotesByDate>
#if 0
    template<>
    struct pair<long const, class sophis::misc::fpml::quotation::QuotesByDate>
    {
    public:
    };
#endif
// <long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>
#if 0
    template<>
    struct pair<long const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>
    {
    public:
    };
#endif
// <long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>
#if 0
    template<>
    struct pair<long const, class std::vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>> *>
    {
    public:
    };
#endif
// <struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>
#if 0
    template<>
    struct pair<struct QuoteKey_t const, class std::map<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, double, struct std::less<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const, double>>>>
    {
    public:
    };
#endif
// <struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>
#if 0
    template<>
    struct pair<struct QuoteKey_t const, class std::vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>>
    {
    public:
    };
#endif
#endif


    template<typename T0, typename T1, typename T3    >
    class set
    {
    public:
    };
#if 0 // Instances:
// <long, struct std::less<long>, class std::allocator<long>>
#if 0
    template<>
    class set<long, struct std::less<long>, class std::allocator<long>>
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
// <class sophis::portfolio::ISRTaxLotPoolFactorHelper>
#if 0
    template<>
    class shared_ptr<class sophis::portfolio::ISRTaxLotPoolFactorHelper>
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
// <__int64, class std::allocator<__int64>>
#if 0
    template<>
    class vector<__int64, class std::allocator<__int64>>
    {
    public:
    };
#endif
// <class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>>
#if 0
    template<>
    class/*or struct*/ vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>>
    {
      // Functions:
      public: class std::vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>> & std::vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>>::operator=(class std::vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>> &&)
      public: void std::vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>>::push_back(class sophis::tools::CSRAbstractEvent *&&)
    public:
    };
#endif
// <class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>>
#if 0
    template<>
    class vector<class sophis::tools::CSRTagMetadata, class std::allocator<class sophis::tools::CSRTagMetadata>>
    {
    public:
    };
#endif
// <long, class std::allocator<long>>
#if 0
    template<>
    class vector<long, class std::allocator<long>>
    {
    public:
    };
#endif
// <struct OCILobLocator const *, class std::allocator<struct OCILobLocator const *>>
#if 0
    template<>
    class vector<struct OCILobLocator const *, class std::allocator<struct OCILobLocator const *>>
    {
    public:
    };
#endif
// <struct PriceDB_t, class std::allocator<struct PriceDB_t>>
#if 0
    template<>
    class vector<struct PriceDB_t, class std::allocator<struct PriceDB_t>>
    {
    public:
    };
#endif
// <struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, class std::allocator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>>
#if 0
    template<>
    class vector<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave, class std::allocator<struct `private: class std::unordered_map<short, int, struct std::hash<short>, struct std::equal_to<short>, class std::allocator<struct std::pair<short const, int>>> __cdecl sophis::misc::fpml::quotation::QuotationsByInstrument::LoadFIDListCache(void)'::`2'::fidListSave>>
    {
    public:
    };
#endif
// <struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, class std::allocator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>>
#if 0
    template<>
    class vector<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal, class std::allocator<struct `public: virtual void __cdecl sophis::misc::fpml::entity::ProvisionEntityHandler::create(class sophis::tools::dataModel::Data const &)'::`71'::ReferringDeal>>
    {
    public:
    };
#endif
// <struct sophis::DAL::SSRepoMargin, class std::allocator<struct sophis::DAL::SSRepoMargin>>
#if 0
    template<>
    class/*or struct*/ vector<struct sophis::DAL::SSRepoMargin, class std::allocator<struct sophis::DAL::SSRepoMargin>>
    {
    public:
    };
#endif
// <struct sophis::listed_market::SeriesKey, class std::allocator<struct sophis::listed_market::SeriesKey>>
#if 0
    template<>
    class vector<struct sophis::listed_market::SeriesKey, class std::allocator<struct sophis::listed_market::SeriesKey>>
    {
    public:
    };
#endif
// <struct sophis::market_data::SSDividend, class std::allocator<struct sophis::market_data::SSDividend>>
#if 0
    template<>
    class/*or struct*/ vector<struct sophis::market_data::SSDividend, class std::allocator<struct sophis::market_data::SSDividend>>
    {
    public:
    };
#endif
// <struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping, class std::allocator<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>>
#if 0
    template<>
    class vector<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping, class std::allocator<struct sophis::portfolio::CSRTaxLotHandler::SProvisionMapping>>
    {
    public:
    };
#endif
// <unsigned __int64, class std::allocator<unsigned __int64>>
#if 0
    template<>
    class vector<unsigned __int64, class std::allocator<unsigned __int64>>
    {
    public:
    };
#endif
// <void const *, class std::allocator<void const *>>
#if 0
    template<>
    class vector<void const *, class std::allocator<void const *>>
    {
    public:
    };
#endif
#endif


#if 0
    template<>
    class vector<class sophis::tools::CSRAbstractEvent *, class std::allocator<class sophis::tools::CSRAbstractEvent *>>
    {
    public:
    };
#endif


    // Functions:
    void _Xbad_function_call(void)
    void _Xlength_error(char const *)
    void _Xout_of_range(char const *)
    bool uncaught_exception(void)
  public:
  };

  class/*or struct*/ type_info
  {
    // VFTable. Offset=0, Size=1, Start=0
    // Owner: SophisXmlTools.dll
    // Added virtual functions:
    public: virtual void unknown_vf_0_0(void); // 0
    // VFTable with 0 offset end

  public:
  };


  // Functions:
  class stdbasic_ostream<char, struct stdchar_traits<char>> & operator<<(class stdbasic_ostream<char, struct stdchar_traits<char>> &, class sophisToolsbaseExceptionBase const &)
  long DonneNouveauSicovam(void)
  long DonneSicoParReference(char const *, enum sophisinstrumenteInstrumentType)
  struct TableauDefProd ** GiveCoutPretEmpruntFromContext(struct sophisDALBaseInstrumentData *)
  struct TableauDefProd ** GiveDividendeFromContext(struct sophisDALBaseInstrumentData *)
  struct sophisDALBaseInstrumentData * RechercheTitre(long)
  void after_historique_save_session_and_commit(void)
  void sendMultiHistoricMessages(class stdlist<class sophiseventCSHistoricPriceData *, class stdallocator<class sophiseventCSHistoricPriceData *>> const &, bool, bool, class sophistoolsCSREventVector *)
  // Variables:
  long (__cdecl *GetAffectationByName)(char const *)
  int gCSXMLDocumentClipboardAllotment
  struct TConfigClient gConfigClient
  class CSRColleUtilisateur_v1 *gExtCollage
  bool gIgnoreLocalHistEvents
  class CSSimulation gSimulation
public:
};
