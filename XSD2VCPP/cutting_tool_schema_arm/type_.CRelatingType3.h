#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType3
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType3



namespace cutting_tool_schema_arm
{

class CRelatingType3 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType3(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType3(CRelatingType3 const& init);
	void operator=(CRelatingType3 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType3); }
	MemberElement<CDocument_version, _altova_mi_altova_CRelatingType3_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType3
