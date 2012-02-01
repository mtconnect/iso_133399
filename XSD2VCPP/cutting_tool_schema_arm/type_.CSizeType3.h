#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSizeType3
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSizeType3



namespace cutting_tool_schema_arm
{

class CSizeType3 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSizeType3(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSizeType3(CSizeType3 const& init);
	void operator=(CSizeType3 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSizeType3); }
	MemberElement<CDocument_size_property, _altova_mi_altova_CSizeType3_altova_Document_size_property> Document_size_property;
	struct Document_size_property { typedef Iterator<CDocument_size_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSizeType3
