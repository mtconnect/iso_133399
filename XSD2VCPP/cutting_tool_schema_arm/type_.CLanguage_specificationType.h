#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguage_specificationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguage_specificationType



namespace cutting_tool_schema_arm
{

class CLanguage_specificationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLanguage_specificationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLanguage_specificationType(CLanguage_specificationType const& init);
	void operator=(CLanguage_specificationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLanguage_specificationType); }
	MemberElement<CLanguage, _altova_mi_altova_CLanguage_specificationType_altova_Language> Language;
	struct Language { typedef Iterator<CLanguage> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLanguage_specificationType
