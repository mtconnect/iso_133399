#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType25
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType25



namespace cutting_tool_schema_arm
{

class CDescriptionType25 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDescriptionType25(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDescriptionType25(CDescriptionType25 const& init);
	void operator=(CDescriptionType25 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDescriptionType25); }
	MemberElement<CDefault_language_stringType, _altova_mi_altova_CDescriptionType25_altova_Default_language_string> Default_language_string;
	struct Default_language_string { typedef Iterator<CDefault_language_stringType> iterator; };
	MemberElement<CMulti_language_string, _altova_mi_altova_CDescriptionType25_altova_Multi_language_string> Multi_language_string;
	struct Multi_language_string { typedef Iterator<CMulti_language_string> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescriptionType25
