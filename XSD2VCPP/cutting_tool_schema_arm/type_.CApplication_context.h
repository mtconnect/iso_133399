#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CApplication_context
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CApplication_context



namespace cutting_tool_schema_arm
{

class CApplication_context : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CApplication_context(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CApplication_context(CApplication_context const& init);
	void operator=(CApplication_context const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CApplication_context); }

	MemberAttribute<string_type,_altova_mi_altova_CApplication_context_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CApplication_context_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CApplication_context_altova_Application_domain> Application_domain;
	struct Application_domain { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CDescriptionType2, _altova_mi_altova_CApplication_context_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType2> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CApplication_context
